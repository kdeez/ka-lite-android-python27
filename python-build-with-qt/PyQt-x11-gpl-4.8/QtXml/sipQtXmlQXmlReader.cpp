/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:04:00 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtXml.h"

#line 141 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtXml/qxml.sip"
#include <qxml.h>
#line 39 "sipQtXmlQXmlReader.cpp"

#line 88 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtXml/qxml.sip"
#include <qxml.h>
#line 43 "sipQtXmlQXmlReader.cpp"
#line 298 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtXml/qxml.sip"
#include <qxml.h>
#line 46 "sipQtXmlQXmlReader.cpp"
#line 280 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtXml/qxml.sip"
#include <qxml.h>
#line 49 "sipQtXmlQXmlReader.cpp"
#line 241 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtXml/qxml.sip"
#include <qxml.h>
#line 52 "sipQtXmlQXmlReader.cpp"
#line 219 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtXml/qxml.sip"
#include <qxml.h>
#line 55 "sipQtXmlQXmlReader.cpp"
#line 255 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtXml/qxml.sip"
#include <qxml.h>
#line 58 "sipQtXmlQXmlReader.cpp"
#line 268 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtXml/qxml.sip"
#include <qxml.h>
#line 61 "sipQtXmlQXmlReader.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 64 "sipQtXmlQXmlReader.cpp"


class sipQXmlReader : public QXmlReader
{
public:
    sipQXmlReader();
    sipQXmlReader(const QXmlReader&);
    virtual ~sipQXmlReader();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool feature(const QString&,bool *) const;
    void setFeature(const QString&,bool);
    bool hasFeature(const QString&) const;
    void * property(const QString&,bool *) const;
    void setProperty(const QString&,void *);
    bool hasProperty(const QString&) const;
    void setEntityResolver(QXmlEntityResolver *);
    QXmlEntityResolver * entityResolver() const;
    void setDTDHandler(QXmlDTDHandler *);
    QXmlDTDHandler * DTDHandler() const;
    void setContentHandler(QXmlContentHandler *);
    QXmlContentHandler * contentHandler() const;
    void setErrorHandler(QXmlErrorHandler *);
    QXmlErrorHandler * errorHandler() const;
    void setLexicalHandler(QXmlLexicalHandler *);
    QXmlLexicalHandler * lexicalHandler() const;
    void setDeclHandler(QXmlDeclHandler *);
    QXmlDeclHandler * declHandler() const;
    bool parse(const QXmlInputSource&);
    bool parse(const QXmlInputSource *);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQXmlReader(const sipQXmlReader &);
    sipQXmlReader &operator = (const sipQXmlReader &);

    char sipPyMethods[20];
};

sipQXmlReader::sipQXmlReader(): QXmlReader(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQXmlReader::sipQXmlReader(const QXmlReader& a0): QXmlReader(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQXmlReader::~sipQXmlReader()
{
    sipCommonDtor(sipPySelf);
}

bool sipQXmlReader::feature(const QString& a0,bool *a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,sipName_QXmlReader,sipName_feature);

    if (!meth)
        return 0;

    extern bool sipVH_QtXml_25(sip_gilstate_t,PyObject *,const QString&,bool *);

    return sipVH_QtXml_25(sipGILState,meth,a0,a1);
}

void sipQXmlReader::setFeature(const QString& a0,bool a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,sipName_QXmlReader,sipName_setFeature);

    if (!meth)
        return;

    extern void sipVH_QtXml_24(sip_gilstate_t,PyObject *,const QString&,bool);

    sipVH_QtXml_24(sipGILState,meth,a0,a1);
}

bool sipQXmlReader::hasFeature(const QString& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,sipName_QXmlReader,sipName_hasFeature);

    if (!meth)
        return 0;

    typedef bool (*sipVH_QtCore_28)(sip_gilstate_t,PyObject *,const QString&);

    return ((sipVH_QtCore_28)(sipModuleAPI_QtXml_QtCore->em_virthandlers[28]))(sipGILState,meth,a0);
}

void * sipQXmlReader::property(const QString& a0,bool *a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,sipName_QXmlReader,sipName_property);

    if (!meth)
        return 0;

    extern void * sipVH_QtXml_23(sip_gilstate_t,PyObject *,const QString&,bool *);

    return sipVH_QtXml_23(sipGILState,meth,a0,a1);
}

void sipQXmlReader::setProperty(const QString& a0,void *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,sipName_QXmlReader,sipName_setProperty);

    if (!meth)
        return;

    extern void sipVH_QtXml_22(sip_gilstate_t,PyObject *,const QString&,void *);

    sipVH_QtXml_22(sipGILState,meth,a0,a1);
}

bool sipQXmlReader::hasProperty(const QString& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[5]),sipPySelf,sipName_QXmlReader,sipName_hasProperty);

    if (!meth)
        return 0;

    typedef bool (*sipVH_QtCore_28)(sip_gilstate_t,PyObject *,const QString&);

    return ((sipVH_QtCore_28)(sipModuleAPI_QtXml_QtCore->em_virthandlers[28]))(sipGILState,meth,a0);
}

void sipQXmlReader::setEntityResolver(QXmlEntityResolver *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,sipName_QXmlReader,sipName_setEntityResolver);

    if (!meth)
        return;

    extern void sipVH_QtXml_21(sip_gilstate_t,PyObject *,QXmlEntityResolver *);

    sipVH_QtXml_21(sipGILState,meth,a0);
}

QXmlEntityResolver * sipQXmlReader::entityResolver() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,sipName_QXmlReader,sipName_entityResolver);

    if (!meth)
        return 0;

    extern QXmlEntityResolver * sipVH_QtXml_20(sip_gilstate_t,PyObject *);

    return sipVH_QtXml_20(sipGILState,meth);
}

void sipQXmlReader::setDTDHandler(QXmlDTDHandler *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,sipName_QXmlReader,sipName_setDTDHandler);

    if (!meth)
        return;

    extern void sipVH_QtXml_19(sip_gilstate_t,PyObject *,QXmlDTDHandler *);

    sipVH_QtXml_19(sipGILState,meth,a0);
}

QXmlDTDHandler * sipQXmlReader::DTDHandler() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[9]),sipPySelf,sipName_QXmlReader,sipName_DTDHandler);

    if (!meth)
        return 0;

    extern QXmlDTDHandler * sipVH_QtXml_18(sip_gilstate_t,PyObject *);

    return sipVH_QtXml_18(sipGILState,meth);
}

void sipQXmlReader::setContentHandler(QXmlContentHandler *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[10],sipPySelf,sipName_QXmlReader,sipName_setContentHandler);

    if (!meth)
        return;

    extern void sipVH_QtXml_17(sip_gilstate_t,PyObject *,QXmlContentHandler *);

    sipVH_QtXml_17(sipGILState,meth,a0);
}

QXmlContentHandler * sipQXmlReader::contentHandler() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[11]),sipPySelf,sipName_QXmlReader,sipName_contentHandler);

    if (!meth)
        return 0;

    extern QXmlContentHandler * sipVH_QtXml_16(sip_gilstate_t,PyObject *);

    return sipVH_QtXml_16(sipGILState,meth);
}

void sipQXmlReader::setErrorHandler(QXmlErrorHandler *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[12],sipPySelf,sipName_QXmlReader,sipName_setErrorHandler);

    if (!meth)
        return;

    extern void sipVH_QtXml_15(sip_gilstate_t,PyObject *,QXmlErrorHandler *);

    sipVH_QtXml_15(sipGILState,meth,a0);
}

QXmlErrorHandler * sipQXmlReader::errorHandler() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[13]),sipPySelf,sipName_QXmlReader,sipName_errorHandler);

    if (!meth)
        return 0;

    extern QXmlErrorHandler * sipVH_QtXml_14(sip_gilstate_t,PyObject *);

    return sipVH_QtXml_14(sipGILState,meth);
}

void sipQXmlReader::setLexicalHandler(QXmlLexicalHandler *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[14],sipPySelf,sipName_QXmlReader,sipName_setLexicalHandler);

    if (!meth)
        return;

    extern void sipVH_QtXml_13(sip_gilstate_t,PyObject *,QXmlLexicalHandler *);

    sipVH_QtXml_13(sipGILState,meth,a0);
}

QXmlLexicalHandler * sipQXmlReader::lexicalHandler() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[15]),sipPySelf,sipName_QXmlReader,sipName_lexicalHandler);

    if (!meth)
        return 0;

    extern QXmlLexicalHandler * sipVH_QtXml_12(sip_gilstate_t,PyObject *);

    return sipVH_QtXml_12(sipGILState,meth);
}

void sipQXmlReader::setDeclHandler(QXmlDeclHandler *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[16],sipPySelf,sipName_QXmlReader,sipName_setDeclHandler);

    if (!meth)
        return;

    extern void sipVH_QtXml_11(sip_gilstate_t,PyObject *,QXmlDeclHandler *);

    sipVH_QtXml_11(sipGILState,meth,a0);
}

QXmlDeclHandler * sipQXmlReader::declHandler() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[17]),sipPySelf,sipName_QXmlReader,sipName_declHandler);

    if (!meth)
        return 0;

    extern QXmlDeclHandler * sipVH_QtXml_10(sip_gilstate_t,PyObject *);

    return sipVH_QtXml_10(sipGILState,meth);
}

bool sipQXmlReader::parse(const QXmlInputSource& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[18],sipPySelf,sipName_QXmlReader,sipName_parse);

    if (!meth)
        return 0;

    extern bool sipVH_QtXml_26(sip_gilstate_t,PyObject *,const QXmlInputSource&);

    return sipVH_QtXml_26(sipGILState,meth,a0);
}

bool sipQXmlReader::parse(const QXmlInputSource *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[19],sipPySelf,sipName_QXmlReader,sipName_parse);

    if (!meth)
        return 0;

    extern bool sipVH_QtXml_9(sip_gilstate_t,PyObject *,const QXmlInputSource *);

    return sipVH_QtXml_9(sipGILState,meth,a0);
}


extern "C" {static PyObject *meth_QXmlReader_feature(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_feature(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QString * a0;
        int a0State = 0;
        bool a1;
        QXmlReader *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_ok,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1", &sipSelf, sipType_QXmlReader, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_feature);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->feature(*a0,&a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipBuildResult(0,"(bb)",sipRes,a1);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_feature, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlReader_setFeature(PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_setFeature(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QString * a0;
        int a0State = 0;
        bool a1;
        QXmlReader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1b", &sipSelf, sipType_QXmlReader, &sipCpp, sipType_QString,&a0, &a0State, &a1))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_setFeature);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->setFeature(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_setFeature, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlReader_hasFeature(PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_hasFeature(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QString * a0;
        int a0State = 0;
        QXmlReader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlReader, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_hasFeature);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->hasFeature(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_hasFeature, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlReader_property(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_property(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QString * a0;
        int a0State = 0;
        bool a1;
        QXmlReader *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_ok,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1", &sipSelf, sipType_QXmlReader, &sipCpp, sipType_QString,&a0, &a0State))
        {
            void *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_property);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->property(*a0,&a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipBuildResult(0,"(Vb)",sipRes,a1);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_property, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlReader_setProperty(PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_setProperty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QString * a0;
        int a0State = 0;
        void * a1;
        QXmlReader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1v", &sipSelf, sipType_QXmlReader, &sipCpp, sipType_QString,&a0, &a0State, &a1))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_setProperty);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->setProperty(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_setProperty, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlReader_hasProperty(PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_hasProperty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QString * a0;
        int a0State = 0;
        QXmlReader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlReader, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_hasProperty);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->hasProperty(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_hasProperty, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlReader_setEntityResolver(PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_setEntityResolver(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QXmlEntityResolver * a0;
        PyObject *a0Keep;
        QXmlReader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QXmlReader, &sipCpp, &a0Keep, sipType_QXmlEntityResolver, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_setEntityResolver);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->setEntityResolver(a0);
            Py_END_ALLOW_THREADS

            sipKeepReference(sipSelf, -2, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_setEntityResolver, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlReader_entityResolver(PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_entityResolver(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QXmlReader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlReader, &sipCpp))
        {
            QXmlEntityResolver *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_entityResolver);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->entityResolver();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QXmlEntityResolver,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_entityResolver, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlReader_setDTDHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_setDTDHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QXmlDTDHandler * a0;
        PyObject *a0Keep;
        QXmlReader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QXmlReader, &sipCpp, &a0Keep, sipType_QXmlDTDHandler, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_setDTDHandler);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->setDTDHandler(a0);
            Py_END_ALLOW_THREADS

            sipKeepReference(sipSelf, -3, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_setDTDHandler, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlReader_DTDHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_DTDHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QXmlReader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlReader, &sipCpp))
        {
            QXmlDTDHandler *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_DTDHandler);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->DTDHandler();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QXmlDTDHandler,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_DTDHandler, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlReader_setContentHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_setContentHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QXmlContentHandler * a0;
        PyObject *a0Keep;
        QXmlReader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QXmlReader, &sipCpp, &a0Keep, sipType_QXmlContentHandler, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_setContentHandler);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->setContentHandler(a0);
            Py_END_ALLOW_THREADS

            sipKeepReference(sipSelf, -4, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_setContentHandler, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlReader_contentHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_contentHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QXmlReader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlReader, &sipCpp))
        {
            QXmlContentHandler *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_contentHandler);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->contentHandler();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QXmlContentHandler,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_contentHandler, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlReader_setErrorHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_setErrorHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QXmlErrorHandler * a0;
        PyObject *a0Keep;
        QXmlReader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QXmlReader, &sipCpp, &a0Keep, sipType_QXmlErrorHandler, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_setErrorHandler);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->setErrorHandler(a0);
            Py_END_ALLOW_THREADS

            sipKeepReference(sipSelf, -5, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_setErrorHandler, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlReader_errorHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_errorHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QXmlReader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlReader, &sipCpp))
        {
            QXmlErrorHandler *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_errorHandler);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->errorHandler();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QXmlErrorHandler,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_errorHandler, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlReader_setLexicalHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_setLexicalHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QXmlLexicalHandler * a0;
        PyObject *a0Keep;
        QXmlReader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QXmlReader, &sipCpp, &a0Keep, sipType_QXmlLexicalHandler, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_setLexicalHandler);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->setLexicalHandler(a0);
            Py_END_ALLOW_THREADS

            sipKeepReference(sipSelf, -6, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_setLexicalHandler, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlReader_lexicalHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_lexicalHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QXmlReader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlReader, &sipCpp))
        {
            QXmlLexicalHandler *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_lexicalHandler);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->lexicalHandler();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QXmlLexicalHandler,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_lexicalHandler, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlReader_setDeclHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_setDeclHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QXmlDeclHandler * a0;
        PyObject *a0Keep;
        QXmlReader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QXmlReader, &sipCpp, &a0Keep, sipType_QXmlDeclHandler, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_setDeclHandler);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->setDeclHandler(a0);
            Py_END_ALLOW_THREADS

            sipKeepReference(sipSelf, -7, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_setDeclHandler, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlReader_declHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_declHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QXmlReader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlReader, &sipCpp))
        {
            QXmlDeclHandler *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_declHandler);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->declHandler();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QXmlDeclHandler,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_declHandler, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlReader_parse(PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_parse(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QXmlInputSource * a0;
        QXmlReader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QXmlReader, &sipCpp, sipType_QXmlInputSource, &a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_parse);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->parse(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const QXmlInputSource * a0;
        QXmlReader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QXmlReader, &sipCpp, sipType_QXmlInputSource, &a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_parse);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->parse(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_parse, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QXmlReader(void *, const sipTypeDef *);}
static void *cast_QXmlReader(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QXmlReader)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlReader(void *, int);}
static void release_QXmlReader(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQXmlReader *>(sipCppV);
    else
        delete reinterpret_cast<QXmlReader *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QXmlReader(sipSimpleWrapper *);}
static void dealloc_QXmlReader(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQXmlReader *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QXmlReader(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_QXmlReader(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QXmlReader(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQXmlReader *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQXmlReader();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QXmlReader * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QXmlReader, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQXmlReader(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QXmlReader[] = {
    {SIP_MLNAME_CAST(sipName_DTDHandler), meth_QXmlReader_DTDHandler, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_contentHandler), meth_QXmlReader_contentHandler, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_declHandler), meth_QXmlReader_declHandler, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_entityResolver), meth_QXmlReader_entityResolver, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_errorHandler), meth_QXmlReader_errorHandler, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_feature), (PyCFunction)meth_QXmlReader_feature, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_hasFeature), meth_QXmlReader_hasFeature, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_hasProperty), meth_QXmlReader_hasProperty, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_lexicalHandler), meth_QXmlReader_lexicalHandler, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_parse), meth_QXmlReader_parse, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_property), (PyCFunction)meth_QXmlReader_property, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_setContentHandler), meth_QXmlReader_setContentHandler, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setDTDHandler), meth_QXmlReader_setDTDHandler, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setDeclHandler), meth_QXmlReader_setDeclHandler, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setEntityResolver), meth_QXmlReader_setEntityResolver, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setErrorHandler), meth_QXmlReader_setErrorHandler, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setFeature), meth_QXmlReader_setFeature, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setLexicalHandler), meth_QXmlReader_setLexicalHandler, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setProperty), meth_QXmlReader_setProperty, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtXml_QXmlReader = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QXmlReader,
        {0}
    },
    {
        sipNameNr_QXmlReader,
        {0, 0, 1},
        19, methods_QXmlReader,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QXmlReader,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QXmlReader,
    0,
    0,
    0,
    release_QXmlReader,
    cast_QXmlReader,
    0,
    0,
    0
},
    0,
    0,
    0
};
