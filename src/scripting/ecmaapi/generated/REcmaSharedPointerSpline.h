// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is copyable.
        
        #ifndef RECMASHAREDPOINTERSPLINE_H
        #define RECMASHAREDPOINTERSPLINE_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RSpline.h"
            
            typedef QSharedPointer<RSpline> RSplinePointer;
        

        /**
         * \ingroup scripting_ecmaapi
         */
        class QCADECMAAPI_EXPORT REcmaSharedPointerSpline {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getRShape(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getRExplodable(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getRDirected(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;
        // properties of secondary base class RExplodable:
        

        // methods of secondary base class RExplodable:
        
        // properties of secondary base class RDirected:
        

        // methods of secondary base class RDirected:
        static  QScriptValue
        getDistanceFromStart
        (QScriptContext* context, QScriptEngine* engine) 
        ;

    // properties:
    static  QScriptValue getSetControlPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue getSetKnotVector
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue getSetWeights
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue getSetFitPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue getSetDegree
        (QScriptContext* context, QScriptEngine* engine) 
        ;

    // public methods:
    static  QScriptValue
        clone
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        copySpline
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        createSplinesFromArc
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        createBezierFromSmallArc
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        to2D
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isInterpolated
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        appendControlPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        removeLastControlPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setControlPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getControlPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getControlPointsWrapped
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        countControlPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        appendFitPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        removeLastFitPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setFitPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getFitPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        countFitPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasFitPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getKnotVector
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getActualKnotVector
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setKnotVector
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        appendKnot
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getWeights
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setDegree
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDegree
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getOrder
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setPeriodic
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isClosed
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isPeriodic
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDirection1
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDirection2
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStartPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEndPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setStartPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setEndPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setTangents
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        unsetTangents
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setTangentAtStart
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTangentAtStart
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        unsetTangentAtStart
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setTangentAtEnd
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTangentAtEnd
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        unsetTangentAtEnd
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        updateTangentsPeriodic
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBoundingBox
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLength
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPointAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEndPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMiddlePoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMiddlePoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCenterPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPointsWithDistanceToEnd
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getVectorTo
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
        flipHorizontal
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        flipVertical
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        reverse
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTransformed
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTrimEnd
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        trimStartPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        trimEndPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        toPolyline
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getExploded
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBezierSegments
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isValid
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTDelta
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTMin
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTMax
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTAtPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSegments
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        updateFromControlPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        updateFromFitPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        update
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasProxy
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue copy
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RSpline* getSelf(const QString& fName, QScriptContext* context)
    ;static RSpline* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  QScriptValue data
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue isNull
    (QScriptContext *context, QScriptEngine *engine)
    ;};
    #endif
    