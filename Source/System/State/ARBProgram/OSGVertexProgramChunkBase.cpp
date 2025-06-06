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
 **     class VertexProgramChunk!
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




#include "OSGVertexProgramChunkBase.h"
#include "OSGVertexProgramChunk.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::VertexProgramChunk
    The ProgramChunk is the base class for generic ASCII-based programs inside
    OpenGL. For actual use see the derived VertexProgramChunk and
    FragmentProgramChunk.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<VertexProgramChunk *, nsOSG>::_type(
    "VertexProgramChunkPtr", 
    "ProgramChunkPtr", 
    VertexProgramChunk::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(VertexProgramChunk *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           VertexProgramChunk *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           VertexProgramChunk *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void VertexProgramChunkBase::classDescInserter(TypeObject &oType)
{
}


VertexProgramChunkBase::TypeObject VertexProgramChunkBase::_type(
    VertexProgramChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&VertexProgramChunkBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&VertexProgramChunk::initMethod),
    reinterpret_cast<ExitContainerF>(&VertexProgramChunk::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(
        reinterpret_cast<void *>(&VertexProgramChunk::classDescInserter)),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"VertexProgramChunk\"\n"
    "   parent=\"ProgramChunk\"\n"
    "   library=\"State\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   docGroupBase=\"GrpStateARBProgram\"\n"
    "   >\n"
    "  The ProgramChunk is the base class for generic ASCII-based programs inside\n"
    "  OpenGL. For actual use see the derived VertexProgramChunk and\n"
    "  FragmentProgramChunk.\n"
    "\n"
    "  See \\ref PageSystemVertexProgramChunk for a description. The\n"
    "  VertexProgramChunk implements Vertex Programs as specified in the\n"
    "  GL_ARB_vertex_program extension. It is just a special version of the\n"
    "  OSG::ProgramChunk, which contains the whole public interface.\n"
    "</FieldContainer>\n",
    "The ProgramChunk is the base class for generic ASCII-based programs inside\n"
    "OpenGL. For actual use see the derived VertexProgramChunk and\n"
    "FragmentProgramChunk.\n"
    "\n"
    "See \\ref PageSystemVertexProgramChunk for a description. The\n"
    "VertexProgramChunk implements Vertex Programs as specified in the\n"
    "GL_ARB_vertex_program extension. It is just a special version of the\n"
    "OSG::ProgramChunk, which contains the whole public interface.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &VertexProgramChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &VertexProgramChunkBase::getType(void) const
{
    return _type;
}

UInt32 VertexProgramChunkBase::getContainerSize(void) const
{
    return sizeof(VertexProgramChunk);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

SizeT VertexProgramChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void VertexProgramChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void VertexProgramChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
VertexProgramChunkTransitPtr VertexProgramChunkBase::createLocal(BitVector bFlags)
{
    VertexProgramChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<VertexProgramChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
VertexProgramChunkTransitPtr VertexProgramChunkBase::createDependent(BitVector bFlags)
{
    VertexProgramChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<VertexProgramChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
VertexProgramChunkTransitPtr VertexProgramChunkBase::create(void)
{
    VertexProgramChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<VertexProgramChunk>(tmpPtr);
    }

    return fc;
}

VertexProgramChunk *VertexProgramChunkBase::createEmptyLocal(BitVector bFlags)
{
    VertexProgramChunk *returnValue;

    newPtr<VertexProgramChunk>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
VertexProgramChunk *VertexProgramChunkBase::createEmpty(void)
{
    VertexProgramChunk *returnValue;

    newPtr<VertexProgramChunk>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr VertexProgramChunkBase::shallowCopyLocal(
    BitVector bFlags) const
{
    VertexProgramChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const VertexProgramChunk *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr VertexProgramChunkBase::shallowCopyDependent(
    BitVector bFlags) const
{
    VertexProgramChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const VertexProgramChunk *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr VertexProgramChunkBase::shallowCopy(void) const
{
    VertexProgramChunk *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const VertexProgramChunk *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

VertexProgramChunkBase::VertexProgramChunkBase(void) :
    Inherited()
{
}

VertexProgramChunkBase::VertexProgramChunkBase(const VertexProgramChunkBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

VertexProgramChunkBase::~VertexProgramChunkBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void VertexProgramChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    VertexProgramChunk *pThis = static_cast<VertexProgramChunk *>(this);

    pThis->execSync(static_cast<VertexProgramChunk *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *VertexProgramChunkBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    VertexProgramChunk *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const VertexProgramChunk *>(pRefAspect),
                  dynamic_cast<const VertexProgramChunk *>(this));

    return returnValue;
}
#endif

void VertexProgramChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
