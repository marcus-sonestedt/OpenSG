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
 **     class MapHelper!
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



#include "OSGFieldContainer.h"          // Container Class

#include "OSGMapHelperBase.h"
#include "OSGMapHelper.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::MapHelper
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var std::string     MapHelperBase::_mfKeys
    
*/

/*! \var FieldContainer * MapHelperBase::_sfContainer
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<MapHelper *, nsOSG>::_type(
    "MapHelperPtr", 
    "FieldContainerPtr", 
    MapHelper::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(MapHelper *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           MapHelper *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           MapHelper *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void MapHelperBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFString::Description(
        MFString::getClassType(),
        "keys",
        "",
        KeysFieldId, KeysFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&MapHelper::editHandleKeys),
        static_cast<FieldGetMethodSig >(&MapHelper::getHandleKeys));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecFieldContainerPtr::Description(
        SFUnrecFieldContainerPtr::getClassType(),
        "container",
        "",
        ContainerFieldId, ContainerFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&MapHelper::editHandleContainer),
        static_cast<FieldGetMethodSig >(&MapHelper::getHandleContainer));

    oType.addInitialDesc(pDesc);
}


MapHelperBase::TypeObject MapHelperBase::_type(
    MapHelperBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&MapHelperBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&MapHelper::initMethod),
    reinterpret_cast<ExitContainerF>(&MapHelper::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(
        reinterpret_cast<void *>(&MapHelper::classDescInserter)),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"MapHelper\"\n"
    "   parent=\"FieldContainer\"\n"
    "   library=\"Base\"\n"
    "   structure=\"concrete\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   docGroupBase=\"GrpBaseFieldContainer\"\n"
    ">\n"
    "  <Field\n"
    "\t name=\"keys\"\n"
    "\t type=\"std::string\"\n"
    "\t cardinality=\"multi\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"container\"\n"
    "\t type=\"FieldContainerPtr\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "     access=\"public\"\n"
    "\t >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &MapHelperBase::getType(void)
{
    return _type;
}

const FieldContainerType &MapHelperBase::getType(void) const
{
    return _type;
}

UInt32 MapHelperBase::getContainerSize(void) const
{
    return sizeof(MapHelper);
}

/*------------------------- decorator get ------------------------------*/


MFString *MapHelperBase::editMFKeys(void)
{
    editMField(KeysFieldMask, _mfKeys);

    return &_mfKeys;
}

const MFString *MapHelperBase::getMFKeys(void) const
{
    return &_mfKeys;
}


//! Get the MapHelper::_sfContainer field.
const SFUnrecFieldContainerPtr *MapHelperBase::getSFContainer(void) const
{
    return &_sfContainer;
}

SFUnrecFieldContainerPtr *MapHelperBase::editSFContainer      (void)
{
    editSField(ContainerFieldMask);

    return &_sfContainer;
}

//! Get the value of the MapHelper::_sfContainer field.
FieldContainer * MapHelperBase::getContainer(void) const
{
    return _sfContainer.getValue();
}

//! Set the value of the MapHelper::_sfContainer field.
void MapHelperBase::setContainer(FieldContainer * const value)
{
    editSField(ContainerFieldMask);

    _sfContainer.setValue(value);
}






/*------------------------------ access -----------------------------------*/

SizeT MapHelperBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (KeysFieldMask & whichField))
    {
        returnValue += _mfKeys.getBinSize();
    }
    if(FieldBits::NoField != (ContainerFieldMask & whichField))
    {
        returnValue += _sfContainer.getBinSize();
    }

    return returnValue;
}

void MapHelperBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (KeysFieldMask & whichField))
    {
        _mfKeys.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ContainerFieldMask & whichField))
    {
        _sfContainer.copyToBin(pMem);
    }
}

void MapHelperBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (KeysFieldMask & whichField))
    {
        editMField(KeysFieldMask, _mfKeys);
        _mfKeys.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ContainerFieldMask & whichField))
    {
        editSField(ContainerFieldMask);
        _sfContainer.copyFromBin(pMem);
    }
}

//! create a new instance of the class
MapHelperTransitPtr MapHelperBase::createLocal(BitVector bFlags)
{
    MapHelperTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<MapHelper>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
MapHelperTransitPtr MapHelperBase::createDependent(BitVector bFlags)
{
    MapHelperTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<MapHelper>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
MapHelperTransitPtr MapHelperBase::create(void)
{
    MapHelperTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<MapHelper>(tmpPtr);
    }

    return fc;
}

MapHelper *MapHelperBase::createEmptyLocal(BitVector bFlags)
{
    MapHelper *returnValue;

    newPtr<MapHelper>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
MapHelper *MapHelperBase::createEmpty(void)
{
    MapHelper *returnValue;

    newPtr<MapHelper>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr MapHelperBase::shallowCopyLocal(
    BitVector bFlags) const
{
    MapHelper *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const MapHelper *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr MapHelperBase::shallowCopyDependent(
    BitVector bFlags) const
{
    MapHelper *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const MapHelper *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr MapHelperBase::shallowCopy(void) const
{
    MapHelper *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const MapHelper *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

MapHelperBase::MapHelperBase(void) :
    Inherited(),
    _mfKeys                   (),
    _sfContainer              (NULL)
{
}

MapHelperBase::MapHelperBase(const MapHelperBase &source) :
    Inherited(source),
    _mfKeys                   (source._mfKeys                   ),
    _sfContainer              (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

MapHelperBase::~MapHelperBase(void)
{
}

void MapHelperBase::onCreate(const MapHelper *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        MapHelper *pThis = static_cast<MapHelper *>(this);

        pThis->setContainer(source->getContainer());
    }
}

GetFieldHandlePtr MapHelperBase::getHandleKeys            (void) const
{
    MFString::GetHandlePtr returnValue(
        new  MFString::GetHandle(
             &_mfKeys,
             this->getType().getFieldDesc(KeysFieldId),
             const_cast<MapHelperBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr MapHelperBase::editHandleKeys           (void)
{
    MFString::EditHandlePtr returnValue(
        new  MFString::EditHandle(
             &_mfKeys,
             this->getType().getFieldDesc(KeysFieldId),
             this));


    editMField(KeysFieldMask, _mfKeys);

    return returnValue;
}

GetFieldHandlePtr MapHelperBase::getHandleContainer       (void) const
{
    SFUnrecFieldContainerPtr::GetHandlePtr returnValue(
        new  SFUnrecFieldContainerPtr::GetHandle(
             &_sfContainer,
             this->getType().getFieldDesc(ContainerFieldId),
             const_cast<MapHelperBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr MapHelperBase::editHandleContainer      (void)
{
    SFUnrecFieldContainerPtr::EditHandlePtr returnValue(
        new  SFUnrecFieldContainerPtr::EditHandle(
             &_sfContainer,
             this->getType().getFieldDesc(ContainerFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&MapHelper::setContainer,
                    static_cast<MapHelper *>(this), _1));

    editSField(ContainerFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void MapHelperBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    MapHelper *pThis = static_cast<MapHelper *>(this);

    pThis->execSync(static_cast<MapHelper *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *MapHelperBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    MapHelper *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const MapHelper *>(pRefAspect),
                  dynamic_cast<const MapHelper *>(this));

    return returnValue;
}
#endif

void MapHelperBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<MapHelper *>(this)->setContainer(NULL);

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfKeys.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE
