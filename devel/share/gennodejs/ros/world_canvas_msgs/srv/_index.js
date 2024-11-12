
"use strict";

let DeleteAnnotations = require('./DeleteAnnotations.js')
let ListMaps = require('./ListMaps.js')
let ListWorlds = require('./ListWorlds.js')
let PubAnnotationsData = require('./PubAnnotationsData.js')
let YAMLImport = require('./YAMLImport.js')
let GetAnnotationsData = require('./GetAnnotationsData.js')
let PublishMap = require('./PublishMap.js')
let RenameMap = require('./RenameMap.js')
let SaveAnnotationsData = require('./SaveAnnotationsData.js')
let DeleteMap = require('./DeleteMap.js')
let EditAnnotationsData = require('./EditAnnotationsData.js')
let ResetDatabase = require('./ResetDatabase.js')
let SetRelationship = require('./SetRelationship.js')
let SetKeyword = require('./SetKeyword.js')
let YAMLExport = require('./YAMLExport.js')
let GetAnnotations = require('./GetAnnotations.js')
let SaveMap = require('./SaveMap.js')

module.exports = {
  DeleteAnnotations: DeleteAnnotations,
  ListMaps: ListMaps,
  ListWorlds: ListWorlds,
  PubAnnotationsData: PubAnnotationsData,
  YAMLImport: YAMLImport,
  GetAnnotationsData: GetAnnotationsData,
  PublishMap: PublishMap,
  RenameMap: RenameMap,
  SaveAnnotationsData: SaveAnnotationsData,
  DeleteMap: DeleteMap,
  EditAnnotationsData: EditAnnotationsData,
  ResetDatabase: ResetDatabase,
  SetRelationship: SetRelationship,
  SetKeyword: SetKeyword,
  YAMLExport: YAMLExport,
  GetAnnotations: GetAnnotations,
  SaveMap: SaveMap,
};
