# LSlidar 多角度屏蔽功能说明

## 概述

本次修改为LSlidar驱动添加了通过yaml配置文件设置多个屏蔽角度的功能，无需再在源代码中硬编码角度值。

## 主要改动

### 1. 头文件修改 (lslidar_driver.h)
- 添加了三个新的成员变量：
  - `int truncated_mode_`: 多角度屏蔽开关
  - `std::vector<double> scan_crop_min`: 屏蔽角度起始值列表
  - `std::vector<double> scan_crop_max`: 屏蔽角度结束值列表

### 2. 源文件修改 (lslidar_driver.cc)
- 移除了硬编码的全局变量
- 在`loadParameters()`函数中添加了从yaml文件读取多角度屏蔽参数的功能
- 修改了角度屏蔽逻辑，改用vector存储的角度范围
- 添加了参数验证和日志输出

## 使用方法

### 配置文件设置

在yaml配置文件中添加以下参数：

```yaml
/lslidar_driver_node:
  ros__parameters: 
    # 其他参数...
    
    # 单角度裁剪（使用多角度裁剪时应设为0）
    angle_disable_min: 0.0
    angle_disable_max: 0.0
    
    # 多角度裁剪功能
    truncated_mode_: 1                      # 0=关闭, 1=开启
    scan_crop_min: [10.0, 50.0, 135.0]     # 屏蔽起始角度列表（度）
    scan_crop_max: [30.0, 60.0, 225.0]     # 屏蔽结束角度列表（度）
```

### 参数说明

- `truncated_mode_`: 多角度屏蔽功能开关
  - `0`: 关闭多角度屏蔽功能（默认值）
  - `1`: 开启多角度屏蔽功能

- `scan_crop_min`: 屏蔽角度范围的起始角度列表（单位：度）
- `scan_crop_max`: 屏蔽角度范围的结束角度列表（单位：度）

**注意**: `scan_crop_min`和`scan_crop_max`必须具有相同的元素数量，每对对应的值定义一个屏蔽角度范围。

### 使用示例

#### 示例1：屏蔽单个角度范围
```yaml
truncated_mode_: 1
scan_crop_min: [135.0]
scan_crop_max: [225.0]
```
这将屏蔽135°到225°的角度范围。

#### 示例2：屏蔽多个角度范围
```yaml
truncated_mode_: 1
scan_crop_min: [10.0, 50.0, 135.0]
scan_crop_max: [30.0, 60.0, 225.0]
```
这将屏蔽三个角度范围：10°-30°、50°-60°、135°-225°。

#### 示例3：关闭多角度屏蔽
```yaml
truncated_mode_: 0
scan_crop_min: []
scan_crop_max: []
```

## 参数验证

驱动程序会自动验证配置参数：
- 检查`scan_crop_min`和`scan_crop_max`的长度是否一致
- 如果启用了`truncated_mode_`但没有提供角度范围，会自动关闭该功能
- 所有验证结果都会在日志中输出

## 日志输出

启用多角度屏蔽功能时，控制台会显示类似以下信息：
```
[INFO] Multi-angle cropping enabled with 3 angle ranges
[INFO] Crop range 0: [10.0°, 30.0°]
[INFO] Crop range 1: [50.0°, 60.0°]
[INFO] Crop range 2: [135.0°, 225.0°]
```

## 向后兼容性

- 如果不设置新参数，驱动程序会使用默认值（关闭多角度屏蔽）
- 原有的单角度屏蔽功能（`angle_disable_min`/`angle_disable_max`）仍然有效
- 建议在使用多角度屏蔽时将单角度屏蔽参数设为0以避免冲突

## 配置文件

提供了示例配置文件：
- `lsm10_net_multi_crop.yaml`: 展示多角度屏蔽功能的完整配置示例
- `lsm10_net.yaml`: 更新了参数说明，兼容新功能
