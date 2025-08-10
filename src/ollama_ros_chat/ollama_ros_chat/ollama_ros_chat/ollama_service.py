#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from ollama_ros_msgs.srv import Chat  # 替换为你实际的服务消息类型
import json
import requests
from typing import List, Dict, Optional
import time

class OllamaChatNode(Node):
    def __init__(self):
        super().__init__('ollama_server')
        
        # 创建服务
        self.chat_service = self.create_service(
            Chat,  # 替换为你实际的服务消息类型
            'chat_service',
            self.handle_chat_request
        )
        
        # Ollama配置
        self.base_url = "http://localhost:11434"
        self.use_model = None
        self.stream = False
        self.temperature = 0.5
        self.history_length = 10
        self.available_models = []
        self.conversation_history = [{"role": "system", "content": "You are a helpful assistant"}]
        
        # 初始化模型
        self.initialize_models()
        self.select_model()
        
        self.get_logger().info('Ollama Chat Server Node initialized')

    def initialize_models(self):
        """Query available Ollama models"""
        try:
            response = requests.get(f"{self.base_url}/api/tags")
            if response.status_code == 200:
                models = response.json()['models']
                self.available_models = [model['name'] for model in models]
                self.get_logger().info(f"Available models: {', '.join(self.available_models)}")
                return self.available_models
            else:
                self.get_logger().error(f"Failed to get models. Status code: {response.status_code}")
                return []
        except Exception as e:
            self.get_logger().error(f"Error getting models: {e}")
            return []

    def select_model(self) -> None:
        """Select first available model"""
        if not self.available_models:
            self.get_logger().error("No models available")
            return
        
        self.use_model = self.available_models[0]
        self.get_logger().info(f"Selected model: {self.use_model}")
        response = requests.post(f"{self.base_url}/api/generate", json={'model': self.use_model})

    def handle_chat_request(self, request, response):
        """Handle incoming chat service requests"""
        try:
            # 解析接收到的消息
            user_message = request.content
            
            # 更新对话历史
            self.conversation_history.append({"role": "user", "content": user_message})
            print("Received message:", user_message,flush=True)
            # 获取响应
            time_start = time.time()
            response_content = self.get_response(self.conversation_history)
            time_end = time.time()
            print("Response_content:", response_content,end='\n',flush=True)
            print("Time taken:", time_end - time_start,flush=True)
            
            
            if response_content:
                # 更新对话历史
                self.conversation_history.append({"role": "assistant", "content": response_content})
                self.conversation_history = self.process_data(self.conversation_history)
                
                # 设置响应内容
                response.content = response_content
                response.model = self.use_model
                response.is_done = True
            else:
                response.content = "Error processing request"
                response.model = self.use_model
                response.is_done = False
                
        except Exception as e:
            self.get_logger().error(f"Error processing request: {e}")
            response.content = "Error processing request"
            response.model = self.use_model
            response.is_done = False
        
        return response

    def get_response(self, messages: List[Dict[str, str]]) -> Optional[str]:
        """Get response from Ollama model"""
        try:
            prompt = self._convert_messages_to_prompt(messages)
            url = f"{self.base_url}/api/generate"
            data = {
                "model": self.use_model,
                "prompt": prompt,
                "stream": self.stream,
                "temperature": self.temperature
            }

            response = requests.post(url, json=data, stream=self.stream, timeout=120)
            if response.status_code == 200:
                full_response = ""
                for line in response.iter_lines():
                    if line:
                        json_response = json.loads(line)
                        if 'response' in json_response:
                            chunk = json_response['response']
                            full_response += chunk
                            #print(chunk, end='', flush=True)
                            if json_response['done'] is True:
                                return full_response
            else:
                self.get_logger().error(f"Error: Received status code {response.status_code}")
                return None

        except Exception as e:
            self.get_logger().error(f"An error occurred: {e}")
            return None

    def _convert_messages_to_prompt(self, messages: List[Dict[str, str]]) -> str:
        """Convert message history to a format Ollama can understand"""
        prompt = ""
        for message in messages:
            role = message["role"]
            content = message["content"]
            if role == "system":
                prompt += f"system: {content}\n"
            elif role == "user":
                prompt += f"user: {content}\n"
            elif role == "assistant":
                prompt += f"assistant: {content}\n"
        return prompt

    def process_data(self, data_list: List[Dict[str, str]]) -> List[Dict[str, str]]:
        """Maintain conversation history within specified length"""
        if self.history_length <= 0:
            raise ValueError("History length must be a positive integer")
        return data_list[-self.history_length:]

def main(args=None):
    rclpy.init(args=args)
    chat_server = OllamaChatNode()
    try:
        rclpy.spin(chat_server)
    except KeyboardInterrupt:
        pass
    finally:
        chat_server.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
