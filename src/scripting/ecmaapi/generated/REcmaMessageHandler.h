// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMAMESSAGEHANDLER_H
        #define RECMAMESSAGEHANDLER_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RMessageHandler.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class QCADECMAAPI_EXPORT REcmaMessageHandler {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        handleUserMessage
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        handleUserInfo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        handleUserWarning
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        handleUserCommand
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RMessageHandler* getSelf(const QString& fName, QScriptContext* context)
    ;static RMessageHandler* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    