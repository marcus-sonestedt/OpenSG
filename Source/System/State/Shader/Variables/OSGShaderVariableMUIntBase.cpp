/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: dirk@opensg.org, gerrit.voss@vossg.org, carsten_neumann@gmx.net  *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class ShaderVariableMUInt!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#ifdef WIN32 
#pragma warning(disable: 4355) // turn off 'this' : used in base member initializer list warning
#pragma warning(disable: 4290) // disable exception specification warning
#endif

#include "OSGConfig.h"




#include "OSGShaderVariableMUIntBase.h"
#include "OSGShaderVariableMUInt.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShaderVariableMUInt
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var UInt32          ShaderVariableMUIntBase::_mfValue
    variable value
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<ShaderVariableMUInt *, nsOSG>::_type(
    "ShaderVariableMUIntPtr", 
    "ShaderValueVariablePtr", 
    ShaderVariableMUInt::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(ShaderVariableMUInt *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ShaderVariableMUInt *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ShaderVariableMUInt *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ShaderVariableMUIntBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFUInt32::Description(
        MFUInt32::getClassType(),
        "value",
        "variable value\n",
        ValueFieldId, ValueFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderVariableMUInt::editHandleValue),
        static_cast<FieldGetMethodSig >(&ShaderVariableMUInt::getHandleValue));

    oType.addInitialDesc(pDesc);
}


ShaderVariableMUIntBase::TypeObject ShaderVariableMUIntBase::_type(
    ShaderVariableMUIntBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&ShaderVariableMUIntBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&ShaderVariableMUInt::initMethod),
    reinterpret_cast<ExitContainerF>(&ShaderVariableMUInt::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(
        reinterpret_cast<void *>(&ShaderVariableMUInt::classDescInserter)),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"ShaderVariableMUInt\"\n"
    "   parent=\"ShaderValueVariable\"\n"
    "   library=\"System\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   docGroupBase=\"GrpSystemShader\"\n"
    "   >\n"
    "  <Field\n"
    "\t name=\"value\"\n"
    "\t type=\"UInt32\"\n"
    "\t cardinality=\"multi\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tvariable value\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderVariableMUIntBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShaderVariableMUIntBase::getType(void) const
{
    return _type;
}

UInt32 ShaderVariableMUIntBase::getContainerSize(void) const
{
    return sizeof(ShaderVariableMUInt);
}

/*------------------------- decorator get ------------------------------*/


MFUInt32 *ShaderVariableMUIntBase::editMFValue(void)
{
    editMField(ValueFieldMask, _mfValue);

    return &_mfValue;
}

const MFUInt32 *ShaderVariableMUIntBase::getMFValue(void) const
{
    return &_mfValue;
}






/*------------------------------ access -----------------------------------*/

SizeT ShaderVariableMUIntBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        returnValue += _mfValue.getBinSize();
    }

    return returnValue;
}

void ShaderVariableMUIntBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _mfValue.copyToBin(pMem);
    }
}

void ShaderVariableMUIntBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        editMField(ValueFieldMask, _mfValue);
        _mfValue.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ShaderVariableMUIntTransitPtr ShaderVariableMUIntBase::createLocal(BitVector bFlags)
{
    ShaderVariableMUIntTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ShaderVariableMUInt>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ShaderVariableMUIntTransitPtr ShaderVariableMUIntBase::createDependent(BitVector bFlags)
{
    ShaderVariableMUIntTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ShaderVariableMUInt>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ShaderVariableMUIntTransitPtr ShaderVariableMUIntBase::create(void)
{
    ShaderVariableMUIntTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ShaderVariableMUInt>(tmpPtr);
    }

    return fc;
}

ShaderVariableMUInt *ShaderVariableMUIntBase::createEmptyLocal(BitVector bFlags)
{
    ShaderVariableMUInt *returnValue;

    newPtr<ShaderVariableMUInt>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ShaderVariableMUInt *ShaderVariableMUIntBase::createEmpty(void)
{
    ShaderVariableMUInt *returnValue;

    newPtr<ShaderVariableMUInt>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ShaderVariableMUIntBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ShaderVariableMUInt *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShaderVariableMUInt *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShaderVariableMUIntBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ShaderVariableMUInt *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShaderVariableMUInt *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShaderVariableMUIntBase::shallowCopy(void) const
{
    ShaderVariableMUInt *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ShaderVariableMUInt *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ShaderVariableMUIntBase::ShaderVariableMUIntBase(void) :
    Inherited(),
    _mfValue                  ()
{
}

ShaderVariableMUIntBase::ShaderVariableMUIntBase(const ShaderVariableMUIntBase &source) :
    Inherited(source),
    _mfValue                  (source._mfValue                  )
{
}


/*-------------------------- destructors ----------------------------------*/

ShaderVariableMUIntBase::~ShaderVariableMUIntBase(void)
{
}


GetFieldHandlePtr ShaderVariableMUIntBase::getHandleValue           (void) const
{
    MFUInt32::GetHandlePtr returnValue(
        new  MFUInt32::GetHandle(
             &_mfValue,
             this->getType().getFieldDesc(ValueFieldId),
             const_cast<ShaderVariableMUIntBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ShaderVariableMUIntBase::editHandleValue          (void)
{
    MFUInt32::EditHandlePtr returnValue(
        new  MFUInt32::EditHandle(
             &_mfValue,
             this->getType().getFieldDesc(ValueFieldId),
             this));


    editMField(ValueFieldMask, _mfValue);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ShaderVariableMUIntBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ShaderVariableMUInt *pThis = static_cast<ShaderVariableMUInt *>(this);

    pThis->execSync(static_cast<ShaderVariableMUInt *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ShaderVariableMUIntBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ShaderVariableMUInt *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ShaderVariableMUInt *>(pRefAspect),
                  dynamic_cast<const ShaderVariableMUInt *>(this));

    return returnValue;
}
#endif

void ShaderVariableMUIntBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfValue.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE
