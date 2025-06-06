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
 **     class CSMClusterWinOptions!
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



#include "OSGCSMClusterWindow.h"        // Parent Class

#include "OSGCSMClusterWinOptionsBase.h"
#include "OSGCSMClusterWinOptions.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::CSMClusterWinOptions
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var CSMClusterWindow * CSMClusterWinOptionsBase::_sfParent
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<CSMClusterWinOptions *, nsOSG>::_type(
    "CSMClusterWinOptionsPtr", 
    "FieldContainerPtr", 
    CSMClusterWinOptions::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(CSMClusterWinOptions *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           CSMClusterWinOptions *,
                           nsOSG)


DataType &FieldTraits< CSMClusterWinOptions *, nsOSG + 1 >::getType(void)
{
    return FieldTraits<CSMClusterWinOptions *, nsOSG>::getType();
}


OSG_EXPORT_PTR_SFIELD(ChildPointerSField,
                      CSMClusterWinOptions *,
                      UnrecordedRefCountPolicy,
                      nsOSG + 1)


/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void CSMClusterWinOptionsBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFParentCSMClusterWindowPtr::Description(
        SFParentCSMClusterWindowPtr::getClassType(),
        "parent",
        "",
        ParentFieldId, ParentFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast     <FieldEditMethodSig>(&CSMClusterWinOptions::invalidEditField),
        static_cast     <FieldGetMethodSig >(&CSMClusterWinOptions::invalidGetField));

    oType.addInitialDesc(pDesc);
}


CSMClusterWinOptionsBase::TypeObject CSMClusterWinOptionsBase::_type(
    CSMClusterWinOptionsBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&CSMClusterWinOptionsBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&CSMClusterWinOptions::initMethod),
    reinterpret_cast<ExitContainerF>(&CSMClusterWinOptions::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(
        reinterpret_cast<void *>(&CSMClusterWinOptions::classDescInserter)),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"CSMClusterWinOptions\"\n"
    "    parent=\"FieldContainer\"\n"
    "    library=\"ContribCSM\"\n"
    "    pointerfieldtypes=\"single\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    isBundle=\"true\"\n"
    "    parentFields=\"none\"\n"
    "    childFields=\"single\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"parent\"\n"
    "\t\ttype=\"CSMClusterWindow\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"none\"\n"
    "        category=\"parentpointer\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &CSMClusterWinOptionsBase::getType(void)
{
    return _type;
}

const FieldContainerType &CSMClusterWinOptionsBase::getType(void) const
{
    return _type;
}

UInt32 CSMClusterWinOptionsBase::getContainerSize(void) const
{
    return sizeof(CSMClusterWinOptions);
}

/*------------------------- decorator get ------------------------------*/







/*------------------------------ access -----------------------------------*/

SizeT CSMClusterWinOptionsBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ParentFieldMask & whichField))
    {
        returnValue += _sfParent.getBinSize();
    }

    return returnValue;
}

void CSMClusterWinOptionsBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ParentFieldMask & whichField))
    {
        _sfParent.copyToBin(pMem);
    }
}

void CSMClusterWinOptionsBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ParentFieldMask & whichField))
    {
        editSField(ParentFieldMask);
        _sfParent.copyFromBin(pMem);
    }
}

//! create a new instance of the class
CSMClusterWinOptionsTransitPtr CSMClusterWinOptionsBase::createLocal(BitVector bFlags)
{
    CSMClusterWinOptionsTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<CSMClusterWinOptions>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
CSMClusterWinOptionsTransitPtr CSMClusterWinOptionsBase::createDependent(BitVector bFlags)
{
    CSMClusterWinOptionsTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<CSMClusterWinOptions>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
CSMClusterWinOptionsTransitPtr CSMClusterWinOptionsBase::create(void)
{
    return createLocal();
}

CSMClusterWinOptions *CSMClusterWinOptionsBase::createEmptyLocal(BitVector bFlags)
{
    CSMClusterWinOptions *returnValue;

    newPtr<CSMClusterWinOptions>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
CSMClusterWinOptions *CSMClusterWinOptionsBase::createEmpty(void)
{
    return createEmptyLocal();
}


FieldContainerTransitPtr CSMClusterWinOptionsBase::shallowCopyLocal(
    BitVector bFlags) const
{
    CSMClusterWinOptions *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CSMClusterWinOptions *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr CSMClusterWinOptionsBase::shallowCopyDependent(
    BitVector bFlags) const
{
    CSMClusterWinOptions *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CSMClusterWinOptions *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr CSMClusterWinOptionsBase::shallowCopy(void) const
{
    return shallowCopyLocal();
}




/*------------------------- constructors ----------------------------------*/

CSMClusterWinOptionsBase::CSMClusterWinOptionsBase(void) :
    Inherited(),
    _sfParent                 (NULL)
{
}

CSMClusterWinOptionsBase::CSMClusterWinOptionsBase(const CSMClusterWinOptionsBase &source) :
    Inherited(source),
    _sfParent                 (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

CSMClusterWinOptionsBase::~CSMClusterWinOptionsBase(void)
{
}
/*-------------------------------------------------------------------------*/
/* Parent linking                                                          */

bool CSMClusterWinOptionsBase::linkParent(
    FieldContainer * const pParent,
    UInt16           const childFieldId,
    UInt16           const parentFieldId )
{
    if(parentFieldId == ParentFieldId)
    {
        CSMClusterWindow * pTypedParent =
            dynamic_cast< CSMClusterWindow * >(pParent);

        if(pTypedParent != NULL)
        {
            FieldContainer *pOldParent =
                _sfParent.getValue         ();

            UInt16 oldChildFieldId =
                _sfParent.getParentFieldPos();

            if(pOldParent != NULL)
            {
                pOldParent->unlinkChild(this, oldChildFieldId);
            }

            editSField(ParentFieldMask);

            _sfParent.setValue(static_cast<CSMClusterWindow *>(pParent), childFieldId);

            return true;
        }

        return false;
    }

    return Inherited::linkParent(pParent, childFieldId, parentFieldId);
}

bool CSMClusterWinOptionsBase::unlinkParent(
    FieldContainer * const pParent,
    UInt16           const parentFieldId)
{
    if(parentFieldId == ParentFieldId)
    {
        CSMClusterWindow * pTypedParent =
            dynamic_cast< CSMClusterWindow * >(pParent);

        if(pTypedParent != NULL)
        {
            if(_sfParent.getValue() == pTypedParent)
            {
                editSField(ParentFieldMask);

                _sfParent.setValue(NULL, 0xFFFF);

                return true;
            }

            SWARNING << "Child (["          << this
                     << "] id ["            << this->getId()
                     << "] type ["          << this->getType().getCName()
                     << "] parentFieldId [" << parentFieldId
                     << "]) - Parent (["    << pParent
                     << "] id ["            << pParent->getId()
                     << "] type ["          << pParent->getType().getCName()
                     << "]): link inconsistent!"
                     << std::endl;

            return false;
        }

        return false;
    }

    return Inherited::unlinkParent(pParent, parentFieldId);
}



GetFieldHandlePtr CSMClusterWinOptionsBase::getHandleParent          (void) const
{
    SFParentCSMClusterWindowPtr::GetHandlePtr returnValue;

    return returnValue;
}

EditFieldHandlePtr CSMClusterWinOptionsBase::editHandleParent         (void)
{
    EditFieldHandlePtr returnValue;

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void CSMClusterWinOptionsBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    CSMClusterWinOptions *pThis = static_cast<CSMClusterWinOptions *>(this);

    pThis->execSync(static_cast<CSMClusterWinOptions *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *CSMClusterWinOptionsBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    CSMClusterWinOptions *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const CSMClusterWinOptions *>(pRefAspect),
                  dynamic_cast<const CSMClusterWinOptions *>(this));

    return returnValue;
}
#endif

void CSMClusterWinOptionsBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
