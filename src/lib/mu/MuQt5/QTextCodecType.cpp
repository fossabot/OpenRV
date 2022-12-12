//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0 
// 
#include <MuQt5/qtUtils.h>
#include <MuQt5/QTextCodecType.h>
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
#include <MuQt5/QByteArrayType.h>

//
//  NOTE: this file was automatically generated by qt2mu.py
//

namespace Mu {
using namespace std;

QTextCodecType::QTextCodecType(Context* c, const char* name, Class* super)
    : Class(c, name, super)
{
}

QTextCodecType::~QTextCodecType()
{
}

//----------------------------------------------------------------------
//  PRE-COMPILED FUNCTIONS

bool qt_QTextCodec_canEncode_bool_QTextCodec_string(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_s)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QTextCodec * arg0 = getqpointer<QTextCodecType>(param_this);
    const QString  arg1 = qstring(param_s);
    return arg0->canEncode(arg1);
}

Pointer qt_QTextCodec_fromUnicode_QByteArray_QTextCodec_string(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_str)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QTextCodec * arg0 = getqpointer<QTextCodecType>(param_this);
    const QString  arg1 = qstring(param_str);
    return makeqtype<QByteArrayType>(c,arg0->fromUnicode(arg1),"qt.QByteArray");
}

int qt_QTextCodec_mibEnum_int_QTextCodec(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QTextCodec * arg0 = getqpointer<QTextCodecType>(param_this);
    return arg0->mibEnum();
}

Pointer qt_QTextCodec_name_QByteArray_QTextCodec(Mu::Thread& NODE_THREAD, Pointer param_this)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QTextCodec * arg0 = getqpointer<QTextCodecType>(param_this);
    return makeqtype<QByteArrayType>(c,arg0->name(),"qt.QByteArray");
}

Pointer qt_QTextCodec_toUnicode_string_QTextCodec_QByteArray(Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_a)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QTextCodec * arg0 = getqpointer<QTextCodecType>(param_this);
    const QByteArray  arg1 = getqtype<QByteArrayType>(param_a);
    return makestring(c,arg0->toUnicode(arg1));
}

Pointer qt_QTextCodec_codecForHtml_QTextCodec_QByteArray_QTextCodec(Mu::Thread& NODE_THREAD, Pointer param_ba, Pointer param_defaultCodec)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QByteArray  arg0 = getqtype<QByteArrayType>(param_ba);
    QTextCodec * arg1 = getqpointer<QTextCodecType>(param_defaultCodec);
    return makeqpointer<QTextCodecType>(c,QTextCodec::codecForHtml(arg0, arg1),"qt.QTextCodec");
}

Pointer qt_QTextCodec_codecForHtml_QTextCodec_QByteArray(Mu::Thread& NODE_THREAD, Pointer param_ba)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QByteArray  arg0 = getqtype<QByteArrayType>(param_ba);
    return makeqpointer<QTextCodecType>(c,QTextCodec::codecForHtml(arg0),"qt.QTextCodec");
}

Pointer qt_QTextCodec_codecForLocale_QTextCodec(Mu::Thread& NODE_THREAD)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    return makeqpointer<QTextCodecType>(c,QTextCodec::codecForLocale(),"qt.QTextCodec");
}

Pointer qt_QTextCodec_codecForMib_QTextCodec_int(Mu::Thread& NODE_THREAD, int param_mib)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    int arg0 = (int)(param_mib);
    return makeqpointer<QTextCodecType>(c,QTextCodec::codecForMib(arg0),"qt.QTextCodec");
}

Pointer qt_QTextCodec_codecForName_QTextCodec_QByteArray(Mu::Thread& NODE_THREAD, Pointer param_name)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QByteArray  arg0 = getqtype<QByteArrayType>(param_name);
    return makeqpointer<QTextCodecType>(c,QTextCodec::codecForName(arg0),"qt.QTextCodec");
}

Pointer qt_QTextCodec_codecForUtfText_QTextCodec_QByteArray_QTextCodec(Mu::Thread& NODE_THREAD, Pointer param_ba, Pointer param_defaultCodec)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QByteArray  arg0 = getqtype<QByteArrayType>(param_ba);
    QTextCodec * arg1 = getqpointer<QTextCodecType>(param_defaultCodec);
    return makeqpointer<QTextCodecType>(c,QTextCodec::codecForUtfText(arg0, arg1),"qt.QTextCodec");
}

Pointer qt_QTextCodec_codecForUtfText_QTextCodec_QByteArray(Mu::Thread& NODE_THREAD, Pointer param_ba)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    const QByteArray  arg0 = getqtype<QByteArrayType>(param_ba);
    return makeqpointer<QTextCodecType>(c,QTextCodec::codecForUtfText(arg0),"qt.QTextCodec");
}

void qt_QTextCodec_setCodecForLocale_void_QTextCodec(Mu::Thread& NODE_THREAD, Pointer param_c)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    QTextCodec * arg0 = getqpointer<QTextCodecType>(param_c);
    QTextCodec::setCodecForLocale(arg0);
}


static NODE_IMPLEMENTATION(_n_canEncode1, bool)
{
    NODE_RETURN(qt_QTextCodec_canEncode_bool_QTextCodec_string(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
}

static NODE_IMPLEMENTATION(_n_fromUnicode0, Pointer)
{
    NODE_RETURN(qt_QTextCodec_fromUnicode_QByteArray_QTextCodec_string(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
}

static NODE_IMPLEMENTATION(_n_mibEnum0, int)
{
    NODE_RETURN(qt_QTextCodec_mibEnum_int_QTextCodec(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_name0, Pointer)
{
    NODE_RETURN(qt_QTextCodec_name_QByteArray_QTextCodec(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_toUnicode0, Pointer)
{
    NODE_RETURN(qt_QTextCodec_toUnicode_string_QTextCodec_QByteArray(NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
}

static NODE_IMPLEMENTATION(_n_codecForHtml0, Pointer)
{
    NODE_RETURN(qt_QTextCodec_codecForHtml_QTextCodec_QByteArray_QTextCodec(NODE_THREAD, NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
}

static NODE_IMPLEMENTATION(_n_codecForHtml1, Pointer)
{
    NODE_RETURN(qt_QTextCodec_codecForHtml_QTextCodec_QByteArray(NODE_THREAD, NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_codecForLocale0, Pointer)
{
    NODE_RETURN(qt_QTextCodec_codecForLocale_QTextCodec(NODE_THREAD));
}

static NODE_IMPLEMENTATION(_n_codecForMib0, Pointer)
{
    NODE_RETURN(qt_QTextCodec_codecForMib_QTextCodec_int(NODE_THREAD, NODE_ARG(0, int)));
}

static NODE_IMPLEMENTATION(_n_codecForName0, Pointer)
{
    NODE_RETURN(qt_QTextCodec_codecForName_QTextCodec_QByteArray(NODE_THREAD, NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_codecForUtfText0, Pointer)
{
    NODE_RETURN(qt_QTextCodec_codecForUtfText_QTextCodec_QByteArray_QTextCodec(NODE_THREAD, NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
}

static NODE_IMPLEMENTATION(_n_codecForUtfText1, Pointer)
{
    NODE_RETURN(qt_QTextCodec_codecForUtfText_QTextCodec_QByteArray(NODE_THREAD, NODE_ARG(0, Pointer)));
}

static NODE_IMPLEMENTATION(_n_setCodecForLocale0, void)
{
    qt_QTextCodec_setCodecForLocale_void_QTextCodec(NODE_THREAD, NODE_ARG(0, Pointer));
}


static Pointer
codecForName_QTextCodec_string(Thread& NODE_THREAD, Pointer p)
{
    MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
    StringType::String* str = reinterpret_cast<StringType::String*>(p);
    return makeqpointer<QTextCodecType>(c,QTextCodec::codecForName(str->c_str()),"qt.QTextCodec");
}

static NODE_IMPLEMENTATION(codecForName2, Pointer)
{
    NODE_RETURN(codecForName_QTextCodec_string(NODE_THREAD, NODE_ARG(0, Pointer)));
}

void
QTextCodecType::load()
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
    new Alias(c, "ConversionFlag", "int"),
    new Alias(c, "ConversionFlags", "int"),
      new SymbolicConstant(c, "DefaultConversion", "int", Value(int(QTextCodec::DefaultConversion))),
      new SymbolicConstant(c, "ConvertInvalidToNull", "int", Value(int(QTextCodec::ConvertInvalidToNull))),
      new SymbolicConstant(c, "IgnoreHeader", "int", Value(int(QTextCodec::IgnoreHeader))),
    EndArguments);

addSymbols(
    // enums
    // member functions
    // MISSING: aliases ("QList<QByteArray>"; QTextCodec this)
    // MISSING: canEncode (bool; QTextCodec this, "QChar" ch)
    new Function(c, "canEncode", _n_canEncode1, None, Compiled, qt_QTextCodec_canEncode_bool_QTextCodec_string, Return, "bool", Parameters, new Param(c, "this", "qt.QTextCodec"), new Param(c, "s", "string"), End),
    new Function(c, "fromUnicode", _n_fromUnicode0, None, Compiled, qt_QTextCodec_fromUnicode_QByteArray_QTextCodec_string, Return, "qt.QByteArray", Parameters, new Param(c, "this", "qt.QTextCodec"), new Param(c, "str", "string"), End),
    // MISSING: fromUnicode (QByteArray; QTextCodec this, "const QChar *" input, int number, "ConverterState *" state)
    // MISSING: makeDecoder ("QTextDecoder *"; QTextCodec this, flags QTextCodec::ConversionFlags flags)
    // MISSING: makeEncoder ("QTextEncoder *"; QTextCodec this, flags QTextCodec::ConversionFlags flags)
    new MemberFunction(c, "mibEnum", _n_mibEnum0, None, Compiled, qt_QTextCodec_mibEnum_int_QTextCodec, Return, "int", Parameters, new Param(c, "this", "qt.QTextCodec"), End),
    new MemberFunction(c, "name", _n_name0, None, Compiled, qt_QTextCodec_name_QByteArray_QTextCodec, Return, "qt.QByteArray", Parameters, new Param(c, "this", "qt.QTextCodec"), End),
    new Function(c, "toUnicode", _n_toUnicode0, None, Compiled, qt_QTextCodec_toUnicode_string_QTextCodec_QByteArray, Return, "string", Parameters, new Param(c, "this", "qt.QTextCodec"), new Param(c, "a", "qt.QByteArray"), End),
    // MISSING: toUnicode (string; QTextCodec this, "const char *" chars)
    // MISSING: toUnicode (string; QTextCodec this, "const char *" input, int size, "ConverterState *" state)
    // NOT INHERITABLE PROTECTED: QTextCodec (QTextCodec; QTextCodec this) // protected
    // MISSING: convertFromUnicode (QByteArray; QTextCodec this, "const QChar *" input, int number, "ConverterState *" state) // protected
    // MISSING: convertToUnicode (string; QTextCodec this, "const char *" chars, int len, "ConverterState *" state) // protected
    // static functions
    // MISSING: availableCodecs ("QList<QByteArray>"; )
    // MISSING: availableMibs ("QList<int>"; )
    new Function(c, "codecForHtml", _n_codecForHtml0, None, Compiled, qt_QTextCodec_codecForHtml_QTextCodec_QByteArray_QTextCodec, Return, "qt.QTextCodec", Parameters, new Param(c, "ba", "qt.QByteArray"), new Param(c, "defaultCodec", "qt.QTextCodec"), End),
    new Function(c, "codecForHtml", _n_codecForHtml1, None, Compiled, qt_QTextCodec_codecForHtml_QTextCodec_QByteArray, Return, "qt.QTextCodec", Parameters, new Param(c, "ba", "qt.QByteArray"), End),
    new Function(c, "codecForLocale", _n_codecForLocale0, None, Compiled, qt_QTextCodec_codecForLocale_QTextCodec, Return, "qt.QTextCodec", End),
    new Function(c, "codecForMib", _n_codecForMib0, None, Compiled, qt_QTextCodec_codecForMib_QTextCodec_int, Return, "qt.QTextCodec", Parameters, new Param(c, "mib", "int"), End),
    new Function(c, "codecForName", _n_codecForName0, None, Compiled, qt_QTextCodec_codecForName_QTextCodec_QByteArray, Return, "qt.QTextCodec", Parameters, new Param(c, "name", "qt.QByteArray"), End),
    // MISSING: codecForName (QTextCodec; "const char *" name)
    new Function(c, "codecForUtfText", _n_codecForUtfText0, None, Compiled, qt_QTextCodec_codecForUtfText_QTextCodec_QByteArray_QTextCodec, Return, "qt.QTextCodec", Parameters, new Param(c, "ba", "qt.QByteArray"), new Param(c, "defaultCodec", "qt.QTextCodec"), End),
    new Function(c, "codecForUtfText", _n_codecForUtfText1, None, Compiled, qt_QTextCodec_codecForUtfText_QTextCodec_QByteArray, Return, "qt.QTextCodec", Parameters, new Param(c, "ba", "qt.QByteArray"), End),
    new Function(c, "setCodecForLocale", _n_setCodecForLocale0, None, Compiled, qt_QTextCodec_setCodecForLocale_void_QTextCodec, Return, "void", Parameters, new Param(c, "c", "qt.QTextCodec"), End),
    EndArguments);
globalScope()->addSymbols(
    EndArguments);
scope()->addSymbols(
    EndArguments);


addSymbols( new Function(c, "codecForName", codecForName2, None,
                         Return, "qt.QTextCodec",
                         Compiled, codecForName_QTextCodec_string,
                         Parameters,
                         new Param(c, "name", "string"),
                         End),

            EndArguments);
}

} // Mu