// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaImporter.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RDocument.h"
            
                #include "REntity.h"
            
                #include "RVector.h"
            
                #include "RMessageHandler.h"
            
                #include "RProgressHandler.h"
            
            
        // includes for base ecma wrapper classes
         void REcmaImporter::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RImporter*) 0)));
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
    
            REcmaHelper::registerFunction(&engine, proto, startImport, "startImport");
            
            REcmaHelper::registerFunction(&engine, proto, endImport, "endImport");
            
            REcmaHelper::registerFunction(&engine, proto, importObject, "importObject");
            
            REcmaHelper::registerFunction(&engine, proto, setCurrentBlockId, "setCurrentBlockId");
            
            REcmaHelper::registerFunction(&engine, proto, getCurrentBlockId, "getCurrentBlockId");
            
            REcmaHelper::registerFunction(&engine, proto, getDocument, "getDocument");
            
            REcmaHelper::registerFunction(&engine, proto, setDocument, "setDocument");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RImporter*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RImporter",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaImporter::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RImporter(): Did you forget to construct with 'new'?"),
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
            RImporter
                    * cppResult =
                    new
                    RImporter
                    ();
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    if( context->argumentCount() ==
        1
                && (
                
                        context->argument(
                        0
                        ).isVariant()
                        ||
                    
                        context->argument(
                        0
                        ).isQObject()
                        ||
                    
                        context->argument(
                        0
                        ).isNull()
                ) /* type: RDocument */
            
    ){
    // prepare arguments:
    
                    // argument is reference
                    RDocument*
                    ap0 =
                    qscriptvalue_cast<
                    RDocument*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if( ap0 == NULL ){
                           return REcmaHelper::throwError("RImporter: Argument 0 is not of type RDocument*.",
                               context);                    
                    }
                    RDocument& a0 = *ap0;
                
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RImporter
                    * cppResult =
                    new
                    RImporter
                    (
                    a0
                    );
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    if( context->argumentCount() ==
        2
                && (
                
                        context->argument(
                        0
                        ).isVariant()
                        ||
                    
                        context->argument(
                        0
                        ).isQObject()
                        ||
                    
                        context->argument(
                        0
                        ).isNull()
                ) /* type: RDocument */
            
                && (
                
                        context->argument(
                        1
                        ).isVariant()
                        ||
                    
                        context->argument(
                        1
                        ).isQObject()
                        ||
                    
                        context->argument(
                        1
                        ).isNull()
                ) /* type: RMessageHandler * */
            
    ){
    // prepare arguments:
    
                    // argument is reference
                    RDocument*
                    ap0 =
                    qscriptvalue_cast<
                    RDocument*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if( ap0 == NULL ){
                           return REcmaHelper::throwError("RImporter: Argument 0 is not of type RDocument*.",
                               context);                    
                    }
                    RDocument& a0 = *ap0;
                
                    // argument is pointer
                    RMessageHandler * a1 = NULL;

                    a1 = 
                        REcmaHelper::scriptValueTo<RMessageHandler >(
                            context->argument(1)
                        );
                    
                    if (a1==NULL && 
                        !context->argument(1).isNull()) {
                        return REcmaHelper::throwError("RImporter: Argument 1 is not of type RMessageHandler *RMessageHandler *.", context);                    
                    }
                
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RImporter
                    * cppResult =
                    new
                    RImporter
                    (
                    a0
        ,
    a1
                    );
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    if( context->argumentCount() ==
        3
                && (
                
                        context->argument(
                        0
                        ).isVariant()
                        ||
                    
                        context->argument(
                        0
                        ).isQObject()
                        ||
                    
                        context->argument(
                        0
                        ).isNull()
                ) /* type: RDocument */
            
                && (
                
                        context->argument(
                        1
                        ).isVariant()
                        ||
                    
                        context->argument(
                        1
                        ).isQObject()
                        ||
                    
                        context->argument(
                        1
                        ).isNull()
                ) /* type: RMessageHandler * */
            
                && (
                
                        context->argument(
                        2
                        ).isVariant()
                        ||
                    
                        context->argument(
                        2
                        ).isQObject()
                        ||
                    
                        context->argument(
                        2
                        ).isNull()
                ) /* type: RProgressHandler * */
            
    ){
    // prepare arguments:
    
                    // argument is reference
                    RDocument*
                    ap0 =
                    qscriptvalue_cast<
                    RDocument*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if( ap0 == NULL ){
                           return REcmaHelper::throwError("RImporter: Argument 0 is not of type RDocument*.",
                               context);                    
                    }
                    RDocument& a0 = *ap0;
                
                    // argument is pointer
                    RMessageHandler * a1 = NULL;

                    a1 = 
                        REcmaHelper::scriptValueTo<RMessageHandler >(
                            context->argument(1)
                        );
                    
                    if (a1==NULL && 
                        !context->argument(1).isNull()) {
                        return REcmaHelper::throwError("RImporter: Argument 1 is not of type RMessageHandler *RMessageHandler *.", context);                    
                    }
                
                    // argument is pointer
                    RProgressHandler * a2 = NULL;

                    a2 = 
                        REcmaHelper::scriptValueTo<RProgressHandler >(
                            context->argument(2)
                        );
                    
                    if (a2==NULL && 
                        !context->argument(2).isNull()) {
                        return REcmaHelper::throwError("RImporter: Argument 2 is not of type RProgressHandler *RProgressHandler *.", context);                    
                    }
                
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RImporter
                    * cppResult =
                    new
                    RImporter
                    (
                    a0
        ,
    a1
        ,
    a2
                    );
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RImporter(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
    

    // returns class name:
     QScriptValue REcmaImporter::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RImporter"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaImporter::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaImporter::startImport
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaImporter::startImport", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaImporter::startImport";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RImporter* self = 
                        getSelf("startImport", context);
                  

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
    
               self->startImport();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RImporter.startImport().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaImporter::startImport", context, engine);
            return result;
        }
         QScriptValue
        REcmaImporter::endImport
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaImporter::endImport", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaImporter::endImport";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RImporter* self = 
                        getSelf("endImport", context);
                  

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
    
               self->endImport();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RImporter.endImport().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaImporter::endImport", context, engine);
            return result;
        }
         QScriptValue
        REcmaImporter::importObject
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaImporter::importObject", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaImporter::importObject";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RImporter* self = 
                        getSelf("importObject", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RObject * */
    
    ){
    // prepare arguments:
    
                    // argument is pointer
                    RObject * a0 = NULL;

                    a0 = 
                        REcmaHelper::scriptValueTo<RObject >(
                            context->argument(0)
                        );
                    
                    if (a0==NULL && 
                        !context->argument(0).isNull()) {
                        return REcmaHelper::throwError("RImporter: Argument 0 is not of type RObject *RObject *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->importObject(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RImporter.importObject().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaImporter::importObject", context, engine);
            return result;
        }
         QScriptValue
        REcmaImporter::setCurrentBlockId
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaImporter::setCurrentBlockId", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaImporter::setCurrentBlockId";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RImporter* self = 
                        getSelf("setCurrentBlockId", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: RBlock::Id */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    RBlock::Id
                    a0 =
                    (RBlock::Id)
                    (int)
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setCurrentBlockId(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RImporter.setCurrentBlockId().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaImporter::setCurrentBlockId", context, engine);
            return result;
        }
         QScriptValue
        REcmaImporter::getCurrentBlockId
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaImporter::getCurrentBlockId", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaImporter::getCurrentBlockId";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RImporter* self = 
                        getSelf("getCurrentBlockId", context);
                  

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
    // return type 'RBlock::Id'
    RBlock::Id cppResult =
        
               self->getCurrentBlockId();
        // return type: RBlock::Id
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RImporter.getCurrentBlockId().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaImporter::getCurrentBlockId", context, engine);
            return result;
        }
         QScriptValue
        REcmaImporter::getDocument
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaImporter::getDocument", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaImporter::getDocument";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RImporter* self = 
                        getSelf("getDocument", context);
                  

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
    // return type 'RDocument &'
    RDocument & cppResult =
        
               self->getDocument();
        // return type: RDocument &
                // reference
                result = engine->newVariant(
                QVariant::fromValue(&cppResult));
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RImporter.getDocument().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaImporter::getDocument", context, engine);
            return result;
        }
         QScriptValue
        REcmaImporter::setDocument
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaImporter::setDocument", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaImporter::setDocument";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RImporter* self = 
                        getSelf("setDocument", context);
                  

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
                        return REcmaHelper::throwError("RImporter: Argument 0 is not of type RDocument *RDocument *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setDocument(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RImporter.setDocument().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaImporter::setDocument", context, engine);
            return result;
        }
         QScriptValue REcmaImporter::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RImporter* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RImporter(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaImporter::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RImporter* self = getSelf("RImporter", context);
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
    RImporter* REcmaImporter::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RImporter* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RImporter >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RImporter.%1(): "
                        "This object is not a RImporter").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RImporter* REcmaImporter::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RImporter* selfBase = getSelf(fName, context);
                RImporter* self = dynamic_cast<RImporter*>(selfBase);
                //return REcmaHelper::scriptValueTo<RImporter >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RImporter.%1(): "
                    "This object is not a RImporter").arg(fName),
                    context);
            }

            return self;
            


        }
        