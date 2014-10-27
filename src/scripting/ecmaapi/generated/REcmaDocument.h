// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMADOCUMENT_H
        #define RECMADOCUMENT_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RDocument.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class QCADECMAAPI_EXPORT REcmaDocument {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getRRequireHeap(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        init
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        initLinetypes
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStorage
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSpatialIndex
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTransactionStack
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clear
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryClosestXY
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllObjects
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllUcs
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllLayers
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllBlocks
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllViews
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllLinetypes
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryLayerEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryBlockEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryChildEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasChildEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryBlockReferences
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryAllBlockReferences
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryContainedEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryInfiniteEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryIntersectedEntitiesXY
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryIntersectedShapesXY
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryContainedEntitiesXY
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        querySelectedEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryObject
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryObjectDirect
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryObjectByHandle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryEntityDirect
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryUcs
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryLayer
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryLayerDirect
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryBlock
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryBlockDirect
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryView
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryLinetype
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clearSelection
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        selectAllEntites
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        selectEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        deselectEntity
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        selectEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        deselectEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isSelected
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isLayerLocked
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isEntityEditable
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isLayerFrozen
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isBlockFrozen
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isEntityLayerFrozen
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasSelection
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBoundingBox
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSelectionBox
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        rebuildSpatialIndex
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        addToSpatialIndex
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        blockContainsReferences
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        removeBlockFromSpatialIndex
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        addBlockToSpatialIndex
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        removeFromSpatialIndex
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        updateAllEntities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        undo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        redo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isUndoAvailable
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isRedoAvailable
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        resetTransactionStack
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setFileName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getFileName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setFileVersion
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getFileVersion
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryCurrentLayer
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCurrentLayer
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCurrentLayerId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCurrentColor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCurrentColor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCurrentLineweight
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCurrentLineweight
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCurrentLinetype
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCurrentLinetypePattern
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCurrentLinetypeId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCurrentLinetypePattern
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryCurrentBlock
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCurrentBlock
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCurrentBlockId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        queryCurrentView
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCurrentView
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCurrentViewId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTempBlockName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBlockName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBlockNames
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLayerName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLayerNames
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getViewNames
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasLayer
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasBlock
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasView
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasLinetype
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLayerId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBlockId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getModelSpaceBlockId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLinetypeId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLinetypeByLayerId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLinetypeByBlockId
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLinetypeName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLinetypeDescription
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLinetypeLabel
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLinetypeNames
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLinetypePatterns
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isByLayer
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isByBlock
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMaxLineweight
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getVariables
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setVariable
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getVariable
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasVariable
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setKnownVariable
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getKnownVariable
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setUnit
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getUnit
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isMetric
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setDimensionFont
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDimensionFont
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setLinetypeScale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLinetypeScale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLinearFormat
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLinearPrecision
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        showLeadingZeroes
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        showTrailingZeroes
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        showLeadingZeroesAngle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        showTrailingZeroesAngle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAngleFormat
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAnglePrecision
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isModified
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setModified
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        copyVariablesFrom
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getClipboard
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        dump
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RDocument* getSelf(const QString& fName, QScriptContext* context)
    ;static RDocument* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    