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
 **     class TransformChunk!
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




#include "OSGTransformChunkBase.h"
#include "OSGTransformChunk.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TransformChunk
    See \ref PageSystemTransformChunk for a description.

    This chunk wraps glMultMatrix() for the GL_MODELVIEW matrix mode.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Matrix          TransformChunkBase::_sfMatrix
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<TransformChunk *, nsOSG>::_type(
    "TransformChunkPtr", 
    "StateChunkPtr", 
    TransformChunk::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(TransformChunk *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           TransformChunk *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           TransformChunk *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void TransformChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFMatrix::Description(
        SFMatrix::getClassType(),
        "matrix",
        "",
        MatrixFieldId, MatrixFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TransformChunk::editHandleMatrix),
        static_cast<FieldGetMethodSig >(&TransformChunk::getHandleMatrix));

    oType.addInitialDesc(pDesc);
}


TransformChunkBase::TypeObject TransformChunkBase::_type(
    TransformChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&TransformChunkBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&TransformChunk::initMethod),
    reinterpret_cast<ExitContainerF>(&TransformChunk::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(
        reinterpret_cast<void *>(&TransformChunk::classDescInserter)),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"TransformChunk\"\n"
    "   parent=\"StateChunk\"\n"
    "   library=\"State\"\n"
    "   structure=\"concrete\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   docGroupBase=\"GrpStateOpenGL\"\n"
    "   >\n"
    "  See \\ref PageSystemTransformChunk for a description.\n"
    "\n"
    "  This chunk wraps glMultMatrix() for the GL_MODELVIEW matrix mode.\n"
    "  <Field\n"
    "\t name=\"matrix\"\n"
    "\t type=\"Matrix\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    "See \\ref PageSystemTransformChunk for a description.\n"
    "\n"
    "This chunk wraps glMultMatrix() for the GL_MODELVIEW matrix mode.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &TransformChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &TransformChunkBase::getType(void) const
{
    return _type;
}

UInt32 TransformChunkBase::getContainerSize(void) const
{
    return sizeof(TransformChunk);
}

/*------------------------- decorator get ------------------------------*/


SFMatrix *TransformChunkBase::editSFMatrix(void)
{
    editSField(MatrixFieldMask);

    return &_sfMatrix;
}

const SFMatrix *TransformChunkBase::getSFMatrix(void) const
{
    return &_sfMatrix;
}






/*------------------------------ access -----------------------------------*/

SizeT TransformChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (MatrixFieldMask & whichField))
    {
        returnValue += _sfMatrix.getBinSize();
    }

    return returnValue;
}

void TransformChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (MatrixFieldMask & whichField))
    {
        _sfMatrix.copyToBin(pMem);
    }
}

void TransformChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (MatrixFieldMask & whichField))
    {
        editSField(MatrixFieldMask);
        _sfMatrix.copyFromBin(pMem);
    }
}

//! create a new instance of the class
TransformChunkTransitPtr TransformChunkBase::createLocal(BitVector bFlags)
{
    TransformChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<TransformChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
TransformChunkTransitPtr TransformChunkBase::createDependent(BitVector bFlags)
{
    TransformChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<TransformChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
TransformChunkTransitPtr TransformChunkBase::create(void)
{
    TransformChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<TransformChunk>(tmpPtr);
    }

    return fc;
}

TransformChunk *TransformChunkBase::createEmptyLocal(BitVector bFlags)
{
    TransformChunk *returnValue;

    newPtr<TransformChunk>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
TransformChunk *TransformChunkBase::createEmpty(void)
{
    TransformChunk *returnValue;

    newPtr<TransformChunk>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr TransformChunkBase::shallowCopyLocal(
    BitVector bFlags) const
{
    TransformChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TransformChunk *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr TransformChunkBase::shallowCopyDependent(
    BitVector bFlags) const
{
    TransformChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TransformChunk *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr TransformChunkBase::shallowCopy(void) const
{
    TransformChunk *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const TransformChunk *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

TransformChunkBase::TransformChunkBase(void) :
    Inherited(),
    _sfMatrix                 ()
{
}

TransformChunkBase::TransformChunkBase(const TransformChunkBase &source) :
    Inherited(source),
    _sfMatrix                 (source._sfMatrix                 )
{
}


/*-------------------------- destructors ----------------------------------*/

TransformChunkBase::~TransformChunkBase(void)
{
}


GetFieldHandlePtr TransformChunkBase::getHandleMatrix          (void) const
{
    SFMatrix::GetHandlePtr returnValue(
        new  SFMatrix::GetHandle(
             &_sfMatrix,
             this->getType().getFieldDesc(MatrixFieldId),
             const_cast<TransformChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TransformChunkBase::editHandleMatrix         (void)
{
    SFMatrix::EditHandlePtr returnValue(
        new  SFMatrix::EditHandle(
             &_sfMatrix,
             this->getType().getFieldDesc(MatrixFieldId),
             this));


    editSField(MatrixFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void TransformChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    TransformChunk *pThis = static_cast<TransformChunk *>(this);

    pThis->execSync(static_cast<TransformChunk *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *TransformChunkBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    TransformChunk *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const TransformChunk *>(pRefAspect),
                  dynamic_cast<const TransformChunk *>(this));

    return returnValue;
}
#endif

void TransformChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
