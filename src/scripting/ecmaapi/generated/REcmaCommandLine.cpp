// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaCommandLine.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
         void REcmaCommandLine::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RCommandLine*) 0)));
        protoCreated = true;
    }

    
        // primary base class QLineEdit:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<QLineEdit*>());

            if (dpt.isValid()) {
                proto->setPrototype(dpt);
            }
          
        /*
        
        */
    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    
        // conversion for base class QLineEdit
        REcmaHelper::registerFunction(&engine, proto, getQLineEdit, "getQLineEdit");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, getLastCommand, "getLastCommand");
            
            REcmaHelper::registerFunction(&engine, proto, appendCommand, "appendCommand");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RCommandLine*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RCommandLine",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaCommandLine::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RCommandLine(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
        
            // generate constructor variants:
            
    if( context->argumentCount() ==
        0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RCommandLine
                    * cppResult =
                    new
                    RCommandLine
                    ();
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    if( context->argumentCount() ==
        1
                && (
                
                        context->argument(
                        0
                        ).isQObject()
                        ||
                    
                        context->argument(
                        0
                        ).isNull()
                ) /* type: QWidget * */
            
    ){
    // prepare arguments:
    
            // argument isQObject
            QWidget *
            a0 =
            qobject_cast<
            QWidget *>
            ( context->argument(
            0
            ).
            toQObject()
            );
        
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RCommandLine
                    * cppResult =
                    new
                    RCommandLine
                    (
                    a0
                    );
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RCommandLine(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaCommandLine::getQLineEdit(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                QLineEdit* cppResult =
                    qscriptvalue_cast<RCommandLine*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaCommandLine::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RCommandLine"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaCommandLine::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("QLineEdit");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaCommandLine::getLastCommand
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaCommandLine::getLastCommand", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaCommandLine::getLastCommand";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RCommandLine* self = 
                        getSelf("getLastCommand", context);
                  

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
    // return type 'QString'
    QString cppResult =
        
               self->getLastCommand();
        // return type: QString
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RCommandLine.getLastCommand().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaCommandLine::getLastCommand", context, engine);
            return result;
        }
         QScriptValue
        REcmaCommandLine::appendCommand
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaCommandLine::appendCommand", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaCommandLine::appendCommand";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RCommandLine* self = 
                        getSelf("appendCommand", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isString()
        ) /* type: QString */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QString
                    a0 =
                    (QString)
                    
                    context->argument( 0 ).
                    toString();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->appendCommand(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RCommandLine.appendCommand().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaCommandLine::appendCommand", context, engine);
            return result;
        }
         QScriptValue REcmaCommandLine::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RCommandLine* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RCommandLine(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaCommandLine::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RCommandLine* self = getSelf("RCommandLine", context);
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
    RCommandLine* REcmaCommandLine::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RCommandLine* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RCommandLine >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RCommandLine.%1(): "
                        "This object is not a RCommandLine").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RCommandLine* REcmaCommandLine::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RCommandLine* selfBase = getSelf(fName, context);
                RCommandLine* self = dynamic_cast<RCommandLine*>(selfBase);
                //return REcmaHelper::scriptValueTo<RCommandLine >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RCommandLine.%1(): "
                    "This object is not a RCommandLine").arg(fName),
                    context);
            }

            return self;
            


        }
        