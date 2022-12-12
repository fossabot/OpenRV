//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0 
// 
#include <MuQt5/qtUtils.h>
#include <MuQt5/QColorDialogType.h>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>
#include <QtSvg/QtSvg>
#include <QtNetwork/QtNetwork>
#include <MuQt5/QWidgetType.h>
#include <MuQt5/QActionType.h>
#include <MuQt5/QIconType.h>
#include <Mu/BaseFunctions.h>
#include <Mu/Thread.h>
#include <Mu/Alias.h>
#include <Mu/SymbolicConstant.h>
#include <Mu/ClassInstance.h>
#include <Mu/Function.h>
#include <Mu/MemberFunction.h>
#include <Mu/MemberVariable.h>
#include <Mu/Node.h>
#include <Mu/Exception.h>
#include <Mu/ParameterVariable.h>
#include <Mu/ReferenceType.h>
#include <Mu/Value.h>
#include <MuLang/MuLangContext.h>
#include <MuLang/StringType.h>
#include <MuQt5/QSizeType.h>
#include <MuQt5/QColorType.h>
#include <MuQt5/QObjectType.h>
#include <MuQt5/QEventType.h>
#include <MuQt5/QCloseEventType.h>
#include <MuQt5/QContextMenuEventType.h>
#include <MuQt5/QKeyEventType.h>
#include <MuQt5/QResizeEventType.h>
#include <MuQt5/QShowEventType.h>

//
//  NOTE: this file was automatically generated by qt2mu.py
//

namespace Mu {
using namespace std;

//----------------------------------------------------------------------
//  INHERITABLE TYPE IMPLEMENTATION

// destructor
MuQt_QColorDialog::~MuQt_QColorDialog()
{
    if (_obj)
    {
        *_obj->data<Pointer>() = Pointer(0);
        _obj->releaseExternal();
    }
    _obj = 0;
    _env = 0;
    _baseType = 0;
}

MuQt_QColorDialog::MuQt_QColorDialog(Pointer muobj, const CallEnvironment* ce, QWidget * parent) 
 : QColorDialog(parent)
{
    _env = ce;
    _obj = reinterpret_cast<ClassInstance*>(muobj);
    _obj->retainExternal();
    MuLangContext* c = (MuLangContext*)_env->context();
    _baseType = c->findSymbolOfTypeByQualifiedName<QColorDialogType>(c->internName("qt.QColorDialog"));
}

MuQt_QColorDialog::MuQt_QColorDialog(Pointer muobj, const CallEnvironment* ce, const QColor & initial, QWidget * parent) 
 : QColorDialog(initial, parent)
{
    _env = ce;
    _obj = reinterpret_cast<ClassInstance*>(muobj);
    _obj->retainExternal();
    MuLangContext* c = (MuLangContext*)_env->context();
    _baseType = c->findSymbolOfTypeByQualifiedName<QColorDialogType>(c->internName("qt.QColorDialog"));
}

void MuQt_QColorDialog::setVisible(bool visible) 
{
    if (!_env) { QColorDialog::setVisible(visible); return; }
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[0];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(2);
        args[0] = Value(Pointer(_obj));
        args[1] = Value(visible);
        Value rval = _env->call(F, args);
    }
    else
    {
        QColorDialog::setVisible(visible);
    }
}

void MuQt_QColorDialog::changeEvent(QEvent * e) 
{
    if (!_env) { QColorDialog::changeEvent(e); return; }
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[1];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(2);
        args[0] = Value(Pointer(_obj));
        args[1] = Value(makeqpointer<QEventType>(c,e,"qt.QEvent"));
        Value rval = _env->call(F, args);
    }
    else
    {
        QColorDialog::changeEvent(e);
    }
}

void MuQt_QColorDialog::done(int result) 
{
    if (!_env) { QColorDialog::done(result); return; }
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[2];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(2);
        args[0] = Value(Pointer(_obj));
        args[1] = Value(result);
        Value rval = _env->call(F, args);
    }
    else
    {
        QColorDialog::done(result);
    }
}

QSize MuQt_QColorDialog::minimumSizeHint() const
{
    if (!_env) return QColorDialog::minimumSizeHint();
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[3];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(1);
        args[0] = Value(Pointer(_obj));
        Value rval = _env->call(F, args);
        return getqtype<QSizeType>(rval._Pointer);
    }
    else
    {
        return QColorDialog::minimumSizeHint();
    }
}

QSize MuQt_QColorDialog::sizeHint() const
{
    if (!_env) return QColorDialog::sizeHint();
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[4];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(1);
        args[0] = Value(Pointer(_obj));
        Value rval = _env->call(F, args);
        return getqtype<QSizeType>(rval._Pointer);
    }
    else
    {
        return QColorDialog::sizeHint();
    }
}

void MuQt_QColorDialog::closeEvent(QCloseEvent * e) 
{
    if (!_env) { QColorDialog::closeEvent(e); return; }
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[5];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(2);
        args[0] = Value(Pointer(_obj));
        args[1] = Value(makeqpointer<QCloseEventType>(c,e,"qt.QCloseEvent"));
        Value rval = _env->call(F, args);
    }
    else
    {
        QColorDialog::closeEvent(e);
    }
}

void MuQt_QColorDialog::contextMenuEvent(QContextMenuEvent * e) 
{
    if (!_env) { QColorDialog::contextMenuEvent(e); return; }
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[6];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(2);
        args[0] = Value(Pointer(_obj));
        args[1] = Value(makeqpointer<QContextMenuEventType>(c,e,"qt.QContextMenuEvent"));
        Value rval = _env->call(F, args);
    }
    else
    {
        QColorDialog::contextMenuEvent(e);
    }
}

bool MuQt_QColorDialog::event(QEvent * e) 
{
    if (!_env) return QColorDialog::event(e);
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[7];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(2);
        args[0] = Value(Pointer(_obj));
        args[1] = Value(makeqpointer<QEventType>(c,e,"qt.QEvent"));
        Value rval = _env->call(F, args);
        return (bool)(rval._bool);
    }
    else
    {
        return QColorDialog::event(e);
    }
}

bool MuQt_QColorDialog::eventFilter(QObject * o, QEvent * e) 
{
    if (!_env) return QColorDialog::eventFilter(o, e);
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[8];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(3);
        args[0] = Value(Pointer(_obj));
        args[1] = Value(makeinstance<QObjectType>(c,o,"qt.QObject"));
        args[2] = Value(makeqpointer<QEventType>(c,e,"qt.QEvent"));
        Value rval = _env->call(F, args);
        return (bool)(rval._bool);
    }
    else
    {
        return QColorDialog::eventFilter(o, e);
    }
}

void MuQt_QColorDialog::keyPressEvent(QKeyEvent * e) 
{
    if (!_env) { QColorDialog::keyPressEvent(e); return; }
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[9];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(2);
        args[0] = Value(Pointer(_obj));
        args[1] = Value(makeqpointer<QKeyEventType>(c,e,"qt.QKeyEvent"));
        Value rval = _env->call(F, args);
    }
    else
    {
        QColorDialog::keyPressEvent(e);
    }
}

void MuQt_QColorDialog::resizeEvent(QResizeEvent * _p15) 
{
    if (!_env) { QColorDialog::resizeEvent(_p15); return; }
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[10];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(2);
        args[0] = Value(Pointer(_obj));
        args[1] = Value(makeqpointer<QResizeEventType>(c,_p15,"qt.QResizeEvent"));
        Value rval = _env->call(F, args);
    }
    else
    {
        QColorDialog::resizeEvent(_p15);
    }
}

void MuQt_QColorDialog::showEvent(QShowEvent * event) 
{
    if (!_env) { QColorDialog::showEvent(event); return; }
    MuLangContext* c = (MuLangContext*)_env->context();
    const MemberFunction* F0 = _baseType->_func[11];
    const MemberFunction* F = _obj->classType()->dynamicLookup(F0);
    if (F != F0) 
    {
        Function::ArgumentVector args(2);
        args[0] = Value(Pointer(_obj));
        args[1] = Value(makeqpointer<QShowEventType>(c,event,"qt.QShowEvent"));
        Value rval = _env->call(F, args);
    }
    else
    {
        QColorDialog::showEvent(event);
    }
}



//----------------------------------------------------------------------
//  Mu Type CONSTRUCTORS

QColorDialogType::QColorDialogType(Context* c, const char* name, Class* super, Class* super2)
: Class(c, name, vectorOf2(super, super2))
{
}

QColorDialogType::~QColorDialogType()
{
}

//----------------------------------------------------------------------
//  PRE-COMPILED FUNCTIONS

static Pointer
QColorDialog_QColorDialog_QObject(Thread& NODE_THREAD, Pointer obj)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    ClassInstance* widget = reinterpret_cast<ClassInstance*>(obj);

    if (!widget)
    {
        return 0;
    }
    else if (QColorDialog* w = object<QColorDialog>(widget))
    {
        QColorDialogType* type = 
            c->findSymbolOfTypeByQualifiedName<QColorDialogType>(c->internName("qt.QColorDialog"), false);
        ClassInstance* o = ClassInstance::allocate(type);
        setobject(o, w);
        return o;
    }
    else
    {
        throw BadCastException();
    }
}

static NODE_IMPLEMENTATION(castFromObject, Pointer)
{
    NODE_RETURN( QColorDialog_QColorDialog_QObject(NODE_THREAD, NODE_ARG(0, Pointer)) );
}

Pointer qt_QColorDialog_QColorDialog_QColorDialog_QColorDialog_QWidget(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_parent)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QWidget * arg1 = object<QWidget>(param_parent);
    setobject(param_this, new MuQt_QColorDialog(param_this, NODE_THREAD.process()->callEnv(), arg1));
    return param_this;
}

Pointer qt_QColorDialog_QColorDialog_QColorDialog_QColorDialog_QColor_QWidget(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_initial, Pointer param_parent)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QColor  arg1 = getqtype<QColorType>(param_initial);
    QWidget * arg2 = object<QWidget>(param_parent);
    setobject(param_this, new MuQt_QColorDialog(param_this, NODE_THREAD.process()->callEnv(), arg1, arg2));
    return param_this;
}

Pointer qt_QColorDialog_selectedColor_QColor_QColorDialog(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QColorDialog* arg0 = object<QColorDialog>(param_this);
    return makeqtype<QColorType>(c,arg0->selectedColor(),"qt.QColor");
}

void qt_QColorDialog_setOption_void_QColorDialog_int_bool(Mu::Thread& NODE_THREAD, Pointer param_this, int param_option, bool param_on)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QColorDialog* arg0 = object<QColorDialog>(param_this);
    QColorDialog::ColorDialogOption arg1 = (QColorDialog::ColorDialogOption)(param_option);
    bool arg2 = (bool)(param_on);
    arg0->setOption(arg1, arg2);
}

bool qt_QColorDialog_testOption_bool_QColorDialog_int(Mu::Thread& NODE_THREAD, Pointer param_this, int param_option)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QColorDialog* arg0 = object<QColorDialog>(param_this);
    QColorDialog::ColorDialogOption arg1 = (QColorDialog::ColorDialogOption)(param_option);
    return arg0->testOption(arg1);
}

void qt_QColorDialog_setVisible_void_QColorDialog_bool(Mu::Thread& NODE_THREAD, Pointer param_this, bool param_visible)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QColorDialog* arg0 = object<QColorDialog>(param_this);
    bool arg1 = (bool)(param_visible);
    if (isMuQtObject(arg0)) arg0->QColorDialog::setVisible(arg1);
    else arg0->setVisible(arg1);
}

void qt_QColorDialog_changeEvent_void_QColorDialog_QEvent(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_e)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QColorDialog* arg0 = object<QColorDialog>(param_this);
    QEvent * arg1 = getqpointer<QEventType>(param_e);
    if (isMuQtObject(arg0)) ((MuQt_QColorDialog*)arg0)->changeEvent_pub_parent(arg1);
    else ((MuQt_QColorDialog*)arg0)->changeEvent_pub(arg1);
}

void qt_QColorDialog_done_void_QColorDialog_int(Mu::Thread& NODE_THREAD, Pointer param_this, int param_result)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QColorDialog* arg0 = object<QColorDialog>(param_this);
    int arg1 = (int)(param_result);
    if (isMuQtObject(arg0)) ((MuQt_QColorDialog*)arg0)->done_pub_parent(arg1);
    else ((MuQt_QColorDialog*)arg0)->done_pub(arg1);
}

Pointer qt_QColorDialog_minimumSizeHint_QSize_QColorDialog(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QColorDialog* arg0 = object<QColorDialog>(param_this);
    return isMuQtObject(arg0) ? makeqtype<QSizeType>(c,arg0->QColorDialog::minimumSizeHint(),"qt.QSize") : makeqtype<QSizeType>(c,arg0->minimumSizeHint(),"qt.QSize");
}

Pointer qt_QColorDialog_sizeHint_QSize_QColorDialog(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QColorDialog* arg0 = object<QColorDialog>(param_this);
    return isMuQtObject(arg0) ? makeqtype<QSizeType>(c,arg0->QColorDialog::sizeHint(),"qt.QSize") : makeqtype<QSizeType>(c,arg0->sizeHint(),"qt.QSize");
}

void qt_QColorDialog_closeEvent_void_QColorDialog_QCloseEvent(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_e)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QColorDialog* arg0 = object<QColorDialog>(param_this);
    QCloseEvent * arg1 = getqpointer<QCloseEventType>(param_e);
    if (isMuQtObject(arg0)) ((MuQt_QColorDialog*)arg0)->closeEvent_pub_parent(arg1);
    else ((MuQt_QColorDialog*)arg0)->closeEvent_pub(arg1);
}

void qt_QColorDialog_contextMenuEvent_void_QColorDialog_QContextMenuEvent(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_e)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QColorDialog* arg0 = object<QColorDialog>(param_this);
    QContextMenuEvent * arg1 = getqpointer<QContextMenuEventType>(param_e);
    if (isMuQtObject(arg0)) ((MuQt_QColorDialog*)arg0)->contextMenuEvent_pub_parent(arg1);
    else ((MuQt_QColorDialog*)arg0)->contextMenuEvent_pub(arg1);
}

bool qt_QColorDialog_event_bool_QColorDialog_QEvent(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_e)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QColorDialog* arg0 = object<QColorDialog>(param_this);
    QEvent * arg1 = getqpointer<QEventType>(param_e);
    return isMuQtObject(arg0) ? ((MuQt_QColorDialog*)arg0)->event_pub_parent(arg1) : ((MuQt_QColorDialog*)arg0)->event_pub(arg1);
}

bool qt_QColorDialog_eventFilter_bool_QColorDialog_QObject_QEvent(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_o, Pointer param_e)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QColorDialog* arg0 = object<QColorDialog>(param_this);
    QObject * arg1 = object<QObject>(param_o);
    QEvent * arg2 = getqpointer<QEventType>(param_e);
    return isMuQtObject(arg0) ? ((MuQt_QColorDialog*)arg0)->eventFilter_pub_parent(arg1, arg2) : ((MuQt_QColorDialog*)arg0)->eventFilter_pub(arg1, arg2);
}

void qt_QColorDialog_keyPressEvent_void_QColorDialog_QKeyEvent(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_e)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QColorDialog* arg0 = object<QColorDialog>(param_this);
    QKeyEvent * arg1 = getqpointer<QKeyEventType>(param_e);
    if (isMuQtObject(arg0)) ((MuQt_QColorDialog*)arg0)->keyPressEvent_pub_parent(arg1);
    else ((MuQt_QColorDialog*)arg0)->keyPressEvent_pub(arg1);
}

void qt_QColorDialog_resizeEvent_void_QColorDialog_QResizeEvent(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param__p15)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QColorDialog* arg0 = object<QColorDialog>(param_this);
    QResizeEvent * arg1 = getqpointer<QResizeEventType>(param__p15);
    if (isMuQtObject(arg0)) ((MuQt_QColorDialog*)arg0)->resizeEvent_pub_parent(arg1);
    else ((MuQt_QColorDialog*)arg0)->resizeEvent_pub(arg1);
}

void qt_QColorDialog_showEvent_void_QColorDialog_QShowEvent(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_event)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QColorDialog* arg0 = object<QColorDialog>(param_this);
    QShowEvent * arg1 = getqpointer<QShowEventType>(param_event);
    if (isMuQtObject(arg0)) ((MuQt_QColorDialog*)arg0)->showEvent_pub_parent(arg1);
    else ((MuQt_QColorDialog*)arg0)->showEvent_pub(arg1);
}

Pointer qt_QColorDialog_customColor_QColor_int(Mu::Thread& NODE_THREAD, int param_index)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    int arg0 = (int)(param_index);
    return makeqtype<QColorType>(c,QColorDialog::customColor(arg0),"qt.QColor");
}

int qt_QColorDialog_customCount_int(Mu::Thread& NODE_THREAD)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    return QColorDialog::customCount();
}

Pointer qt_QColorDialog_getColor_QColor_QColor_QWidget_string_int(Mu::Thread& NODE_THREAD, Pointer param_initial, Pointer param_parent, Pointer param_title, int param_options)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QColor  arg0 = getqtype<QColorType>(param_initial);
    QWidget * arg1 = object<QWidget>(param_parent);
    const QString  arg2 = qstring(param_title);
    QColorDialog::ColorDialogOption arg3 = (QColorDialog::ColorDialogOption)(param_options);
    return makeqtype<QColorType>(c,QColorDialog::getColor(arg0, arg1, arg2, arg3),"qt.QColor");
}

void qt_QColorDialog_setCustomColor_void_int_QColor(Mu::Thread& NODE_THREAD, int param_index, Pointer param_color)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    int arg0 = (int)(param_index);
    QColor arg1 = getqtype<QColorType>(param_color);
    QColorDialog::setCustomColor(arg0, arg1);
}

void qt_QColorDialog_setStandardColor_void_int_QColor(Mu::Thread& NODE_THREAD, int param_index, Pointer param_color)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    int arg0 = (int)(param_index);
    QColor arg1 = getqtype<QColorType>(param_color);
    QColorDialog::setStandardColor(arg0, arg1);
}

Pointer qt_QColorDialog_standardColor_QColor_int(Mu::Thread& NODE_THREAD, int param_index)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    int arg0 = (int)(param_index);
    return makeqtype<QColorType>(c,QColorDialog::standardColor(arg0),"qt.QColor");
}


static NODE_IMPLEMENTATION(_n_QColorDialog0, Pointer)
{
    NODE_RETURN(qt_QColorDialog_QColorDialog_QColorDialog_QColorDialog_QWidget(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
}

static NODE_IMPLEMENTATION(_n_QColorDialog1, Pointer)
{
    NODE_RETURN(qt_QColorDialog_QColorDialog_QColorDialog_QColorDialog_QColor_QWidget(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer), NODE_ARG(2, Pointer)));
}

static NODE_IMPLEMENTATION(_n_selectedColor0, Pointer)
{
    NODE_RETURN(qt_QColorDialog_selectedColor_QColor_QColorDialog(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_setOption0, void)
{
    qt_QColorDialog_setOption_void_QColorDialog_int_bool(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int), NODE_ARG(2, bool));
}

static NODE_IMPLEMENTATION(_n_testOption0, bool)
{
    NODE_RETURN(qt_QColorDialog_testOption_bool_QColorDialog_int(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int)));
}

static NODE_IMPLEMENTATION(_n_setVisible0, void)
{
    qt_QColorDialog_setVisible_void_QColorDialog_bool(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, bool));
}

static NODE_IMPLEMENTATION(_n_changeEvent0, void)
{
    qt_QColorDialog_changeEvent_void_QColorDialog_QEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer));
}

static NODE_IMPLEMENTATION(_n_done0, void)
{
    qt_QColorDialog_done_void_QColorDialog_int(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int));
}

static NODE_IMPLEMENTATION(_n_minimumSizeHint0, Pointer)
{
    NODE_RETURN(qt_QColorDialog_minimumSizeHint_QSize_QColorDialog(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_sizeHint0, Pointer)
{
    NODE_RETURN(qt_QColorDialog_sizeHint_QSize_QColorDialog(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_closeEvent0, void)
{
    qt_QColorDialog_closeEvent_void_QColorDialog_QCloseEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer));
}

static NODE_IMPLEMENTATION(_n_contextMenuEvent0, void)
{
    qt_QColorDialog_contextMenuEvent_void_QColorDialog_QContextMenuEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer));
}

static NODE_IMPLEMENTATION(_n_event0, bool)
{
    NODE_RETURN(qt_QColorDialog_event_bool_QColorDialog_QEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
}

static NODE_IMPLEMENTATION(_n_eventFilter0, bool)
{
    NODE_RETURN(qt_QColorDialog_eventFilter_bool_QColorDialog_QObject_QEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer), NODE_ARG(2, Pointer)));
}

static NODE_IMPLEMENTATION(_n_keyPressEvent0, void)
{
    qt_QColorDialog_keyPressEvent_void_QColorDialog_QKeyEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer));
}

static NODE_IMPLEMENTATION(_n_resizeEvent0, void)
{
    qt_QColorDialog_resizeEvent_void_QColorDialog_QResizeEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer));
}

static NODE_IMPLEMENTATION(_n_showEvent0, void)
{
    qt_QColorDialog_showEvent_void_QColorDialog_QShowEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer));
}

static NODE_IMPLEMENTATION(_n_customColor0, Pointer)
{
    NODE_RETURN(qt_QColorDialog_customColor_QColor_int(NODE_THREAD, NODE_ARG(0, int)));
}

static NODE_IMPLEMENTATION(_n_customCount0, int)
{
    NODE_RETURN(qt_QColorDialog_customCount_int(NODE_THREAD));
}

static NODE_IMPLEMENTATION(_n_getColor0, Pointer)
{
    NODE_RETURN(qt_QColorDialog_getColor_QColor_QColor_QWidget_string_int(NODE_THREAD, NODE_ARG(0, Pointer), NODE_ARG(1, Pointer), NODE_ARG(2, Pointer), NODE_ARG(3, int)));
}

static NODE_IMPLEMENTATION(_n_setCustomColor0, void)
{
    qt_QColorDialog_setCustomColor_void_int_QColor(NODE_THREAD, NODE_ARG(0, int), NODE_ARG(1, Pointer));
}

static NODE_IMPLEMENTATION(_n_setStandardColor0, void)
{
    qt_QColorDialog_setStandardColor_void_int_QColor(NODE_THREAD, NODE_ARG(0, int), NODE_ARG(1, Pointer));
}

static NODE_IMPLEMENTATION(_n_standardColor0, Pointer)
{
    NODE_RETURN(qt_QColorDialog_standardColor_QColor_int(NODE_THREAD, NODE_ARG(0, int)));
}



void
QColorDialogType::load()
{
    USING_MU_FUNCTION_SYMBOLS;
    MuLangContext* c = static_cast<MuLangContext*>(context());
    Module* global = globalModule();
    
    const string typeName        = name();
    const string refTypeName     = typeName + "&";
    const string fullTypeName    = fullyQualifiedName();
    const string fullRefTypeName = fullTypeName + "&";
    const char*  tn              = typeName.c_str();
    const char*  ftn             = fullTypeName.c_str();
    const char*  rtn             = refTypeName.c_str();
    const char*  frtn            = fullRefTypeName.c_str();

    scope()->addSymbols(new ReferenceType(c, rtn, this),

                        new Function(c, tn, BaseFunctions::dereference, Cast,
                                     Return, ftn,
                                     Args, frtn, End),

                        EndArguments);
    
    addSymbols(new Function(c, "__allocate", BaseFunctions::classAllocate, None,
                            Return, ftn,
                            End),


               new Function(c, tn, castFromObject, Cast,
                            Compiled, QColorDialog_QColorDialog_QObject,
                            Return, ftn,
                            Parameters,
                            new Param(c, "object", "qt.QObject"),
                            End),

               EndArguments );

addSymbols(
    // enums
    // member functions
    new Function(c, "QColorDialog", _n_QColorDialog0, None, Compiled, qt_QColorDialog_QColorDialog_QColorDialog_QColorDialog_QWidget, Return, "qt.QColorDialog", Parameters, new Param(c, "this", "qt.QColorDialog"), new Param(c, "parent", "qt.QWidget"), End),
    new Function(c, "QColorDialog", _n_QColorDialog1, None, Compiled, qt_QColorDialog_QColorDialog_QColorDialog_QColorDialog_QColor_QWidget, Return, "qt.QColorDialog", Parameters, new Param(c, "this", "qt.QColorDialog"), new Param(c, "initial", "qt.QColor"), new Param(c, "parent", "qt.QWidget"), End),
    // PROP: currentColor (QColor; QColorDialog this)
    // MISSING: open (void; QColorDialog this, QObject receiver, "const char *" member)
    // PROP: options (flags QColorDialog::ColorDialogOptions; QColorDialog this)
    new Function(c, "selectedColor", _n_selectedColor0, None, Compiled, qt_QColorDialog_selectedColor_QColor_QColorDialog, Return, "qt.QColor", Parameters, new Param(c, "this", "qt.QColorDialog"), End),
    // PROP: setCurrentColor (void; QColorDialog this, QColor color)
    new Function(c, "setOption", _n_setOption0, None, Compiled, qt_QColorDialog_setOption_void_QColorDialog_int_bool, Return, "void", Parameters, new Param(c, "this", "qt.QColorDialog"), new Param(c, "option", "int"), new Param(c, "on", "bool"), End),
    // PROP: setOptions (void; QColorDialog this, flags QColorDialog::ColorDialogOptions options)
    new Function(c, "testOption", _n_testOption0, None, Compiled, qt_QColorDialog_testOption_bool_QColorDialog_int, Return, "bool", Parameters, new Param(c, "this", "qt.QColorDialog"), new Param(c, "option", "int"), End),
    _func[0] = new MemberFunction(c, "setVisible", _n_setVisible0, None, Compiled, qt_QColorDialog_setVisible_void_QColorDialog_bool, Return, "void", Parameters, new Param(c, "this", "qt.QColorDialog"), new Param(c, "visible", "bool"), End),
    _func[1] = new MemberFunction(c, "changeEvent", _n_changeEvent0, None, Compiled, qt_QColorDialog_changeEvent_void_QColorDialog_QEvent, Return, "void", Parameters, new Param(c, "this", "qt.QColorDialog"), new Param(c, "e", "qt.QEvent"), End),
    _func[2] = new MemberFunction(c, "done", _n_done0, None, Compiled, qt_QColorDialog_done_void_QColorDialog_int, Return, "void", Parameters, new Param(c, "this", "qt.QColorDialog"), new Param(c, "result", "int"), End),
    _func[3] = new MemberFunction(c, "minimumSizeHint", _n_minimumSizeHint0, None, Compiled, qt_QColorDialog_minimumSizeHint_QSize_QColorDialog, Return, "qt.QSize", Parameters, new Param(c, "this", "qt.QColorDialog"), End),
    _func[4] = new MemberFunction(c, "sizeHint", _n_sizeHint0, None, Compiled, qt_QColorDialog_sizeHint_QSize_QColorDialog, Return, "qt.QSize", Parameters, new Param(c, "this", "qt.QColorDialog"), End),
    _func[5] = new MemberFunction(c, "closeEvent", _n_closeEvent0, None, Compiled, qt_QColorDialog_closeEvent_void_QColorDialog_QCloseEvent, Return, "void", Parameters, new Param(c, "this", "qt.QColorDialog"), new Param(c, "e", "qt.QCloseEvent"), End),
    _func[6] = new MemberFunction(c, "contextMenuEvent", _n_contextMenuEvent0, None, Compiled, qt_QColorDialog_contextMenuEvent_void_QColorDialog_QContextMenuEvent, Return, "void", Parameters, new Param(c, "this", "qt.QColorDialog"), new Param(c, "e", "qt.QContextMenuEvent"), End),
    _func[7] = new MemberFunction(c, "event", _n_event0, None, Compiled, qt_QColorDialog_event_bool_QColorDialog_QEvent, Return, "bool", Parameters, new Param(c, "this", "qt.QColorDialog"), new Param(c, "e", "qt.QEvent"), End),
    _func[8] = new MemberFunction(c, "eventFilter", _n_eventFilter0, None, Compiled, qt_QColorDialog_eventFilter_bool_QColorDialog_QObject_QEvent, Return, "bool", Parameters, new Param(c, "this", "qt.QColorDialog"), new Param(c, "o", "qt.QObject"), new Param(c, "e", "qt.QEvent"), End),
    _func[9] = new MemberFunction(c, "keyPressEvent", _n_keyPressEvent0, None, Compiled, qt_QColorDialog_keyPressEvent_void_QColorDialog_QKeyEvent, Return, "void", Parameters, new Param(c, "this", "qt.QColorDialog"), new Param(c, "e", "qt.QKeyEvent"), End),
    _func[10] = new MemberFunction(c, "resizeEvent", _n_resizeEvent0, None, Compiled, qt_QColorDialog_resizeEvent_void_QColorDialog_QResizeEvent, Return, "void", Parameters, new Param(c, "this", "qt.QColorDialog"), new Param(c, "_p15", "qt.QResizeEvent"), End),
    _func[11] = new MemberFunction(c, "showEvent", _n_showEvent0, None, Compiled, qt_QColorDialog_showEvent_void_QColorDialog_QShowEvent, Return, "void", Parameters, new Param(c, "this", "qt.QColorDialog"), new Param(c, "event", "qt.QShowEvent"), End),
    // static functions
    new Function(c, "customColor", _n_customColor0, None, Compiled, qt_QColorDialog_customColor_QColor_int, Return, "qt.QColor", Parameters, new Param(c, "index", "int"), End),
    new Function(c, "customCount", _n_customCount0, None, Compiled, qt_QColorDialog_customCount_int, Return, "int", End),
    new Function(c, "getColor", _n_getColor0, None, Compiled, qt_QColorDialog_getColor_QColor_QColor_QWidget_string_int, Return, "qt.QColor", Parameters, new Param(c, "initial", "qt.QColor"), new Param(c, "parent", "qt.QWidget"), new Param(c, "title", "string"), new Param(c, "options", "int", Value((int)QColorDialog::ColorDialogOptions())), End),
    new Function(c, "setCustomColor", _n_setCustomColor0, None, Compiled, qt_QColorDialog_setCustomColor_void_int_QColor, Return, "void", Parameters, new Param(c, "index", "int"), new Param(c, "color", "qt.QColor"), End),
    new Function(c, "setStandardColor", _n_setStandardColor0, None, Compiled, qt_QColorDialog_setStandardColor_void_int_QColor, Return, "void", Parameters, new Param(c, "index", "int"), new Param(c, "color", "qt.QColor"), End),
    new Function(c, "standardColor", _n_standardColor0, None, Compiled, qt_QColorDialog_standardColor_QColor_int, Return, "qt.QColor", Parameters, new Param(c, "index", "int"), End),
    EndArguments);
globalScope()->addSymbols(
    EndArguments);
scope()->addSymbols(
    EndArguments);


    const char** propExclusions = 0;

    populate(this, QColorDialog::staticMetaObject, propExclusions);
}

} // Mu