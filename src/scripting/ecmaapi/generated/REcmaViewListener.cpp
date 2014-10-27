// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaViewListener.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RDocumentInterface.h"
            
            
        // includes for base ecma wrapper classes
         void REcmaViewListener::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RViewListener*) 0)));
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
    
            REcmaHelper::registerFunction(&engine, proto, updateViews, "updateViews");
            
            REcmaHelper::registerFunction(&engine, proto, clearViews, "clearViews");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RViewListener*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RViewListener",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaViewListener::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
           return REcmaHelper::throwError("Abstract class RViewListener: Cannot be constructed.",
               context); 
    }
    

    // conversion functions for base classes:
    

    // returns class name:
     QScriptValue REcmaViewListener::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RViewListener"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaViewListener::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaViewListener::updateViews
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaViewListener::updateViews", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaViewListener::updateViews";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RViewListener* self = 
                        getSelf("updateViews", context);
                  

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
                        return REcmaHelper::throwError("RViewListener: Argument 0 is not of type RDocumentInterface *RDocumentInterface *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->updateViews(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RViewListener.updateViews().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaViewListener::updateViews", context, engine);
            return result;
        }
         QScriptValue
        REcmaViewListener::clearViews
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaViewListener::clearViews", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaViewListener::clearViews";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RViewListener* self = 
                        getSelf("clearViews", context);
                  

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
    
               self->clearViews();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RViewListener.clearViews().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaViewListener::clearViews", context, engine);
            return result;
        }
         QScriptValue REcmaViewListener::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RViewListener* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RViewListener(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaViewListener::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RViewListener* self = getSelf("RViewListener", context);
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
    RViewListener* REcmaViewListener::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RViewListener* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RViewListener >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RViewListener.%1(): "
                        "This object is not a RViewListener").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RViewListener* REcmaViewListener::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RViewListener* selfBase = getSelf(fName, context);
                RViewListener* self = dynamic_cast<RViewListener*>(selfBase);
                //return REcmaHelper::scriptValueTo<RViewListener >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RViewListener.%1(): "
                    "This object is not a RViewListener").arg(fName),
                    context);
            }

            return self;
            


        }
        