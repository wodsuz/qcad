// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMALINEWEIGHTCOMBO_H
        #define RECMALINEWEIGHTCOMBO_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RLineweightCombo.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class QCADECMAAPI_EXPORT REcmaLineweightCombo {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getQComboBox(QScriptContext *context,
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
        getLineweight
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setLineweight
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getOnlyFixed
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setOnlyFixed
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        lineweightChanged
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RLineweightCombo* getSelf(const QString& fName, QScriptContext* context)
    ;static RLineweightCombo* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  void fromScriptValue(const QScriptValue& value,
        RLineweightCombo*
        &out) {
            QObject* o = value.toQObject();
            out = qobject_cast<
            RLineweightCombo*>(o);
        }
    static  QScriptValue toScriptValue(QScriptEngine *engine,
        RLineweightCombo*
        const &in){
            QScriptValue s = engine->newQObject(in, QScriptEngine::QtOwnership,
            QScriptEngine::PreferExistingWrapperObject);
            /*
            if(s.isNull()){
               REcmaHelper::throwError("This object is null.", engine->currentContext());
            }
            */
            return s;
        }
    };
    #endif
    