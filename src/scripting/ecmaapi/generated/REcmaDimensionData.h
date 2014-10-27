// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMADIMENSIONDATA_H
        #define RECMADIMENSIONDATA_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RDimensionData.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class QCADECMAAPI_EXPORT REcmaDimensionData {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getREntityData(QScriptContext *context,
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
        getBoundingBox
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isValid
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setDefinitionPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDefinitionPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setText
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getText
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setUpperTolerance
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setLowerTolerance
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setTextPosition
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTextPosition
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setFontName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getFontName
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLinearFactor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setLinearFactor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDistanceTo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        intersectsWith
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getReferencePoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        moveReferencePoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        move
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        rotate
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        scale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        mirror
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDimscale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDimexo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDimexe
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDimasz
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDimgap
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDimtxt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        useArchTick
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasCustomTextPosition
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCustomTextPosition
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLineSpacingStyle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLineSpacingFactor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTextAngle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDimensionLineShapes
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getArrow
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTextData
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        initTextData
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        updateTextData
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMeasurement
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMeasuredValue
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAutoLabel
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        formatLabel
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        formatAngleLabel
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        update
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RDimensionData* getSelf(const QString& fName, QScriptContext* context)
    ;static RDimensionData* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    