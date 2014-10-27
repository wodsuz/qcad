// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMAPLUGININTERFACE_H
        #define RECMAPLUGININTERFACE_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RPluginInterface.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class QCADECMAAPI_EXPORT REcmaPluginInterface {

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
        init
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        uninit
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        postInit
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPluginInfo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RPluginInterface* getSelf(const QString& fName, QScriptContext* context)
    ;static RPluginInterface* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  QScriptValue toScriptValueEnumInitStatus(QScriptEngine* engine, const RPluginInterface::InitStatus& value)
    ;static  void fromScriptValueEnumInitStatus(const QScriptValue& value, RPluginInterface::InitStatus& out)
    ;};
    #endif
    