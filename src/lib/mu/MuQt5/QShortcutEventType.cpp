//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0 
// 
#include <MuQt5/qtUtils.h>
#include <MuQt5/QShortcutEventType.h>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>
#include <QtSvg/QtSvg>
#include <QtNetwork/QtNetwork>
#include <MuQt5/QWidgetType.h>
#include <MuQt5/QActionType.h>
#include <MuQt5/QIconType.h>
#include <Mu/BaseFunctions.h>
#include <Mu/Alias.h>
#include <Mu/SymbolicConstant.h>
#include <Mu/Thread.h>
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
#include <MuQt5/QKeySequenceType.h>

//
//  NOTE: this file was automatically generated by qt2mu.py
//

namespace Mu {
using namespace std;

QShortcutEventType::QShortcutEventType(Context* c, const char* name, Class* super)
    : Class(c, name, super)
{
}

QShortcutEventType::~QShortcutEventType()
{
}

//----------------------------------------------------------------------
//  PRE-COMPILED FUNCTIONS

Pointer qt_QShortcutEvent_QShortcutEvent_QShortcutEvent_QShortcutEvent_QKeySequence_int_bool(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_key, int param_id, bool param_ambiguous)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QKeySequence  arg1 = getqtype<QKeySequenceType>(param_key);
    int arg2 = (int)(param_id);
    bool arg3 = (bool)(param_ambiguous);
    setqpointer<QShortcutEventType>(param_this,new QShortcutEvent(arg1, arg2, arg3));
    return param_this;
}

bool qt_QShortcutEvent_isAmbiguous_bool_QShortcutEvent(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QShortcutEvent * arg0 = getqpointer<QShortcutEventType>(param_this);
    return arg0->isAmbiguous();
}

Pointer qt_QShortcutEvent_key_QKeySequence_QShortcutEvent(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QShortcutEvent * arg0 = getqpointer<QShortcutEventType>(param_this);
    return makeqtype<QKeySequenceType>(c,arg0->key(),"qt.QKeySequence");
}

int qt_QShortcutEvent_shortcutId_int_QShortcutEvent(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QShortcutEvent * arg0 = getqpointer<QShortcutEventType>(param_this);
    return arg0->shortcutId();
}


static NODE_IMPLEMENTATION(_n_QShortcutEvent0, Pointer)
{
    NODE_RETURN(qt_QShortcutEvent_QShortcutEvent_QShortcutEvent_QShortcutEvent_QKeySequence_int_bool(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer), NODE_ARG(2, int), NODE_ARG(3, bool)));
}

static NODE_IMPLEMENTATION(_n_isAmbiguous0, bool)
{
    NODE_RETURN(qt_QShortcutEvent_isAmbiguous_bool_QShortcutEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_key0, Pointer)
{
    NODE_RETURN(qt_QShortcutEvent_key_QKeySequence_QShortcutEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_shortcutId0, int)
{
    NODE_RETURN(qt_QShortcutEvent_shortcutId_int_QShortcutEvent(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}



void
QShortcutEventType::load()
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

               new MemberVariable(c, "native", "qt.NativeObject"),

               EndArguments );


addSymbols(
    EndArguments);

addSymbols(
    // enums
    // member functions
    new Function(c, "QShortcutEvent", _n_QShortcutEvent0, None, Compiled, qt_QShortcutEvent_QShortcutEvent_QShortcutEvent_QShortcutEvent_QKeySequence_int_bool, Return, "qt.QShortcutEvent", Parameters, new Param(c, "this", "qt.QShortcutEvent"), new Param(c, "key", "qt.QKeySequence"), new Param(c, "id", "int"), new Param(c, "ambiguous", "bool"), End),
    new Function(c, "isAmbiguous", _n_isAmbiguous0, None, Compiled, qt_QShortcutEvent_isAmbiguous_bool_QShortcutEvent, Return, "bool", Parameters, new Param(c, "this", "qt.QShortcutEvent"), End),
    new Function(c, "key", _n_key0, None, Compiled, qt_QShortcutEvent_key_QKeySequence_QShortcutEvent, Return, "qt.QKeySequence", Parameters, new Param(c, "this", "qt.QShortcutEvent"), End),
    new Function(c, "shortcutId", _n_shortcutId0, None, Compiled, qt_QShortcutEvent_shortcutId_int_QShortcutEvent, Return, "int", Parameters, new Param(c, "this", "qt.QShortcutEvent"), End),
    // static functions
    EndArguments);
globalScope()->addSymbols(
    EndArguments);
scope()->addSymbols(
    EndArguments);

}

} // Mu