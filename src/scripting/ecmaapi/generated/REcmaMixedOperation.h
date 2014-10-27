// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMAMIXEDOPERATION_H
        #define RECMAMIXEDOPERATION_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RMixedOperation.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class QCADECMAAPI_EXPORT REcmaMixedOperation {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getROperation(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getRRequireHeap(QScriptContext *context,
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
        addObject
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        deleteObject
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        endCycle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        apply
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RMixedOperation* getSelf(const QString& fName, QScriptContext* context)
    ;static RMixedOperation* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  QScriptValue toScriptValueEnumMode(QScriptEngine* engine, const RMixedOperation::Mode& value)
    ;static  void fromScriptValueEnumMode(const QScriptValue& value, RMixedOperation::Mode& out)
    ;};
    #endif
    