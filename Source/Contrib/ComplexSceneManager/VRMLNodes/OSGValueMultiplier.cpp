/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
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

#include "OSGValueMultiplier.h"

OSG_BEGIN_NAMESPACE

#define OSGSVALUEMULTIPLIER_IMPL(DESC)                                  \
                                                                        \
template<>                                                              \
void SValueMultiplier<DESC>::classDescInserter(TypeObject &oType)       \
{                                                                       \
    FieldDescriptionBase *pDesc = NULL;                                 \
                                                                        \
                                                                        \
    pDesc = new SFValueType::Description(                               \
        SFValueType::getClassType(),                                    \
        "value",                                                        \
        "",                                                             \
        ValueFieldId, ValueFieldMask,                                   \
        true,                                                           \
        (Field::FThreadLocal),                                          \
        static_cast<FieldEditMethodSig>(&Self::editHandleValue),        \
        static_cast<FieldGetMethodSig >(&Self::getHandleValue));        \
                                                                        \
    oType.addInitialDesc(pDesc);                                        \
                                                                        \
    pDesc = new SFValueType::Description(                               \
        SFValueType::getClassType(),                                    \
        "lhs",                                                          \
        "",                                                             \
        LhsFieldId, LhsFieldMask,                                       \
        true,                                                           \
        (Field::FThreadLocal),                                          \
        static_cast<FieldEditMethodSig>(&Self::editHandleLhs),          \
        static_cast<FieldGetMethodSig >(&Self::getHandleLhs));          \
                                                                        \
    oType.addInitialDesc(pDesc);                                        \
                                                                        \
    pDesc = new SFValueType::Description(                               \
        SFValueType::getClassType(),                                    \
        "rhs",                                                          \
        "",                                                             \
        RhsFieldId, RhsFieldMask,                                       \
        true,                                                           \
        (Field::FThreadLocal),                                          \
        static_cast<FieldEditMethodSig>(&Self::editHandleRhs),          \
        static_cast<FieldGetMethodSig >(&Self::getHandleRhs));          \
                                                                        \
    oType.addInitialDesc(pDesc);                                        \
                                                                        \
}                                                                       \
                                                                        \
                                                                        \
template<>                                                              \
SValueMultiplier<DESC>::TypeObject                                      \
    SValueMultiplier<DESC>::_type(                                      \
        Self::getClassname(),                                           \
        Inherited::getClassname(),                                      \
        "NULL",                                                         \
        0,                                                              \
        reinterpret_cast<PrototypeCreateF>(&Self::createEmptyLocal),    \
        Self::initMethod,                                               \
        Self::exitMethod,                                               \
        reinterpret_cast<InitalInsertDescFunc>(                         \
            reinterpret_cast<void *>(&Self::classDescInserter)),        \
        false,                                                          \
        (Self::ValueFieldMask         |                                 \
         Self::LhsFieldMask           |                                 \
         Self::RhsFieldMask           ),                                \
        "",                                                             \
        ""                                                              \
                            );                                          \
                                                                        \
                                                                        \
template<>                                                              \
FieldContainerType &SValueMultiplier<DESC>::getClassType(void)          \
{                                                                       \
    return _type;                                                       \
}                                                                       \
                                                                        \
template<>                                                              \
UInt32 SValueMultiplier<DESC>::getClassTypeId(void)                     \
{                                                                       \
    return _type.getId();                                               \
}                                                                       \
                                                                        \
template<>                                                              \
UInt16 SValueMultiplier<DESC>::getClassGroupId(void)                    \
{                                                                       \
    return _type.getGroupId();                                          \
}                                                                       \
                                                                        \
template<>                                                              \
FieldContainerType &SValueMultiplier<DESC>::getType(void)               \
{                                                                       \
    return _type;                                                       \
}                                                                       \
                                                                        \
                                                                        \
template<>                                                              \
const FieldContainerType &SValueMultiplier<DESC>::getType(void) const   \
{                                                                       \
    return _type;                                                       \
}

//OSGSVALUEEMITTER_IMPL(Int32EmitterDesc )
OSGSVALUEMULTIPLIER_IMPL(Real32MultiplierDesc)
OSGSVALUEMULTIPLIER_IMPL(MatrixMultiplierDesc)

OSG_END_NAMESPACE
