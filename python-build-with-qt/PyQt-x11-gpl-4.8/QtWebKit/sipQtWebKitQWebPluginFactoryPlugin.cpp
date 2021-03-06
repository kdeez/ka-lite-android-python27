/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:59 2012
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

#include "sipAPIQtWebKit.h"

#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 45 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 62 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 83 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 90 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 47 "sipQtWebKitQWebPluginFactoryPlugin.cpp"

#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 51 "sipQtWebKitQWebPluginFactoryPlugin.cpp"
#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 54 "sipQtWebKitQWebPluginFactoryPlugin.cpp"
#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 45 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 62 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 83 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 90 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 65 "sipQtWebKitQWebPluginFactoryPlugin.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QWebPluginFactory_Plugin(void *, const sipTypeDef *);}
static void *cast_QWebPluginFactory_Plugin(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QWebPluginFactory_Plugin)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWebPluginFactory_Plugin(void *, int);}
static void release_QWebPluginFactory_Plugin(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QWebPluginFactory::Plugin *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QWebPluginFactory_Plugin(void *, SIP_SSIZE_T, const void *);}
static void assign_QWebPluginFactory_Plugin(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QWebPluginFactory::Plugin *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QWebPluginFactory::Plugin *>(sipSrc);
}


extern "C" {static void *array_QWebPluginFactory_Plugin(SIP_SSIZE_T);}
static void *array_QWebPluginFactory_Plugin(SIP_SSIZE_T sipNrElem)
{
    return new QWebPluginFactory::Plugin[sipNrElem];
}


extern "C" {static void *copy_QWebPluginFactory_Plugin(const void *, SIP_SSIZE_T);}
static void *copy_QWebPluginFactory_Plugin(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QWebPluginFactory::Plugin(reinterpret_cast<const QWebPluginFactory::Plugin *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QWebPluginFactory_Plugin(sipSimpleWrapper *);}
static void dealloc_QWebPluginFactory_Plugin(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QWebPluginFactory_Plugin(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QWebPluginFactory_Plugin(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QWebPluginFactory_Plugin(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QWebPluginFactory::Plugin *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QWebPluginFactory::Plugin();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QWebPluginFactory::Plugin * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QWebPluginFactory_Plugin, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QWebPluginFactory::Plugin(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static PyObject *varget_QWebPluginFactory_Plugin_description(void *, PyObject *);}
static PyObject *varget_QWebPluginFactory_Plugin_description(void *sipSelf, PyObject *)
{
    QString *sipVal;
    QWebPluginFactory::Plugin *sipCpp = reinterpret_cast<QWebPluginFactory::Plugin *>(sipSelf);

    sipVal = &sipCpp->description;

    return sipConvertFromType(sipVal,sipType_QString, NULL);
}


extern "C" {static int varset_QWebPluginFactory_Plugin_description(void *, PyObject *, PyObject *);}
static int varset_QWebPluginFactory_Plugin_description(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QString *sipVal;
    QWebPluginFactory::Plugin *sipCpp = reinterpret_cast<QWebPluginFactory::Plugin *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->description = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QWebPluginFactory_Plugin_mimeTypes(void *, PyObject *);}
static PyObject *varget_QWebPluginFactory_Plugin_mimeTypes(void *sipSelf, PyObject *)
{
    QList<QWebPluginFactory::MimeType> *sipVal;
    QWebPluginFactory::Plugin *sipCpp = reinterpret_cast<QWebPluginFactory::Plugin *>(sipSelf);

    sipVal = &sipCpp->mimeTypes;

    return sipConvertFromType(sipVal,sipType_QList_0100QWebPluginFactory_MimeType, NULL);
}


extern "C" {static int varset_QWebPluginFactory_Plugin_mimeTypes(void *, PyObject *, PyObject *);}
static int varset_QWebPluginFactory_Plugin_mimeTypes(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QList<QWebPluginFactory::MimeType> *sipVal;
    QWebPluginFactory::Plugin *sipCpp = reinterpret_cast<QWebPluginFactory::Plugin *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QList<QWebPluginFactory::MimeType> *>(sipForceConvertToType(sipPy,sipType_QList_0100QWebPluginFactory_MimeType,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->mimeTypes = *sipVal;

    sipReleaseType(sipVal, sipType_QList_0100QWebPluginFactory_MimeType, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QWebPluginFactory_Plugin_name(void *, PyObject *);}
static PyObject *varget_QWebPluginFactory_Plugin_name(void *sipSelf, PyObject *)
{
    QString *sipVal;
    QWebPluginFactory::Plugin *sipCpp = reinterpret_cast<QWebPluginFactory::Plugin *>(sipSelf);

    sipVal = &sipCpp->name;

    return sipConvertFromType(sipVal,sipType_QString, NULL);
}


extern "C" {static int varset_QWebPluginFactory_Plugin_name(void *, PyObject *, PyObject *);}
static int varset_QWebPluginFactory_Plugin_name(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QString *sipVal;
    QWebPluginFactory::Plugin *sipCpp = reinterpret_cast<QWebPluginFactory::Plugin *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->name = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}

sipVariableDef variables_QWebPluginFactory_Plugin[] = {
    {sipName_description, varget_QWebPluginFactory_Plugin_description, varset_QWebPluginFactory_Plugin_description, 0},
    {sipName_mimeTypes, varget_QWebPluginFactory_Plugin_mimeTypes, varset_QWebPluginFactory_Plugin_mimeTypes, 0},
    {sipName_name, varget_QWebPluginFactory_Plugin_name, varset_QWebPluginFactory_Plugin_name, 0},
};


pyqt4ClassTypeDef sipTypeDef_QtWebKit_QWebPluginFactory_Plugin = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QWebPluginFactory__Plugin,
        {0}
    },
    {
        sipNameNr_Plugin,
        {35, 255, 0},
        0, 0,
        0, 0,
        3, variables_QWebPluginFactory_Plugin,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QWebPluginFactory_Plugin,
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
    dealloc_QWebPluginFactory_Plugin,
    assign_QWebPluginFactory_Plugin,
    array_QWebPluginFactory_Plugin,
    copy_QWebPluginFactory_Plugin,
    release_QWebPluginFactory_Plugin,
    cast_QWebPluginFactory_Plugin,
    0,
    0,
    0
},
    0,
    0,
    0
};
