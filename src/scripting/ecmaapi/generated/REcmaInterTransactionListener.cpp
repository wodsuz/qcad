// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaInterTransactionListener.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RDocument.h"
            
                #include "REntity.h"
            
                #include "RTransaction.h"
            
            
        // includes for base ecma wrapper classes
         void REcmaInterTransactionListener::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RInterTransactionListener*) 0)));
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
    
            REcmaHelper::registerFunction(&engine, proto, updateInterTransactionListener, "updateInterTransactionListener");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RInterTransactionListener*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RInterTransactionListener",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaInterTransactionListener::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
           return REcmaHelper::throwError("Abstract class RInterTransactionListener: Cannot be constructed.",
               context); 
    }
    

    // conversion functions for base classes:
    

    // returns class name:
     QScriptValue REcmaInterTransactionListener::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RInterTransactionListener"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaInterTransactionListener::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaInterTransactionListener::updateInterTransactionListener
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaInterTransactionListener::updateInterTransactionListener", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaInterTransactionListener::updateInterTransactionListener";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RInterTransactionListener* self = 
                        getSelf("updateInterTransactionListener", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RDocument * */
    
    ){
    // prepare arguments:
    
                    // argument is pointer
                    RDocument * a0 = NULL;

                    a0 = 
                        REcmaHelper::scriptValueTo<RDocument >(
                            context->argument(0)
                        );
                    
                    if (a0==NULL && 
                        !context->argument(0).isNull()) {
                        return REcmaHelper::throwError("RInterTransactionListener: Argument 0 is not of type RDocument *RDocument *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->updateInterTransactionListener(a0);
    } else


        
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RDocument * */
     && (
            context->argument(1).isVariant() || 
            context->argument(1).isQObject() || 
            context->argument(1).isNull()
        ) /* type: RTransaction * */
    
    ){
    // prepare arguments:
    
                    // argument is pointer
                    RDocument * a0 = NULL;

                    a0 = 
                        REcmaHelper::scriptValueTo<RDocument >(
                            context->argument(0)
                        );
                    
                    if (a0==NULL && 
                        !context->argument(0).isNull()) {
                        return REcmaHelper::throwError("RInterTransactionListener: Argument 0 is not of type RDocument *RDocument *.", context);                    
                    }
                
                    // argument is pointer
                    RTransaction * a1 = NULL;

                    a1 = 
                        REcmaHelper::scriptValueTo<RTransaction >(
                            context->argument(1)
                        );
                    
                    if (a1==NULL && 
                        !context->argument(1).isNull()) {
                        return REcmaHelper::throwError("RInterTransactionListener: Argument 1 is not of type RTransaction *RTransaction *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->updateInterTransactionListener(a0
        ,
    a1);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RInterTransactionListener.updateInterTransactionListener().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaInterTransactionListener::updateInterTransactionListener", context, engine);
            return result;
        }
         QScriptValue REcmaInterTransactionListener::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RInterTransactionListener* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RInterTransactionListener(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaInterTransactionListener::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RInterTransactionListener* self = getSelf("RInterTransactionListener", context);
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
    RInterTransactionListener* REcmaInterTransactionListener::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RInterTransactionListener* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RInterTransactionListener >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RInterTransactionListener.%1(): "
                        "This object is not a RInterTransactionListener").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RInterTransactionListener* REcmaInterTransactionListener::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RInterTransactionListener* selfBase = getSelf(fName, context);
                RInterTransactionListener* self = dynamic_cast<RInterTransactionListener*>(selfBase);
                //return REcmaHelper::scriptValueTo<RInterTransactionListener >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RInterTransactionListener.%1(): "
                    "This object is not a RInterTransactionListener").arg(fName),
                    context);
            }

            return self;
            


        }
        