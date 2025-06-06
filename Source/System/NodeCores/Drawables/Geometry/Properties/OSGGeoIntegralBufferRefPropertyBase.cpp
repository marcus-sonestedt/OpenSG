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
 **     class GeoIntegralBufferRefProperty!
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




#include "OSGGeoIntegralBufferRefPropertyBase.h"
#include "OSGGeoIntegralBufferRefProperty.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::GeoIntegralBufferRefProperty
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<GeoIntegralBufferRefProperty *, nsOSG>::_type(
    "GeoIntegralBufferRefPropertyPtr", 
    "GeoIntegralBufferPropertyPtr", 
    GeoIntegralBufferRefProperty::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(GeoIntegralBufferRefProperty *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           GeoIntegralBufferRefProperty *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           GeoIntegralBufferRefProperty *,
                           nsOSG)

DataType &FieldTraits< GeoIntegralBufferRefProperty *, nsOSG + 1 >::getType(void)
{
    return FieldTraits<GeoIntegralBufferRefProperty *, nsOSG>::getType();
}


OSG_EXPORT_PTR_SFIELD(ChildPointerSField,
                      GeoIntegralBufferRefProperty *,
                      UnrecordedRefCountPolicy,
                      nsOSG + 1)


OSG_EXPORT_PTR_MFIELD(ChildPointerMField,
                      GeoIntegralBufferRefProperty *,
                      UnrecordedRefCountPolicy,
                      nsOSG + 1)


/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void GeoIntegralBufferRefPropertyBase::classDescInserter(TypeObject &oType)
{
}


GeoIntegralBufferRefPropertyBase::TypeObject GeoIntegralBufferRefPropertyBase::_type(
    GeoIntegralBufferRefPropertyBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&GeoIntegralBufferRefPropertyBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&GeoIntegralBufferRefProperty::initMethod),
    reinterpret_cast<ExitContainerF>(&GeoIntegralBufferRefProperty::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(
        reinterpret_cast<void *>(&GeoIntegralBufferRefProperty::classDescInserter)),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"GeoIntegralBufferRefProperty\"\n"
    "   parent=\"GeoIntegralBufferProperty\"\n"
    "   library=\"Drawable\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   childFields=\"both\"\n"
    "   docGroupBase=\"GrpDrawablesGeometry\"\n"
    "   >\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &GeoIntegralBufferRefPropertyBase::getType(void)
{
    return _type;
}

const FieldContainerType &GeoIntegralBufferRefPropertyBase::getType(void) const
{
    return _type;
}

UInt32 GeoIntegralBufferRefPropertyBase::getContainerSize(void) const
{
    return sizeof(GeoIntegralBufferRefProperty);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

SizeT GeoIntegralBufferRefPropertyBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void GeoIntegralBufferRefPropertyBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void GeoIntegralBufferRefPropertyBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
GeoIntegralBufferRefPropertyTransitPtr GeoIntegralBufferRefPropertyBase::createLocal(BitVector bFlags)
{
    GeoIntegralBufferRefPropertyTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<GeoIntegralBufferRefProperty>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
GeoIntegralBufferRefPropertyTransitPtr GeoIntegralBufferRefPropertyBase::createDependent(BitVector bFlags)
{
    GeoIntegralBufferRefPropertyTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<GeoIntegralBufferRefProperty>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
GeoIntegralBufferRefPropertyTransitPtr GeoIntegralBufferRefPropertyBase::create(void)
{
    GeoIntegralBufferRefPropertyTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<GeoIntegralBufferRefProperty>(tmpPtr);
    }

    return fc;
}

GeoIntegralBufferRefProperty *GeoIntegralBufferRefPropertyBase::createEmptyLocal(BitVector bFlags)
{
    GeoIntegralBufferRefProperty *returnValue;

    newPtr<GeoIntegralBufferRefProperty>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
GeoIntegralBufferRefProperty *GeoIntegralBufferRefPropertyBase::createEmpty(void)
{
    GeoIntegralBufferRefProperty *returnValue;

    newPtr<GeoIntegralBufferRefProperty>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr GeoIntegralBufferRefPropertyBase::shallowCopyLocal(
    BitVector bFlags) const
{
    GeoIntegralBufferRefProperty *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const GeoIntegralBufferRefProperty *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr GeoIntegralBufferRefPropertyBase::shallowCopyDependent(
    BitVector bFlags) const
{
    GeoIntegralBufferRefProperty *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const GeoIntegralBufferRefProperty *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr GeoIntegralBufferRefPropertyBase::shallowCopy(void) const
{
    GeoIntegralBufferRefProperty *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const GeoIntegralBufferRefProperty *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

GeoIntegralBufferRefPropertyBase::GeoIntegralBufferRefPropertyBase(void) :
    Inherited()
{
}

GeoIntegralBufferRefPropertyBase::GeoIntegralBufferRefPropertyBase(const GeoIntegralBufferRefPropertyBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

GeoIntegralBufferRefPropertyBase::~GeoIntegralBufferRefPropertyBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void GeoIntegralBufferRefPropertyBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    GeoIntegralBufferRefProperty *pThis = static_cast<GeoIntegralBufferRefProperty *>(this);

    pThis->execSync(static_cast<GeoIntegralBufferRefProperty *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *GeoIntegralBufferRefPropertyBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    GeoIntegralBufferRefProperty *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const GeoIntegralBufferRefProperty *>(pRefAspect),
                  dynamic_cast<const GeoIntegralBufferRefProperty *>(this));

    return returnValue;
}
#endif

void GeoIntegralBufferRefPropertyBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
