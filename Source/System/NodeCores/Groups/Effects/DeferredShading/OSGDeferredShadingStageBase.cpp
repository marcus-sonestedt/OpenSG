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
 **     class DeferredShadingStage!
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



#include "OSGShaderProgramChunk.h"      // GBufferProgram Class
#include "OSGLight.h"                   // Lights Class

#include "OSGDeferredShadingStageBase.h"
#include "OSGDeferredShadingStage.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::DeferredShadingStage
    A stage to implement a deferred shading system. It renders the tree below it
    to (multiple) render targets (pass0). These are then used as input for a
    second pass that renders a full screen quad (pass1).
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var GLenum          DeferredShadingStageBase::_mfPixelFormats
    Pixel formats for each of the (multiple) render targets.
*/

/*! \var GLenum          DeferredShadingStageBase::_mfPixelTypes
    Pixel data types for each of the (multiple) render targets.
*/

/*! \var ShaderProgramChunk * DeferredShadingStageBase::_sfGBufferProgram
    Shader program used when rendering to the (multiple) render targets.
*/

/*! \var ShaderProgramChunk * DeferredShadingStageBase::_sfAmbientProgram
    Shader program used for a global ambient pass.
*/

/*! \var ShaderProgramChunk * DeferredShadingStageBase::_mfLightPrograms
    Shader programs used when rendering each light. If only one is present it
    is used for all lights otherwise there must be a program for each light.
*/

/*! \var Light *         DeferredShadingStageBase::_mfLights
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<DeferredShadingStage *, nsOSG>::_type(
    "DeferredShadingStagePtr", 
    "SimpleStagePtr", 
    DeferredShadingStage::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(DeferredShadingStage *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           DeferredShadingStage *,
                           nsOSG)

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           DeferredShadingStage *,
                           nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void DeferredShadingStageBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFGLenum::Description(
        MFGLenum::getClassType(),
        "pixelFormats",
        "Pixel formats for each of the (multiple) render targets.\n",
        PixelFormatsFieldId, PixelFormatsFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DeferredShadingStage::editHandlePixelFormats),
        static_cast<FieldGetMethodSig >(&DeferredShadingStage::getHandlePixelFormats));

    oType.addInitialDesc(pDesc);

    pDesc = new MFGLenum::Description(
        MFGLenum::getClassType(),
        "pixelTypes",
        "Pixel data types for each of the (multiple) render targets.\n",
        PixelTypesFieldId, PixelTypesFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DeferredShadingStage::editHandlePixelTypes),
        static_cast<FieldGetMethodSig >(&DeferredShadingStage::getHandlePixelTypes));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecShaderProgramChunkPtr::Description(
        SFUnrecShaderProgramChunkPtr::getClassType(),
        "gBufferProgram",
        "Shader program used when rendering to the (multiple) render targets.\n",
        GBufferProgramFieldId, GBufferProgramFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DeferredShadingStage::editHandleGBufferProgram),
        static_cast<FieldGetMethodSig >(&DeferredShadingStage::getHandleGBufferProgram));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecShaderProgramChunkPtr::Description(
        SFUnrecShaderProgramChunkPtr::getClassType(),
        "ambientProgram",
        "Shader program used for a global ambient pass.\n",
        AmbientProgramFieldId, AmbientProgramFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DeferredShadingStage::editHandleAmbientProgram),
        static_cast<FieldGetMethodSig >(&DeferredShadingStage::getHandleAmbientProgram));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUnrecShaderProgramChunkPtr::Description(
        MFUnrecShaderProgramChunkPtr::getClassType(),
        "lightPrograms",
        "Shader programs used when rendering each light. If only one is present it\n"
        "is used for all lights otherwise there must be a program for each light.\n",
        LightProgramsFieldId, LightProgramsFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DeferredShadingStage::editHandleLightPrograms),
        static_cast<FieldGetMethodSig >(&DeferredShadingStage::getHandleLightPrograms));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUnrecLightPtr::Description(
        MFUnrecLightPtr::getClassType(),
        "lights",
        "",
        LightsFieldId, LightsFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DeferredShadingStage::editHandleLights),
        static_cast<FieldGetMethodSig >(&DeferredShadingStage::getHandleLights));

    oType.addInitialDesc(pDesc);
}


DeferredShadingStageBase::TypeObject DeferredShadingStageBase::_type(
    DeferredShadingStageBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&DeferredShadingStageBase::createEmptyLocal),
    reinterpret_cast<InitContainerF>(&DeferredShadingStage::initMethod),
    reinterpret_cast<ExitContainerF>(&DeferredShadingStage::exitMethod),
    reinterpret_cast<InitalInsertDescFunc>(
        reinterpret_cast<void *>(&DeferredShadingStage::classDescInserter)),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"DeferredShadingStage\"\n"
    "   parent=\"SimpleStage\"\n"
    "   library=\"EffectGroups\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   isNodeCore=\"true\"\n"
    "   docGroupBase=\"GrpEffectsGroupsDeferredShading\"\n"
    "   >\n"
    "  A stage to implement a deferred shading system. It renders the tree below it\n"
    "  to (multiple) render targets (pass0). These are then used as input for a\n"
    "  second pass that renders a full screen quad (pass1).\n"
    "  <Field\n"
    "     name=\"pixelFormats\"\n"
    "     category=\"data\"\n"
    "     type=\"GLenum\"\n"
    "     cardinality=\"multi\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     >\n"
    "    Pixel formats for each of the (multiple) render targets.\n"
    "  </Field>\n"
    "  <Field\n"
    "     name=\"pixelTypes\"\n"
    "     category=\"data\"\n"
    "     type=\"GLenum\"\n"
    "     cardinality=\"multi\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     >\n"
    "    Pixel data types for each of the (multiple) render targets.\n"
    "  </Field>\n"
    "  <Field\n"
    "     name=\"gBufferProgram\"\n"
    "     category=\"pointer\"\n"
    "     type=\"ShaderProgramChunk\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     defaultValue=\"NULL\"\n"
    "     access=\"public\"\n"
    "     >\n"
    "    Shader program used when rendering to the (multiple) render targets.\n"
    "  </Field>\n"
    "  <Field\n"
    "     name=\"ambientProgram\"\n"
    "     category=\"pointer\"\n"
    "     type=\"ShaderProgramChunk\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     defaultValue=\"NULL\"\n"
    "     access=\"public\"\n"
    "     >\n"
    "    Shader program used for a global ambient pass.\n"
    "  </Field>\n"
    "  <Field\n"
    "     name=\"lightPrograms\"\n"
    "     category=\"pointer\"\n"
    "     type=\"ShaderProgramChunk\"\n"
    "     cardinality=\"multi\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     >\n"
    "    Shader programs used when rendering each light. If only one is present it\n"
    "    is used for all lights otherwise there must be a program for each light.\n"
    "  </Field>\n"
    "  <Field\n"
    "     name=\"lights\"\n"
    "     category=\"pointer\"\n"
    "     type=\"Light\"\n"
    "     cardinality=\"multi\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    "A stage to implement a deferred shading system. It renders the tree below it\n"
    "to (multiple) render targets (pass0). These are then used as input for a\n"
    "second pass that renders a full screen quad (pass1).\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &DeferredShadingStageBase::getType(void)
{
    return _type;
}

const FieldContainerType &DeferredShadingStageBase::getType(void) const
{
    return _type;
}

UInt32 DeferredShadingStageBase::getContainerSize(void) const
{
    return sizeof(DeferredShadingStage);
}

/*------------------------- decorator get ------------------------------*/


MFGLenum *DeferredShadingStageBase::editMFPixelFormats(void)
{
    editMField(PixelFormatsFieldMask, _mfPixelFormats);

    return &_mfPixelFormats;
}

const MFGLenum *DeferredShadingStageBase::getMFPixelFormats(void) const
{
    return &_mfPixelFormats;
}


MFGLenum *DeferredShadingStageBase::editMFPixelTypes(void)
{
    editMField(PixelTypesFieldMask, _mfPixelTypes);

    return &_mfPixelTypes;
}

const MFGLenum *DeferredShadingStageBase::getMFPixelTypes(void) const
{
    return &_mfPixelTypes;
}


//! Get the DeferredShadingStage::_sfGBufferProgram field.
const SFUnrecShaderProgramChunkPtr *DeferredShadingStageBase::getSFGBufferProgram(void) const
{
    return &_sfGBufferProgram;
}

SFUnrecShaderProgramChunkPtr *DeferredShadingStageBase::editSFGBufferProgram (void)
{
    editSField(GBufferProgramFieldMask);

    return &_sfGBufferProgram;
}

//! Get the value of the DeferredShadingStage::_sfGBufferProgram field.
ShaderProgramChunk * DeferredShadingStageBase::getGBufferProgram(void) const
{
    return _sfGBufferProgram.getValue();
}

//! Set the value of the DeferredShadingStage::_sfGBufferProgram field.
void DeferredShadingStageBase::setGBufferProgram(ShaderProgramChunk * const value)
{
    editSField(GBufferProgramFieldMask);

    _sfGBufferProgram.setValue(value);
}


//! Get the DeferredShadingStage::_sfAmbientProgram field.
const SFUnrecShaderProgramChunkPtr *DeferredShadingStageBase::getSFAmbientProgram(void) const
{
    return &_sfAmbientProgram;
}

SFUnrecShaderProgramChunkPtr *DeferredShadingStageBase::editSFAmbientProgram (void)
{
    editSField(AmbientProgramFieldMask);

    return &_sfAmbientProgram;
}

//! Get the value of the DeferredShadingStage::_sfAmbientProgram field.
ShaderProgramChunk * DeferredShadingStageBase::getAmbientProgram(void) const
{
    return _sfAmbientProgram.getValue();
}

//! Set the value of the DeferredShadingStage::_sfAmbientProgram field.
void DeferredShadingStageBase::setAmbientProgram(ShaderProgramChunk * const value)
{
    editSField(AmbientProgramFieldMask);

    _sfAmbientProgram.setValue(value);
}


//! Get the DeferredShadingStage::_mfLightPrograms field.
const MFUnrecShaderProgramChunkPtr *DeferredShadingStageBase::getMFLightPrograms(void) const
{
    return &_mfLightPrograms;
}

MFUnrecShaderProgramChunkPtr *DeferredShadingStageBase::editMFLightPrograms  (void)
{
    editMField(LightProgramsFieldMask, _mfLightPrograms);

    return &_mfLightPrograms;
}
ShaderProgramChunk * DeferredShadingStageBase::getLightPrograms(const UInt32 index) const
{
    return _mfLightPrograms[index];
}

//! Get the DeferredShadingStage::_mfLights field.
const MFUnrecLightPtr *DeferredShadingStageBase::getMFLights(void) const
{
    return &_mfLights;
}

MFUnrecLightPtr     *DeferredShadingStageBase::editMFLights         (void)
{
    editMField(LightsFieldMask, _mfLights);

    return &_mfLights;
}
Light * DeferredShadingStageBase::getLights(const UInt32 index) const
{
    return _mfLights[index];
}



void DeferredShadingStageBase::pushToLightPrograms(ShaderProgramChunk * const value)
{
    editMField(LightProgramsFieldMask, _mfLightPrograms);

    _mfLightPrograms.push_back(value);
}

void DeferredShadingStageBase::assignLightPrograms(const MFUnrecShaderProgramChunkPtr &value)
{
    MFUnrecShaderProgramChunkPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecShaderProgramChunkPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<DeferredShadingStage *>(this)->clearLightPrograms();

    while(elemIt != elemEnd)
    {
        this->pushToLightPrograms(*elemIt);

        ++elemIt;
    }
}

void DeferredShadingStageBase::removeFromLightPrograms(UInt32 uiIndex)
{
    if(uiIndex < _mfLightPrograms.size())
    {
        editMField(LightProgramsFieldMask, _mfLightPrograms);

        _mfLightPrograms.erase(uiIndex);
    }
}

void DeferredShadingStageBase::removeObjFromLightPrograms(ShaderProgramChunk * const value)
{
    Int32 iElemIdx = _mfLightPrograms.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(LightProgramsFieldMask, _mfLightPrograms);

        _mfLightPrograms.erase(iElemIdx);
    }
}
void DeferredShadingStageBase::clearLightPrograms(void)
{
    editMField(LightProgramsFieldMask, _mfLightPrograms);


    _mfLightPrograms.clear();
}

void DeferredShadingStageBase::pushToLights(Light * const value)
{
    editMField(LightsFieldMask, _mfLights);

    _mfLights.push_back(value);
}

void DeferredShadingStageBase::assignLights   (const MFUnrecLightPtr   &value)
{
    MFUnrecLightPtr  ::const_iterator elemIt  =
        value.begin();
    MFUnrecLightPtr  ::const_iterator elemEnd =
        value.end  ();

    static_cast<DeferredShadingStage *>(this)->clearLights();

    while(elemIt != elemEnd)
    {
        this->pushToLights(*elemIt);

        ++elemIt;
    }
}

void DeferredShadingStageBase::removeFromLights(UInt32 uiIndex)
{
    if(uiIndex < _mfLights.size())
    {
        editMField(LightsFieldMask, _mfLights);

        _mfLights.erase(uiIndex);
    }
}

void DeferredShadingStageBase::removeObjFromLights(Light * const value)
{
    Int32 iElemIdx = _mfLights.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(LightsFieldMask, _mfLights);

        _mfLights.erase(iElemIdx);
    }
}
void DeferredShadingStageBase::clearLights(void)
{
    editMField(LightsFieldMask, _mfLights);


    _mfLights.clear();
}



/*------------------------------ access -----------------------------------*/

SizeT DeferredShadingStageBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (PixelFormatsFieldMask & whichField))
    {
        returnValue += _mfPixelFormats.getBinSize();
    }
    if(FieldBits::NoField != (PixelTypesFieldMask & whichField))
    {
        returnValue += _mfPixelTypes.getBinSize();
    }
    if(FieldBits::NoField != (GBufferProgramFieldMask & whichField))
    {
        returnValue += _sfGBufferProgram.getBinSize();
    }
    if(FieldBits::NoField != (AmbientProgramFieldMask & whichField))
    {
        returnValue += _sfAmbientProgram.getBinSize();
    }
    if(FieldBits::NoField != (LightProgramsFieldMask & whichField))
    {
        returnValue += _mfLightPrograms.getBinSize();
    }
    if(FieldBits::NoField != (LightsFieldMask & whichField))
    {
        returnValue += _mfLights.getBinSize();
    }

    return returnValue;
}

void DeferredShadingStageBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (PixelFormatsFieldMask & whichField))
    {
        _mfPixelFormats.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PixelTypesFieldMask & whichField))
    {
        _mfPixelTypes.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GBufferProgramFieldMask & whichField))
    {
        _sfGBufferProgram.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AmbientProgramFieldMask & whichField))
    {
        _sfAmbientProgram.copyToBin(pMem);
    }
    if(FieldBits::NoField != (LightProgramsFieldMask & whichField))
    {
        _mfLightPrograms.copyToBin(pMem);
    }
    if(FieldBits::NoField != (LightsFieldMask & whichField))
    {
        _mfLights.copyToBin(pMem);
    }
}

void DeferredShadingStageBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (PixelFormatsFieldMask & whichField))
    {
        editMField(PixelFormatsFieldMask, _mfPixelFormats);
        _mfPixelFormats.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PixelTypesFieldMask & whichField))
    {
        editMField(PixelTypesFieldMask, _mfPixelTypes);
        _mfPixelTypes.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GBufferProgramFieldMask & whichField))
    {
        editSField(GBufferProgramFieldMask);
        _sfGBufferProgram.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AmbientProgramFieldMask & whichField))
    {
        editSField(AmbientProgramFieldMask);
        _sfAmbientProgram.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (LightProgramsFieldMask & whichField))
    {
        editMField(LightProgramsFieldMask, _mfLightPrograms);
        _mfLightPrograms.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (LightsFieldMask & whichField))
    {
        editMField(LightsFieldMask, _mfLights);
        _mfLights.copyFromBin(pMem);
    }
}

//! create a new instance of the class
DeferredShadingStageTransitPtr DeferredShadingStageBase::createLocal(BitVector bFlags)
{
    DeferredShadingStageTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<DeferredShadingStage>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
DeferredShadingStageTransitPtr DeferredShadingStageBase::createDependent(BitVector bFlags)
{
    DeferredShadingStageTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<DeferredShadingStage>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
DeferredShadingStageTransitPtr DeferredShadingStageBase::create(void)
{
    DeferredShadingStageTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<DeferredShadingStage>(tmpPtr);
    }

    return fc;
}

DeferredShadingStage *DeferredShadingStageBase::createEmptyLocal(BitVector bFlags)
{
    DeferredShadingStage *returnValue;

    newPtr<DeferredShadingStage>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
DeferredShadingStage *DeferredShadingStageBase::createEmpty(void)
{
    DeferredShadingStage *returnValue;

    newPtr<DeferredShadingStage>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr DeferredShadingStageBase::shallowCopyLocal(
    BitVector bFlags) const
{
    DeferredShadingStage *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const DeferredShadingStage *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr DeferredShadingStageBase::shallowCopyDependent(
    BitVector bFlags) const
{
    DeferredShadingStage *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const DeferredShadingStage *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr DeferredShadingStageBase::shallowCopy(void) const
{
    DeferredShadingStage *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const DeferredShadingStage *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

DeferredShadingStageBase::DeferredShadingStageBase(void) :
    Inherited(),
    _mfPixelFormats           (),
    _mfPixelTypes             (),
    _sfGBufferProgram         (NULL),
    _sfAmbientProgram         (NULL),
    _mfLightPrograms          (),
    _mfLights                 ()
{
}

DeferredShadingStageBase::DeferredShadingStageBase(const DeferredShadingStageBase &source) :
    Inherited(source),
    _mfPixelFormats           (source._mfPixelFormats           ),
    _mfPixelTypes             (source._mfPixelTypes             ),
    _sfGBufferProgram         (NULL),
    _sfAmbientProgram         (NULL),
    _mfLightPrograms          (),
    _mfLights                 ()
{
}


/*-------------------------- destructors ----------------------------------*/

DeferredShadingStageBase::~DeferredShadingStageBase(void)
{
}

void DeferredShadingStageBase::onCreate(const DeferredShadingStage *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        DeferredShadingStage *pThis = static_cast<DeferredShadingStage *>(this);

        pThis->setGBufferProgram(source->getGBufferProgram());

        pThis->setAmbientProgram(source->getAmbientProgram());

        MFUnrecShaderProgramChunkPtr::const_iterator LightProgramsIt  =
            source->_mfLightPrograms.begin();
        MFUnrecShaderProgramChunkPtr::const_iterator LightProgramsEnd =
            source->_mfLightPrograms.end  ();

        while(LightProgramsIt != LightProgramsEnd)
        {
            pThis->pushToLightPrograms(*LightProgramsIt);

            ++LightProgramsIt;
        }

        MFUnrecLightPtr::const_iterator LightsIt  =
            source->_mfLights.begin();
        MFUnrecLightPtr::const_iterator LightsEnd =
            source->_mfLights.end  ();

        while(LightsIt != LightsEnd)
        {
            pThis->pushToLights(*LightsIt);

            ++LightsIt;
        }
    }
}

GetFieldHandlePtr DeferredShadingStageBase::getHandlePixelFormats    (void) const
{
    MFGLenum::GetHandlePtr returnValue(
        new  MFGLenum::GetHandle(
             &_mfPixelFormats,
             this->getType().getFieldDesc(PixelFormatsFieldId),
             const_cast<DeferredShadingStageBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DeferredShadingStageBase::editHandlePixelFormats   (void)
{
    MFGLenum::EditHandlePtr returnValue(
        new  MFGLenum::EditHandle(
             &_mfPixelFormats,
             this->getType().getFieldDesc(PixelFormatsFieldId),
             this));


    editMField(PixelFormatsFieldMask, _mfPixelFormats);

    return returnValue;
}

GetFieldHandlePtr DeferredShadingStageBase::getHandlePixelTypes      (void) const
{
    MFGLenum::GetHandlePtr returnValue(
        new  MFGLenum::GetHandle(
             &_mfPixelTypes,
             this->getType().getFieldDesc(PixelTypesFieldId),
             const_cast<DeferredShadingStageBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DeferredShadingStageBase::editHandlePixelTypes     (void)
{
    MFGLenum::EditHandlePtr returnValue(
        new  MFGLenum::EditHandle(
             &_mfPixelTypes,
             this->getType().getFieldDesc(PixelTypesFieldId),
             this));


    editMField(PixelTypesFieldMask, _mfPixelTypes);

    return returnValue;
}

GetFieldHandlePtr DeferredShadingStageBase::getHandleGBufferProgram  (void) const
{
    SFUnrecShaderProgramChunkPtr::GetHandlePtr returnValue(
        new  SFUnrecShaderProgramChunkPtr::GetHandle(
             &_sfGBufferProgram,
             this->getType().getFieldDesc(GBufferProgramFieldId),
             const_cast<DeferredShadingStageBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DeferredShadingStageBase::editHandleGBufferProgram (void)
{
    SFUnrecShaderProgramChunkPtr::EditHandlePtr returnValue(
        new  SFUnrecShaderProgramChunkPtr::EditHandle(
             &_sfGBufferProgram,
             this->getType().getFieldDesc(GBufferProgramFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&DeferredShadingStage::setGBufferProgram,
                    static_cast<DeferredShadingStage *>(this), _1));

    editSField(GBufferProgramFieldMask);

    return returnValue;
}

GetFieldHandlePtr DeferredShadingStageBase::getHandleAmbientProgram  (void) const
{
    SFUnrecShaderProgramChunkPtr::GetHandlePtr returnValue(
        new  SFUnrecShaderProgramChunkPtr::GetHandle(
             &_sfAmbientProgram,
             this->getType().getFieldDesc(AmbientProgramFieldId),
             const_cast<DeferredShadingStageBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DeferredShadingStageBase::editHandleAmbientProgram (void)
{
    SFUnrecShaderProgramChunkPtr::EditHandlePtr returnValue(
        new  SFUnrecShaderProgramChunkPtr::EditHandle(
             &_sfAmbientProgram,
             this->getType().getFieldDesc(AmbientProgramFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&DeferredShadingStage::setAmbientProgram,
                    static_cast<DeferredShadingStage *>(this), _1));

    editSField(AmbientProgramFieldMask);

    return returnValue;
}

GetFieldHandlePtr DeferredShadingStageBase::getHandleLightPrograms   (void) const
{
    MFUnrecShaderProgramChunkPtr::GetHandlePtr returnValue(
        new  MFUnrecShaderProgramChunkPtr::GetHandle(
             &_mfLightPrograms,
             this->getType().getFieldDesc(LightProgramsFieldId),
             const_cast<DeferredShadingStageBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DeferredShadingStageBase::editHandleLightPrograms  (void)
{
    MFUnrecShaderProgramChunkPtr::EditHandlePtr returnValue(
        new  MFUnrecShaderProgramChunkPtr::EditHandle(
             &_mfLightPrograms,
             this->getType().getFieldDesc(LightProgramsFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&DeferredShadingStage::pushToLightPrograms,
                    static_cast<DeferredShadingStage *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&DeferredShadingStage::removeFromLightPrograms,
                    static_cast<DeferredShadingStage *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&DeferredShadingStage::removeObjFromLightPrograms,
                    static_cast<DeferredShadingStage *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&DeferredShadingStage::clearLightPrograms,
                    static_cast<DeferredShadingStage *>(this)));

    editMField(LightProgramsFieldMask, _mfLightPrograms);

    return returnValue;
}

GetFieldHandlePtr DeferredShadingStageBase::getHandleLights          (void) const
{
    MFUnrecLightPtr::GetHandlePtr returnValue(
        new  MFUnrecLightPtr::GetHandle(
             &_mfLights,
             this->getType().getFieldDesc(LightsFieldId),
             const_cast<DeferredShadingStageBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DeferredShadingStageBase::editHandleLights         (void)
{
    MFUnrecLightPtr::EditHandlePtr returnValue(
        new  MFUnrecLightPtr::EditHandle(
             &_mfLights,
             this->getType().getFieldDesc(LightsFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&DeferredShadingStage::pushToLights,
                    static_cast<DeferredShadingStage *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&DeferredShadingStage::removeFromLights,
                    static_cast<DeferredShadingStage *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&DeferredShadingStage::removeObjFromLights,
                    static_cast<DeferredShadingStage *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&DeferredShadingStage::clearLights,
                    static_cast<DeferredShadingStage *>(this)));

    editMField(LightsFieldMask, _mfLights);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void DeferredShadingStageBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    DeferredShadingStage *pThis = static_cast<DeferredShadingStage *>(this);

    pThis->execSync(static_cast<DeferredShadingStage *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *DeferredShadingStageBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    DeferredShadingStage *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const DeferredShadingStage *>(pRefAspect),
                  dynamic_cast<const DeferredShadingStage *>(this));

    return returnValue;
}
#endif

void DeferredShadingStageBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<DeferredShadingStage *>(this)->setGBufferProgram(NULL);

    static_cast<DeferredShadingStage *>(this)->setAmbientProgram(NULL);

    static_cast<DeferredShadingStage *>(this)->clearLightPrograms();

    static_cast<DeferredShadingStage *>(this)->clearLights();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfPixelFormats.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    _mfPixelTypes.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE
