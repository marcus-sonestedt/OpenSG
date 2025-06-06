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
 **     class AnimTimeSensor!
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




#include "OSGAnimTimeSensorBase.h"
#include "OSGAnimTimeSensor.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::AnimTimeSensor
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var bool            AnimTimeSensorBase::_sfEnabled
    
*/

/*! \var bool            AnimTimeSensorBase::_sfIsActive
    
*/

/*! \var bool            AnimTimeSensorBase::_sfLoop
    
*/

/*! \var bool            AnimTimeSensorBase::_sfForward
    
*/

/*! \var Time            AnimTimeSensorBase::_sfStartTime
    
*/

/*! \var Time            AnimTimeSensorBase::_sfStopTime
    
*/

/*! \var Time            AnimTimeSensorBase::_sfTime
    
*/

/*! \var Time            AnimTimeSensorBase::_sfCycleLength
    
*/

/*! \var Real32          AnimTimeSensorBase::_sfTimeScale
    
*/

/*! \var Real32          AnimTimeSensorBase::_sfFraction
    
*/

/*! \var Real32          AnimTimeSensorBase::_sfAnimTime
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<AnimTimeSensor *, nsOSG>::_type(
    "AnimTimeSensorPtr", 
    "NodeCorePtr", 
    AnimTimeSensor::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(AnimTimeSensor *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           AnimTimeSensor *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           AnimTimeSensor *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void AnimTimeSensorBase::classDescInserter(TypeObject &oType)
{
    Inherited::classDescInserter(oType);

    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "enabled",
        "",
        EnabledFieldId, EnabledFieldMask,
        true,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&AnimTimeSensor::editHandleEnabled),
        static_cast<FieldGetMethodSig >(&AnimTimeSensor::getHandleEnabled));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "isActive",
        "",
        IsActiveFieldId, IsActiveFieldMask,
        true,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&AnimTimeSensor::editHandleIsActive),
        static_cast<FieldGetMethodSig >(&AnimTimeSensor::getHandleIsActive));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "loop",
        "",
        LoopFieldId, LoopFieldMask,
        true,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&AnimTimeSensor::editHandleLoop),
        static_cast<FieldGetMethodSig >(&AnimTimeSensor::getHandleLoop));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "forward",
        "",
        ForwardFieldId, ForwardFieldMask,
        true,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&AnimTimeSensor::editHandleForward),
        static_cast<FieldGetMethodSig >(&AnimTimeSensor::getHandleForward));

    oType.addInitialDesc(pDesc);

    pDesc = new SFTime::Description(
        SFTime::getClassType(),
        "startTime",
        "",
        StartTimeFieldId, StartTimeFieldMask,
        true,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&AnimTimeSensor::editHandleStartTime),
        static_cast<FieldGetMethodSig >(&AnimTimeSensor::getHandleStartTime));

    oType.addInitialDesc(pDesc);

    pDesc = new SFTime::Description(
        SFTime::getClassType(),
        "stopTime",
        "",
        StopTimeFieldId, StopTimeFieldMask,
        true,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&AnimTimeSensor::editHandleStopTime),
        static_cast<FieldGetMethodSig >(&AnimTimeSensor::getHandleStopTime));

    oType.addInitialDesc(pDesc);

    pDesc = new SFTime::Description(
        SFTime::getClassType(),
        "time",
        "",
        TimeFieldId, TimeFieldMask,
        true,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&AnimTimeSensor::editHandleTime),
        static_cast<FieldGetMethodSig >(&AnimTimeSensor::getHandleTime));

    oType.addInitialDesc(pDesc);

    pDesc = new SFTime::Description(
        SFTime::getClassType(),
        "cycleLength",
        "",
        CycleLengthFieldId, CycleLengthFieldMask,
        true,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&AnimTimeSensor::editHandleCycleLength),
        static_cast<FieldGetMethodSig >(&AnimTimeSensor::getHandleCycleLength));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "timeScale",
        "",
        TimeScaleFieldId, TimeScaleFieldMask,
        true,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&AnimTimeSensor::editHandleTimeScale),
        static_cast<FieldGetMethodSig >(&AnimTimeSensor::getHandleTimeScale));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "fraction",
        "",
        FractionFieldId, FractionFieldMask,
        true,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&AnimTimeSensor::editHandleFraction),
        static_cast<FieldGetMethodSig >(&AnimTimeSensor::getHandleFraction));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "animTime",
        "",
        AnimTimeFieldId, AnimTimeFieldMask,
        true,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&AnimTimeSensor::editHandleAnimTime),
        static_cast<FieldGetMethodSig >(&AnimTimeSensor::getHandleAnimTime));

    oType.addInitialDesc(pDesc);
}


AnimTimeSensorBase::TypeObject AnimTimeSensorBase::_type(
    AnimTimeSensorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&AnimTimeSensorBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&AnimTimeSensor::initMethod),
    reinterpret_cast<ExitContainerF>(&AnimTimeSensor::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(
        reinterpret_cast<void *>(&AnimTimeSensor::classDescInserter)),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"AnimTimeSensor\"\n"
    "    parent=\"NodeCore\"\n"
    "    mixinparent=\"NodeCoreSensorParent\"\n"
    "    library=\"Dynamics\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"true\"\n"
    "    isBundle=\"false\"\n"
    "    parentFields=\"none\"\n"
    ">\n"
    "  <Field\n"
    "     name=\"enabled\"\n"
    "     type=\"bool\"\n"
    "     category=\"data\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"internal\"\n"
    "     access=\"public\"\n"
    "     defaultValue=\"true\"\n"
    "     fieldFlags=\"FClusterLocal\"\n"
    "     >\n"
    "  </Field>\n"
    "  <Field\n"
    "     name=\"isActive\"\n"
    "     type=\"bool\"\n"
    "     category=\"data\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"internal\"\n"
    "     access=\"public\"\n"
    "     defaultValue=\"false\"\n"
    "     fieldFlags=\"FClusterLocal\"\n"
    "     >\n"
    "  </Field>\n"
    "  <Field\n"
    "     name=\"loop\"\n"
    "     type=\"bool\"\n"
    "     category=\"data\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"internal\"\n"
    "     access=\"public\"\n"
    "     defaultValue=\"false\"\n"
    "     fieldFlags=\"FClusterLocal\"\n"
    "     >\n"
    "  </Field>\n"
    "  <Field\n"
    "     name=\"forward\"\n"
    "     type=\"bool\"\n"
    "     category=\"data\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"internal\"\n"
    "     access=\"public\"\n"
    "     defaultValue=\"true\"\n"
    "     fieldFlags=\"FClusterLocal\"\n"
    "     >\n"
    "  </Field>\n"
    "\n"
    "  <Field\n"
    "     name=\"startTime\"\n"
    "     type=\"Time\"\n"
    "     category=\"data\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"internal\"\n"
    "     access=\"public\"\n"
    "     defaultValue=\"0.0\"\n"
    "     fieldFlags=\"FClusterLocal\"\n"
    "     >\n"
    "  </Field>\n"
    "  <Field\n"
    "     name=\"stopTime\"\n"
    "     type=\"Time\"\n"
    "     category=\"data\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"internal\"\n"
    "     access=\"public\"\n"
    "     defaultValue=\"0.0\"\n"
    "     fieldFlags=\"FClusterLocal\"\n"
    "     >\n"
    "  </Field>\n"
    "  <Field\n"
    "     name=\"time\"\n"
    "     type=\"Time\"\n"
    "     category=\"data\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"internal\"\n"
    "     access=\"public\"\n"
    "     defaultValue=\"-1.0\"\n"
    "     fieldFlags=\"FClusterLocal\"\n"
    "     >\n"
    "  </Field>\n"
    "  <Field\n"
    "     name=\"cycleLength\"\n"
    "     type=\"Time\"\n"
    "     category=\"data\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"internal\"\n"
    "     access=\"public\"\n"
    "     defaultValue=\"0.0\"\n"
    "     fieldFlags=\"FClusterLocal\"\n"
    "     >\n"
    "  </Field>\n"
    "\n"
    "  <Field\n"
    "     name=\"timeScale\"\n"
    "     type=\"Real32\"\n"
    "     category=\"data\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"internal\"\n"
    "     access=\"public\"\n"
    "     defaultValue=\"1.f\"\n"
    "     fieldFlags=\"FClusterLocal\"\n"
    "     >\n"
    "  </Field>\n"
    "  <Field\n"
    "     name=\"fraction\"\n"
    "     type=\"Real32\"\n"
    "     category=\"data\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"internal\"\n"
    "     access=\"public\"\n"
    "     defaultValue=\"0.f\"\n"
    "     fieldFlags=\"FClusterLocal\"\n"
    "     >\n"
    "  </Field>\n"
    "  <Field\n"
    "     name=\"animTime\"\n"
    "     type=\"Real32\"\n"
    "     category=\"data\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"internal\"\n"
    "     access=\"public\"\n"
    "     defaultValue=\"0.f\"\n"
    "     fieldFlags=\"FClusterLocal\"\n"
    "     >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &AnimTimeSensorBase::getType(void)
{
    return _type;
}

const FieldContainerType &AnimTimeSensorBase::getType(void) const
{
    return _type;
}

UInt32 AnimTimeSensorBase::getContainerSize(void) const
{
    return sizeof(AnimTimeSensor);
}

/*------------------------- decorator get ------------------------------*/


SFBool *AnimTimeSensorBase::editSFEnabled(void)
{
    editSField(EnabledFieldMask);

    return &_sfEnabled;
}

const SFBool *AnimTimeSensorBase::getSFEnabled(void) const
{
    return &_sfEnabled;
}


SFBool *AnimTimeSensorBase::editSFIsActive(void)
{
    editSField(IsActiveFieldMask);

    return &_sfIsActive;
}

const SFBool *AnimTimeSensorBase::getSFIsActive(void) const
{
    return &_sfIsActive;
}


SFBool *AnimTimeSensorBase::editSFLoop(void)
{
    editSField(LoopFieldMask);

    return &_sfLoop;
}

const SFBool *AnimTimeSensorBase::getSFLoop(void) const
{
    return &_sfLoop;
}


SFBool *AnimTimeSensorBase::editSFForward(void)
{
    editSField(ForwardFieldMask);

    return &_sfForward;
}

const SFBool *AnimTimeSensorBase::getSFForward(void) const
{
    return &_sfForward;
}


SFTime *AnimTimeSensorBase::editSFStartTime(void)
{
    editSField(StartTimeFieldMask);

    return &_sfStartTime;
}

const SFTime *AnimTimeSensorBase::getSFStartTime(void) const
{
    return &_sfStartTime;
}


SFTime *AnimTimeSensorBase::editSFStopTime(void)
{
    editSField(StopTimeFieldMask);

    return &_sfStopTime;
}

const SFTime *AnimTimeSensorBase::getSFStopTime(void) const
{
    return &_sfStopTime;
}


SFTime *AnimTimeSensorBase::editSFTime(void)
{
    editSField(TimeFieldMask);

    return &_sfTime;
}

const SFTime *AnimTimeSensorBase::getSFTime(void) const
{
    return &_sfTime;
}


SFTime *AnimTimeSensorBase::editSFCycleLength(void)
{
    editSField(CycleLengthFieldMask);

    return &_sfCycleLength;
}

const SFTime *AnimTimeSensorBase::getSFCycleLength(void) const
{
    return &_sfCycleLength;
}


SFReal32 *AnimTimeSensorBase::editSFTimeScale(void)
{
    editSField(TimeScaleFieldMask);

    return &_sfTimeScale;
}

const SFReal32 *AnimTimeSensorBase::getSFTimeScale(void) const
{
    return &_sfTimeScale;
}


SFReal32 *AnimTimeSensorBase::editSFFraction(void)
{
    editSField(FractionFieldMask);

    return &_sfFraction;
}

const SFReal32 *AnimTimeSensorBase::getSFFraction(void) const
{
    return &_sfFraction;
}


SFReal32 *AnimTimeSensorBase::editSFAnimTime(void)
{
    editSField(AnimTimeFieldMask);

    return &_sfAnimTime;
}

const SFReal32 *AnimTimeSensorBase::getSFAnimTime(void) const
{
    return &_sfAnimTime;
}






/*------------------------------ access -----------------------------------*/

SizeT AnimTimeSensorBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (EnabledFieldMask & whichField))
    {
        returnValue += _sfEnabled.getBinSize();
    }
    if(FieldBits::NoField != (IsActiveFieldMask & whichField))
    {
        returnValue += _sfIsActive.getBinSize();
    }
    if(FieldBits::NoField != (LoopFieldMask & whichField))
    {
        returnValue += _sfLoop.getBinSize();
    }
    if(FieldBits::NoField != (ForwardFieldMask & whichField))
    {
        returnValue += _sfForward.getBinSize();
    }
    if(FieldBits::NoField != (StartTimeFieldMask & whichField))
    {
        returnValue += _sfStartTime.getBinSize();
    }
    if(FieldBits::NoField != (StopTimeFieldMask & whichField))
    {
        returnValue += _sfStopTime.getBinSize();
    }
    if(FieldBits::NoField != (TimeFieldMask & whichField))
    {
        returnValue += _sfTime.getBinSize();
    }
    if(FieldBits::NoField != (CycleLengthFieldMask & whichField))
    {
        returnValue += _sfCycleLength.getBinSize();
    }
    if(FieldBits::NoField != (TimeScaleFieldMask & whichField))
    {
        returnValue += _sfTimeScale.getBinSize();
    }
    if(FieldBits::NoField != (FractionFieldMask & whichField))
    {
        returnValue += _sfFraction.getBinSize();
    }
    if(FieldBits::NoField != (AnimTimeFieldMask & whichField))
    {
        returnValue += _sfAnimTime.getBinSize();
    }

    return returnValue;
}

void AnimTimeSensorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (EnabledFieldMask & whichField))
    {
        _sfEnabled.copyToBin(pMem);
    }
    if(FieldBits::NoField != (IsActiveFieldMask & whichField))
    {
        _sfIsActive.copyToBin(pMem);
    }
    if(FieldBits::NoField != (LoopFieldMask & whichField))
    {
        _sfLoop.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ForwardFieldMask & whichField))
    {
        _sfForward.copyToBin(pMem);
    }
    if(FieldBits::NoField != (StartTimeFieldMask & whichField))
    {
        _sfStartTime.copyToBin(pMem);
    }
    if(FieldBits::NoField != (StopTimeFieldMask & whichField))
    {
        _sfStopTime.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TimeFieldMask & whichField))
    {
        _sfTime.copyToBin(pMem);
    }
    if(FieldBits::NoField != (CycleLengthFieldMask & whichField))
    {
        _sfCycleLength.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TimeScaleFieldMask & whichField))
    {
        _sfTimeScale.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FractionFieldMask & whichField))
    {
        _sfFraction.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AnimTimeFieldMask & whichField))
    {
        _sfAnimTime.copyToBin(pMem);
    }
}

void AnimTimeSensorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (EnabledFieldMask & whichField))
    {
        editSField(EnabledFieldMask);
        _sfEnabled.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (IsActiveFieldMask & whichField))
    {
        editSField(IsActiveFieldMask);
        _sfIsActive.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (LoopFieldMask & whichField))
    {
        editSField(LoopFieldMask);
        _sfLoop.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ForwardFieldMask & whichField))
    {
        editSField(ForwardFieldMask);
        _sfForward.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (StartTimeFieldMask & whichField))
    {
        editSField(StartTimeFieldMask);
        _sfStartTime.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (StopTimeFieldMask & whichField))
    {
        editSField(StopTimeFieldMask);
        _sfStopTime.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TimeFieldMask & whichField))
    {
        editSField(TimeFieldMask);
        _sfTime.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (CycleLengthFieldMask & whichField))
    {
        editSField(CycleLengthFieldMask);
        _sfCycleLength.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TimeScaleFieldMask & whichField))
    {
        editSField(TimeScaleFieldMask);
        _sfTimeScale.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FractionFieldMask & whichField))
    {
        editSField(FractionFieldMask);
        _sfFraction.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AnimTimeFieldMask & whichField))
    {
        editSField(AnimTimeFieldMask);
        _sfAnimTime.copyFromBin(pMem);
    }
}

//! create a new instance of the class
AnimTimeSensorTransitPtr AnimTimeSensorBase::createLocal(BitVector bFlags)
{
    AnimTimeSensorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<AnimTimeSensor>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
AnimTimeSensorTransitPtr AnimTimeSensorBase::createDependent(BitVector bFlags)
{
    AnimTimeSensorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<AnimTimeSensor>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
AnimTimeSensorTransitPtr AnimTimeSensorBase::create(void)
{
    AnimTimeSensorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<AnimTimeSensor>(tmpPtr);
    }

    return fc;
}

AnimTimeSensor *AnimTimeSensorBase::createEmptyLocal(BitVector bFlags)
{
    AnimTimeSensor *returnValue;

    newPtr<AnimTimeSensor>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
AnimTimeSensor *AnimTimeSensorBase::createEmpty(void)
{
    AnimTimeSensor *returnValue;

    newPtr<AnimTimeSensor>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr AnimTimeSensorBase::shallowCopyLocal(
    BitVector bFlags) const
{
    AnimTimeSensor *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const AnimTimeSensor *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr AnimTimeSensorBase::shallowCopyDependent(
    BitVector bFlags) const
{
    AnimTimeSensor *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const AnimTimeSensor *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr AnimTimeSensorBase::shallowCopy(void) const
{
    AnimTimeSensor *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const AnimTimeSensor *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

AnimTimeSensorBase::AnimTimeSensorBase(void) :
    Inherited(),
    _sfEnabled                (bool(true)),
    _sfIsActive               (bool(false)),
    _sfLoop                   (bool(false)),
    _sfForward                (bool(true)),
    _sfStartTime              (Time(0.0)),
    _sfStopTime               (Time(0.0)),
    _sfTime                   (Time(-1.0)),
    _sfCycleLength            (Time(0.0)),
    _sfTimeScale              (Real32(1.f)),
    _sfFraction               (Real32(0.f)),
    _sfAnimTime               (Real32(0.f))
{
}

AnimTimeSensorBase::AnimTimeSensorBase(const AnimTimeSensorBase &source) :
    Inherited(source),
    _sfEnabled                (source._sfEnabled                ),
    _sfIsActive               (source._sfIsActive               ),
    _sfLoop                   (source._sfLoop                   ),
    _sfForward                (source._sfForward                ),
    _sfStartTime              (source._sfStartTime              ),
    _sfStopTime               (source._sfStopTime               ),
    _sfTime                   (source._sfTime                   ),
    _sfCycleLength            (source._sfCycleLength            ),
    _sfTimeScale              (source._sfTimeScale              ),
    _sfFraction               (source._sfFraction               ),
    _sfAnimTime               (source._sfAnimTime               )
{
}


/*-------------------------- destructors ----------------------------------*/

AnimTimeSensorBase::~AnimTimeSensorBase(void)
{
}


GetFieldHandlePtr AnimTimeSensorBase::getHandleEnabled         (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfEnabled,
             this->getType().getFieldDesc(EnabledFieldId),
             const_cast<AnimTimeSensorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr AnimTimeSensorBase::editHandleEnabled        (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfEnabled,
             this->getType().getFieldDesc(EnabledFieldId),
             this));


    editSField(EnabledFieldMask);

    return returnValue;
}

GetFieldHandlePtr AnimTimeSensorBase::getHandleIsActive        (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfIsActive,
             this->getType().getFieldDesc(IsActiveFieldId),
             const_cast<AnimTimeSensorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr AnimTimeSensorBase::editHandleIsActive       (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfIsActive,
             this->getType().getFieldDesc(IsActiveFieldId),
             this));


    editSField(IsActiveFieldMask);

    return returnValue;
}

GetFieldHandlePtr AnimTimeSensorBase::getHandleLoop            (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfLoop,
             this->getType().getFieldDesc(LoopFieldId),
             const_cast<AnimTimeSensorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr AnimTimeSensorBase::editHandleLoop           (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfLoop,
             this->getType().getFieldDesc(LoopFieldId),
             this));


    editSField(LoopFieldMask);

    return returnValue;
}

GetFieldHandlePtr AnimTimeSensorBase::getHandleForward         (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfForward,
             this->getType().getFieldDesc(ForwardFieldId),
             const_cast<AnimTimeSensorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr AnimTimeSensorBase::editHandleForward        (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfForward,
             this->getType().getFieldDesc(ForwardFieldId),
             this));


    editSField(ForwardFieldMask);

    return returnValue;
}

GetFieldHandlePtr AnimTimeSensorBase::getHandleStartTime       (void) const
{
    SFTime::GetHandlePtr returnValue(
        new  SFTime::GetHandle(
             &_sfStartTime,
             this->getType().getFieldDesc(StartTimeFieldId),
             const_cast<AnimTimeSensorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr AnimTimeSensorBase::editHandleStartTime      (void)
{
    SFTime::EditHandlePtr returnValue(
        new  SFTime::EditHandle(
             &_sfStartTime,
             this->getType().getFieldDesc(StartTimeFieldId),
             this));


    editSField(StartTimeFieldMask);

    return returnValue;
}

GetFieldHandlePtr AnimTimeSensorBase::getHandleStopTime        (void) const
{
    SFTime::GetHandlePtr returnValue(
        new  SFTime::GetHandle(
             &_sfStopTime,
             this->getType().getFieldDesc(StopTimeFieldId),
             const_cast<AnimTimeSensorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr AnimTimeSensorBase::editHandleStopTime       (void)
{
    SFTime::EditHandlePtr returnValue(
        new  SFTime::EditHandle(
             &_sfStopTime,
             this->getType().getFieldDesc(StopTimeFieldId),
             this));


    editSField(StopTimeFieldMask);

    return returnValue;
}

GetFieldHandlePtr AnimTimeSensorBase::getHandleTime            (void) const
{
    SFTime::GetHandlePtr returnValue(
        new  SFTime::GetHandle(
             &_sfTime,
             this->getType().getFieldDesc(TimeFieldId),
             const_cast<AnimTimeSensorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr AnimTimeSensorBase::editHandleTime           (void)
{
    SFTime::EditHandlePtr returnValue(
        new  SFTime::EditHandle(
             &_sfTime,
             this->getType().getFieldDesc(TimeFieldId),
             this));


    editSField(TimeFieldMask);

    return returnValue;
}

GetFieldHandlePtr AnimTimeSensorBase::getHandleCycleLength     (void) const
{
    SFTime::GetHandlePtr returnValue(
        new  SFTime::GetHandle(
             &_sfCycleLength,
             this->getType().getFieldDesc(CycleLengthFieldId),
             const_cast<AnimTimeSensorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr AnimTimeSensorBase::editHandleCycleLength    (void)
{
    SFTime::EditHandlePtr returnValue(
        new  SFTime::EditHandle(
             &_sfCycleLength,
             this->getType().getFieldDesc(CycleLengthFieldId),
             this));


    editSField(CycleLengthFieldMask);

    return returnValue;
}

GetFieldHandlePtr AnimTimeSensorBase::getHandleTimeScale       (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfTimeScale,
             this->getType().getFieldDesc(TimeScaleFieldId),
             const_cast<AnimTimeSensorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr AnimTimeSensorBase::editHandleTimeScale      (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfTimeScale,
             this->getType().getFieldDesc(TimeScaleFieldId),
             this));


    editSField(TimeScaleFieldMask);

    return returnValue;
}

GetFieldHandlePtr AnimTimeSensorBase::getHandleFraction        (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfFraction,
             this->getType().getFieldDesc(FractionFieldId),
             const_cast<AnimTimeSensorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr AnimTimeSensorBase::editHandleFraction       (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfFraction,
             this->getType().getFieldDesc(FractionFieldId),
             this));


    editSField(FractionFieldMask);

    return returnValue;
}

GetFieldHandlePtr AnimTimeSensorBase::getHandleAnimTime        (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfAnimTime,
             this->getType().getFieldDesc(AnimTimeFieldId),
             const_cast<AnimTimeSensorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr AnimTimeSensorBase::editHandleAnimTime       (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfAnimTime,
             this->getType().getFieldDesc(AnimTimeFieldId),
             this));


    editSField(AnimTimeFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void AnimTimeSensorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    AnimTimeSensor *pThis = static_cast<AnimTimeSensor *>(this);

    pThis->execSync(static_cast<AnimTimeSensor *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *AnimTimeSensorBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    AnimTimeSensor *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const AnimTimeSensor *>(pRefAspect),
                  dynamic_cast<const AnimTimeSensor *>(this));

    return returnValue;
}
#endif

void AnimTimeSensorBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
