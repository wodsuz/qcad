// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaLayerListener.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RDocumentInterface.h"
            
            
        // includes for base ecma wrapper classes
         void REcmaLayerListener::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RLayerListener*) 0)));
        protoCreated = true;
    }

    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, updateLayers, "updateLayers");
            
            REcmaHelper::registerFunction(&engine, proto, clearLayers, "clearLayers");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RLayerListener*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RLayerListener",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaLayerListener::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
           return REcmaHelper::throwError("Abstract class RLayerListener: Cannot be constructed.",
               context); 
    }
    

    // conversion functions for base classes:
    

    // returns class name:
     QScriptValue REcmaLayerListener::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RLayerListener"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaLayerListener::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaLayerListener::updateLayers
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaLayerListener::updateLayers", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaLayerListener::updateLayers";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RLayerListener* self = 
                        getSelf("updateLayers", context);
                  

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
                        return REcmaHelper::throwError("RLayerListener: Argument 0 is not of type RDocumentInterface *RDocumentInterface *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->updateLayers(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RLayerListener.updateLayers().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaLayerListener::updateLayers", context, engine);
            return result;
        }
         QScriptValue
        REcmaLayerListener::clearLayers
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaLayerListener::clearLayers", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaLayerListener::clearLayers";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RLayerListener* self = 
                        getSelf("clearLayers", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->clearLayers();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RLayerListener.clearLayers().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaLayerListener::clearLayers", context, engine);
            return result;
        }
         QScriptValue REcmaLayerListener::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RLayerListener* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RLayerListener(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaLayerListener::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RLayerListener* self = getSelf("RLayerListener", context);
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
    RLayerListener* REcmaLayerListener::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RLayerListener* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RLayerListener >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RLayerListener.%1(): "
                        "This object is not a RLayerListener").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RLayerListener* REcmaLayerListener::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RLayerListener* selfBase = getSelf(fName, context);
                RLayerListener* self = dynamic_cast<RLayerListener*>(selfBase);
                //return REcmaHelper::scriptValueTo<RLayerListener >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RLayerListener.%1(): "
                    "This object is not a RLayerListener").arg(fName),
                    context);
            }

            return self;
            


        }
        