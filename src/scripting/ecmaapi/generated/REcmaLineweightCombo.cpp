// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaLineweightCombo.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
         void REcmaLineweightCombo::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RLineweightCombo*) 0)));
        protoCreated = true;
    }

    
        // primary base class QComboBox:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<QComboBox*>());

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
    
        // conversion for base class QComboBox
        REcmaHelper::registerFunction(&engine, proto, getQComboBox, "getQComboBox");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, init, "init");
            
            REcmaHelper::registerFunction(&engine, proto, getLineweight, "getLineweight");
            
            REcmaHelper::registerFunction(&engine, proto, setLineweight, "setLineweight");
            
            REcmaHelper::registerFunction(&engine, proto, getOnlyFixed, "getOnlyFixed");
            
            REcmaHelper::registerFunction(&engine, proto, setOnlyFixed, "setOnlyFixed");
            
            REcmaHelper::registerFunction(&engine, proto, lineweightChanged, "lineweightChanged");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RLineweightCombo*>(), *proto);

        
                        qScriptRegisterMetaType<
                        RLineweightCombo*>(
                        &engine, toScriptValue, fromScriptValue, *proto);
                    
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RLineweightCombo",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaLineweightCombo::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RLineweightCombo(): Did you forget to construct with 'new'?"),
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
            RLineweightCombo
                    * cppResult =
                    new
                    RLineweightCombo
                    ();
                
                    result = engine->newQObject(context->thisObject(), cppResult);
                
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
            RLineweightCombo
                    * cppResult =
                    new
                    RLineweightCombo
                    (
                    a0
                    );
                
                    result = engine->newQObject(context->thisObject(), cppResult);
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RLineweightCombo(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaLineweightCombo::getQComboBox(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                QComboBox* cppResult =
                    qscriptvalue_cast<RLineweightCombo*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaLineweightCombo::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RLineweightCombo"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaLineweightCombo::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("QComboBox");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaLineweightCombo::init
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaLineweightCombo::init", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaLineweightCombo::init";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RLineweightCombo* self = 
                        getSelf("init", context);
                  

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
    
               self->init();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RLineweightCombo.init().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaLineweightCombo::init", context, engine);
            return result;
        }
         QScriptValue
        REcmaLineweightCombo::getLineweight
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaLineweightCombo::getLineweight", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaLineweightCombo::getLineweight";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RLineweightCombo* self = 
                        getSelf("getLineweight", context);
                  

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
    // return type 'RLineweight::Lineweight'
    RLineweight::Lineweight cppResult =
        
               self->getLineweight();
        // return type: RLineweight::Lineweight
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RLineweightCombo.getLineweight().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaLineweightCombo::getLineweight", context, engine);
            return result;
        }
         QScriptValue
        REcmaLineweightCombo::setLineweight
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaLineweightCombo::setLineweight", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaLineweightCombo::setLineweight";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RLineweightCombo* self = 
                        getSelf("setLineweight", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: RLineweight::Lineweight */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    RLineweight::Lineweight
                    a0 =
                    (RLineweight::Lineweight)
                    (int)
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setLineweight(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RLineweightCombo.setLineweight().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaLineweightCombo::setLineweight", context, engine);
            return result;
        }
         QScriptValue
        REcmaLineweightCombo::getOnlyFixed
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaLineweightCombo::getOnlyFixed", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaLineweightCombo::getOnlyFixed";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RLineweightCombo* self = 
                        getSelf("getOnlyFixed", context);
                  

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
    // return type 'bool'
    bool cppResult =
        
               self->getOnlyFixed();
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RLineweightCombo.getOnlyFixed().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaLineweightCombo::getOnlyFixed", context, engine);
            return result;
        }
         QScriptValue
        REcmaLineweightCombo::setOnlyFixed
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaLineweightCombo::setOnlyFixed", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaLineweightCombo::setOnlyFixed";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RLineweightCombo* self = 
                        getSelf("setOnlyFixed", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    bool
                    a0 =
                    (bool)
                    
                    context->argument( 0 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setOnlyFixed(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RLineweightCombo.setOnlyFixed().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaLineweightCombo::setOnlyFixed", context, engine);
            return result;
        }
         QScriptValue
        REcmaLineweightCombo::lineweightChanged
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaLineweightCombo::lineweightChanged", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaLineweightCombo::lineweightChanged";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RLineweightCombo* self = 
                        getSelf("lineweightChanged", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: int */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    int
                    a0 =
                    (int)
                    
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->lineweightChanged(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RLineweightCombo.lineweightChanged().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaLineweightCombo::lineweightChanged", context, engine);
            return result;
        }
         QScriptValue REcmaLineweightCombo::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RLineweightCombo* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RLineweightCombo(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaLineweightCombo::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RLineweightCombo* self = getSelf("RLineweightCombo", context);
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
    RLineweightCombo* REcmaLineweightCombo::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RLineweightCombo* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RLineweightCombo >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RLineweightCombo.%1(): "
                        "This object is not a RLineweightCombo").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RLineweightCombo* REcmaLineweightCombo::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RLineweightCombo* selfBase = getSelf(fName, context);
                RLineweightCombo* self = dynamic_cast<RLineweightCombo*>(selfBase);
                //return REcmaHelper::scriptValueTo<RLineweightCombo >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RLineweightCombo.%1(): "
                    "This object is not a RLineweightCombo").arg(fName),
                    context);
            }

            return self;
            


        }
         void fromScriptValue(const QScriptValue& value,
        RLineweightCombo*
        &out) {
            QObject* o = value.toQObject();
            out = qobject_cast<
            RLineweightCombo*>(o);
        }
     QScriptValue toScriptValue(QScriptEngine *engine,
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
    