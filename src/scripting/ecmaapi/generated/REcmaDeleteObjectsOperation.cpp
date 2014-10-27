// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaDeleteObjectsOperation.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RObject.h"
            
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaOperation.h"
                 void REcmaDeleteObjectsOperation::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RDeleteObjectsOperation*) 0)));
        protoCreated = true;
    }

    
        // primary base class ROperation:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<ROperation*>());

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
    
        // conversion for base class ROperation
        REcmaHelper::registerFunction(&engine, proto, getROperation, "getROperation");
        
        // conversion for base class RRequireHeap
        REcmaHelper::registerFunction(&engine, proto, getRRequireHeap, "getRRequireHeap");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, deleteObject, "deleteObject");
            
            REcmaHelper::registerFunction(&engine, proto, apply, "apply");
            
            REcmaHelper::registerFunction(&engine, proto, preview, "preview");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RDeleteObjectsOperation*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RDeleteObjectsOperation",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaDeleteObjectsOperation::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RDeleteObjectsOperation(): Did you forget to construct with 'new'?"),
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
            RDeleteObjectsOperation
                    * cppResult =
                    new
                    RDeleteObjectsOperation
                    ();
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    if( context->argumentCount() ==
        1
                && (
                
                        context->argument(
                        0
                        ).isBool()
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

    // call C++ constructor:
    
            // non-copyable class:
            RDeleteObjectsOperation
                    * cppResult =
                    new
                    RDeleteObjectsOperation
                    (
                    a0
                    );
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    if( context->argumentCount() ==
        1
                && (
                
                        context->argument(
                        0
                        ).isArray()
                ) /* type: QList < QSharedPointer < RObject > > */
            
    ){
    // prepare arguments:
    
                    // argument isArray
                    QList < QSharedPointer < RObject > >
                    a0;
                    REcmaHelper::fromScriptValue(
                        engine,
                        context->argument(0),
                        a0
                    );
                
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RDeleteObjectsOperation
                    * cppResult =
                    new
                    RDeleteObjectsOperation
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
                        ).isArray()
                ) /* type: QList < QSharedPointer < RObject > > */
            
                && (
                
                        context->argument(
                        1
                        ).isBool()
                ) /* type: bool */
            
    ){
    // prepare arguments:
    
                    // argument isArray
                    QList < QSharedPointer < RObject > >
                    a0;
                    REcmaHelper::fromScriptValue(
                        engine,
                        context->argument(0),
                        a0
                    );
                
                    // argument isStandardType
                    bool
                    a1 =
                    (bool)
                    
                    context->argument( 1 ).
                    toBool();
                
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RDeleteObjectsOperation
                    * cppResult =
                    new
                    RDeleteObjectsOperation
                    (
                    a0
        ,
    a1
                    );
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RDeleteObjectsOperation(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaDeleteObjectsOperation::getROperation(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                ROperation* cppResult =
                    qscriptvalue_cast<RDeleteObjectsOperation*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
             QScriptValue REcmaDeleteObjectsOperation::getRRequireHeap(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RRequireHeap* cppResult =
                    qscriptvalue_cast<RDeleteObjectsOperation*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaDeleteObjectsOperation::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RDeleteObjectsOperation"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaDeleteObjectsOperation::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("ROperation");
    
        list.append("RRequireHeap");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaDeleteObjectsOperation::deleteObject
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaDeleteObjectsOperation::deleteObject", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaDeleteObjectsOperation::deleteObject";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RDeleteObjectsOperation* self = 
                        getSelf("deleteObject", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: QSharedPointer < RObject > */
    
    ){
    // prepare arguments:
    
                    // argument is SharedPointer
                    QSharedPointer < RObject > 
                    a0;

                    // argument might be a simple pointer:
                     RObject * o0 = 
                    qscriptvalue_cast < RObject * > (context->argument(0));

                    if (o0!=NULL) {
                        a0 =
                        QSharedPointer < RObject >(o0->clone());
                    }
                    else {
                        // qscriptvalue_cast to QSharedPointer<BaseClass> does not work
                        QSharedPointer < RObject >*
                        p0;

                        p0 =
                        qscriptvalue_cast <QSharedPointer < RObject >* > (context->argument(0));

                        if (p0==NULL) {
                           return REcmaHelper::throwError("RDeleteObjectsOperation: Argument 0 is not of type  RObject .", context);                    
                        }

                        a0 = *p0;

                           //return REcmaHelper::throwError("RDeleteObjectsOperation: Argument 0 is not of type  RObject .",
                           //    context);                    
                    }

                    //QSharedPointer < RObject > 
                    //a0 =
                    //QSharedPointer < RObject >(o0->clone());
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->deleteObject(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RDeleteObjectsOperation.deleteObject().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaDeleteObjectsOperation::deleteObject", context, engine);
            return result;
        }
         QScriptValue
        REcmaDeleteObjectsOperation::apply
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaDeleteObjectsOperation::apply", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaDeleteObjectsOperation::apply";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RDeleteObjectsOperation* self = 
                        getSelf("apply", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
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
                           return REcmaHelper::throwError("RDeleteObjectsOperation: Argument 0 is not of type RDocument*.",
                               context);                    
                    }
                    RDocument& a0 = *ap0;
                
    // end of arguments

    // call C++ function:
    // return type 'RTransaction'
    RTransaction cppResult =
        
               self->apply(a0);
        // return type: RTransaction
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RDocument */
     && (
            context->argument(1).isBool()
        ) /* type: bool */
    
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
                           return REcmaHelper::throwError("RDeleteObjectsOperation: Argument 0 is not of type RDocument*.",
                               context);                    
                    }
                    RDocument& a0 = *ap0;
                
                    // argument isStandardType
                    bool
                    a1 =
                    (bool)
                    
                    context->argument( 1 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'RTransaction'
    RTransaction cppResult =
        
               self->apply(a0
        ,
    a1);
        // return type: RTransaction
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RDeleteObjectsOperation.apply().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaDeleteObjectsOperation::apply", context, engine);
            return result;
        }
         QScriptValue
        REcmaDeleteObjectsOperation::preview
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaDeleteObjectsOperation::preview", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaDeleteObjectsOperation::preview";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RDeleteObjectsOperation* self = 
                        getSelf("preview", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RDocument */
     && (
            context->argument(1).isVariant() || 
            context->argument(1).isQObject() || 
            context->argument(1).isNull()
        ) /* type: RExporter */
    
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
                           return REcmaHelper::throwError("RDeleteObjectsOperation: Argument 0 is not of type RDocument*.",
                               context);                    
                    }
                    RDocument& a0 = *ap0;
                
                    // argument is reference
                    RExporter*
                    ap1 =
                    qscriptvalue_cast<
                    RExporter*
                        >(
                        context->argument(
                        1
                        )
                    );
                    if( ap1 == NULL ){
                           return REcmaHelper::throwError("RDeleteObjectsOperation: Argument 1 is not of type RExporter*.",
                               context);                    
                    }
                    RExporter& a1 = *ap1;
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->preview(a0
        ,
    a1);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RDeleteObjectsOperation.preview().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaDeleteObjectsOperation::preview", context, engine);
            return result;
        }
         QScriptValue REcmaDeleteObjectsOperation::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RDeleteObjectsOperation* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RDeleteObjectsOperation(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaDeleteObjectsOperation::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RDeleteObjectsOperation* self = getSelf("RDeleteObjectsOperation", context);
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
    RDeleteObjectsOperation* REcmaDeleteObjectsOperation::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RDeleteObjectsOperation* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RDeleteObjectsOperation >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RDeleteObjectsOperation.%1(): "
                        "This object is not a RDeleteObjectsOperation").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RDeleteObjectsOperation* REcmaDeleteObjectsOperation::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RDeleteObjectsOperation* selfBase = getSelf(fName, context);
                RDeleteObjectsOperation* self = dynamic_cast<RDeleteObjectsOperation*>(selfBase);
                //return REcmaHelper::scriptValueTo<RDeleteObjectsOperation >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RDeleteObjectsOperation.%1(): "
                    "This object is not a RDeleteObjectsOperation").arg(fName),
                    context);
            }

            return self;
            


        }
        