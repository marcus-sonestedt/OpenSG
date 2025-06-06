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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGMULTILIGHTCHUNKFIELDS_H_
#define _OSGMULTILIGHTCHUNKFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class MultiLightChunk;

OSG_GEN_CONTAINERPTR(MultiLightChunk);
/*! \ingroup GrpSystemStateFieldTraits
    \ingroup GrpLibOSGSystem
 */
template <>
struct FieldTraits<MultiLightChunk *, nsOSG> :
    public FieldTraitsFCPtrBase<MultiLightChunk *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<MultiLightChunk *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<MultiLightChunk *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecMultiLightChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<MultiLightChunk *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecMultiLightChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<MultiLightChunk *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakMultiLightChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<MultiLightChunk *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdMultiLightChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<MultiLightChunk *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecMultiLightChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<MultiLightChunk *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecMultiLightChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<MultiLightChunk *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakMultiLightChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<MultiLightChunk *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdMultiLightChunkPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<MultiLightChunk *,
                      RecordedRefCountPolicy, nsOSG  > SFRecMultiLightChunkPtr;
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<MultiLightChunk *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecMultiLightChunkPtr;
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<MultiLightChunk *,
                      WeakRefCountPolicy, nsOSG      > SFWeakMultiLightChunkPtr;
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<MultiLightChunk *,
                      NoRefCountPolicy, nsOSG        > SFUncountedMultiLightChunkPtr;


/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<MultiLightChunk *,
                      RecordedRefCountPolicy, nsOSG  > MFRecMultiLightChunkPtr;
/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<MultiLightChunk *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecMultiLightChunkPtr;
/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<MultiLightChunk *,
                      WeakRefCountPolicy, nsOSG      > MFWeakMultiLightChunkPtr;
/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<MultiLightChunk *,
                      NoRefCountPolicy, nsOSG        > MFUncountedMultiLightChunkPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFRecMultiLightChunkPtr : 
    public PointerSField<MultiLightChunk *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFUnrecMultiLightChunkPtr : 
    public PointerSField<MultiLightChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFWeakMultiLightChunkPtr :
    public PointerSField<MultiLightChunk *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFUncountedMultiLightChunkPtr :
    public PointerSField<MultiLightChunk *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFRecMultiLightChunkPtr :
    public PointerMField<MultiLightChunk *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFUnrecMultiLightChunkPtr :
    public PointerMField<MultiLightChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFWeakMultiLightChunkPtr :
    public PointerMField<MultiLightChunk *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFUncountedMultiLightChunkPtr :
    public PointerMField<MultiLightChunk *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGMULTILIGHTCHUNKFIELDS_H_ */
