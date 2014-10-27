// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaImportListenerAdapter.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaImportListener.h"
                 void REcmaImportListenerAdapter::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RImportListenerAdapter*) 0)));
        protoCreated = true;
    }

    
        // primary base class QObject:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<QObject*>());

            if (dpt.isValid()) {
                proto->setPrototype(dpt);
            }
          
        /*
        REcmaImportListener::initEcma(engine, proto);
          
        */
    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    
        // conversion for base class QObject
        REcmaHelper::registerFunction(&engine, proto, getQObject, "getQObject");
        
        // conversion for base class RImportListener
        REcmaHelper::registerFunction(&engine, proto, getRImportListener, "getRImportListener");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

        // properties of secondary base class RImportListener:
        

        // methods of secondary base class RImportListener:
        

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, preImportEvent, "preImportEvent");
            
            REcmaHelper::registerFunction(&engine, proto, postImportEvent, "postImportEvent");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RImportListenerAdapter*>(), *proto);

        
                        qScriptRegisterMetaType<
                        RImportListenerAdapter*>(
                        &engine, toScriptValue, fromScriptValue, *proto);
                    
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RImportListenerAdapter",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaImportListenerAdapter::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RImportListenerAdapter(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
    
            // constructor without variants:
            
    if( context->argumentCount() ==
        0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RImportListenerAdapter
                    * cppResult =
                    new
                    RImportListenerAdapter
                    ();
                
                    result = engine->newQObject(context->thisObject(), cppResult);
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RImportListenerAdapter(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaImportListenerAdapter::getQObject(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                QObject* cppResult =
                    qscriptvalue_cast<RImportListenerAdapter*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
             QScriptValue REcmaImportListenerAdapter::getRImportListener(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RImportListener* cppResult =
                    qscriptvalue_cast<RImportListenerAdapter*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaImportListenerAdapter::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RImportListenerAdapter"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaImportListenerAdapter::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("QObject");
    
        list.append("RImportListener");
    

        return qScriptValueFromSequence(engine, list);
    }
    
        // properties of secondary base class RImportListener:
        

        // methods of secondary base class RImportListener:
        

    // properties:
    

    // public methods:
     QScriptValue
        REcmaImportListenerAdapter::preImportEvent
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaImportListenerAdapter::preImportEvent", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaImportListenerAdapter::preImportEvent";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RImportListenerAdapter* self = 
                        getSelf("preImportEvent", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RDocumentInterface * */
    
    ){
    // prepare arguments:
    
                    // argument is pointer
                    RDocumentInterface * a0 = NULL;

                    a0 = 
                        REcmaHelper::scriptValueTo<RDocumentInterface >(
                            context->argument(0)
                        );
                    
                    if (a0==NULL && 
                        !context->argument(0).isNull()) {
                        return REcmaHelper::throwError("RImportListenerAdapter: Argument 0 is not of type RDocumentInterface *RDocumentInterface *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->preImportEvent(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RImportListenerAdapter.preImportEvent().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaImportListenerAdapter::preImportEvent", context, engine);
            return result;
        }
         QScriptValue
        REcmaImportListenerAdapter::postImportEvent
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaImportListenerAdapter::postImportEvent", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaImportListenerAdapter::postImportEvent";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RImportListenerAdapter* self = 
                        getSelf("postImportEvent", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RDocumentInterface * */
    
    ){
    // prepare arguments:
    
                    // argument is pointer
                    RDocumentInterface * a0 = NULL;

                    a0 = 
                        REcmaHelper::scriptValueTo<RDocumentInterface >(
                            context->argument(0)
                        );
                    
                    if (a0==NULL && 
                        !context->argument(0).isNull()) {
                        return REcmaHelper::throwError("RImportListenerAdapter: Argument 0 is not of type RDocumentInterface *RDocumentInterface *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->postImportEvent(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RImportListenerAdapter.postImportEvent().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaImportListenerAdapter::postImportEvent", context, engine);
            return result;
        }
         QScriptValue REcmaImportListenerAdapter::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RImportListenerAdapter* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RImportListenerAdapter(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaImportListenerAdapter::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RImportListenerAdapter* self = getSelf("RImportListenerAdapter", context);
        //Q_ASSERT(self!=NULL);
        if (self==NULL) {
            return REcmaHelper::throwError("self is NULL", context);
        }
        
    
        delete self;
        context->thisObject().setData(engine->nullValue());
        context->thisObject().prototype().setData(engine->nullValue());
        context->thisObject().setPrototype(engine->nullValue());
        context->thisObject().setScriptClass(NULL);
        return engine->undefinedValue();
    }
    RImportListenerAdapter* REcmaImportListenerAdapter::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RImportListenerAdapter* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RImportListenerAdapter >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RImportListenerAdapter.%1(): "
                        "This object is not a RImportListenerAdapter").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RImportListenerAdapter* REcmaImportListenerAdapter::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RImportListenerAdapter* selfBase = getSelf(fName, context);
                RImportListenerAdapter* self = dynamic_cast<RImportListenerAdapter*>(selfBase);
                //return REcmaHelper::scriptValueTo<RImportListenerAdapter >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RImportListenerAdapter.%1(): "
                    "This object is not a RImportListenerAdapter").arg(fName),
                    context);
            }

            return self;
            


        }
         void fromScriptValue(const QScriptValue& value,
        RImportListenerAdapter*
        &out) {
            QObject* o = value.toQObject();
            out = qobject_cast<
            RImportListenerAdapter*>(o);
        }
     QScriptValue toScriptValue(QScriptEngine *engine,
        RImportListenerAdapter*
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
    