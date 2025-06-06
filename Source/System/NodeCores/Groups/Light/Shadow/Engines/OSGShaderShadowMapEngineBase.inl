/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
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
 **     class ShaderShadowMapEngine!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &ShaderShadowMapEngineBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 ShaderShadowMapEngineBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 ShaderShadowMapEngineBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the ShaderShadowMapEngine::_sfForceTextureUnit field.

inline
Int32 &ShaderShadowMapEngineBase::editForceTextureUnit(void)
{
    editSField(ForceTextureUnitFieldMask);

    return _sfForceTextureUnit.getValue();
}

//! Get the value of the ShaderShadowMapEngine::_sfForceTextureUnit field.
inline
      Int32  ShaderShadowMapEngineBase::getForceTextureUnit(void) const
{
    return _sfForceTextureUnit.getValue();
}

//! Set the value of the ShaderShadowMapEngine::_sfForceTextureUnit field.
inline
void ShaderShadowMapEngineBase::setForceTextureUnit(const Int32 value)
{
    editSField(ForceTextureUnitFieldMask);

    _sfForceTextureUnit.setValue(value);
}
//! Get the value of the ShaderShadowMapEngine::_sfShadowNear field.

inline
Real32 &ShaderShadowMapEngineBase::editShadowNear(void)
{
    editSField(ShadowNearFieldMask);

    return _sfShadowNear.getValue();
}

//! Get the value of the ShaderShadowMapEngine::_sfShadowNear field.
inline
      Real32  ShaderShadowMapEngineBase::getShadowNear(void) const
{
    return _sfShadowNear.getValue();
}

//! Set the value of the ShaderShadowMapEngine::_sfShadowNear field.
inline
void ShaderShadowMapEngineBase::setShadowNear(const Real32 value)
{
    editSField(ShadowNearFieldMask);

    _sfShadowNear.setValue(value);
}
//! Get the value of the ShaderShadowMapEngine::_sfShadowFar field.

inline
Real32 &ShaderShadowMapEngineBase::editShadowFar(void)
{
    editSField(ShadowFarFieldMask);

    return _sfShadowFar.getValue();
}

//! Get the value of the ShaderShadowMapEngine::_sfShadowFar field.
inline
      Real32  ShaderShadowMapEngineBase::getShadowFar(void) const
{
    return _sfShadowFar.getValue();
}

//! Set the value of the ShaderShadowMapEngine::_sfShadowFar field.
inline
void ShaderShadowMapEngineBase::setShadowFar(const Real32 value)
{
    editSField(ShadowFarFieldMask);

    _sfShadowFar.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void ShaderShadowMapEngineBase::execSync (      ShaderShadowMapEngineBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ShadowVertexProgramFieldMask & whichField))
        _sfShadowVertexProgram.syncWith(pFrom->_sfShadowVertexProgram);

    if(FieldBits::NoField != (ShadowFragmentProgramFieldMask & whichField))
        _sfShadowFragmentProgram.syncWith(pFrom->_sfShadowFragmentProgram);

    if(FieldBits::NoField != (ForceTextureUnitFieldMask & whichField))
        _sfForceTextureUnit.syncWith(pFrom->_sfForceTextureUnit);

    if(FieldBits::NoField != (ShadowNearFieldMask & whichField))
        _sfShadowNear.syncWith(pFrom->_sfShadowNear);

    if(FieldBits::NoField != (ShadowFarFieldMask & whichField))
        _sfShadowFar.syncWith(pFrom->_sfShadowFar);
}
#endif


inline
const Char8 *ShaderShadowMapEngineBase::getClassname(void)
{
    return "ShaderShadowMapEngine";
}
OSG_GEN_CONTAINERPTR(ShaderShadowMapEngine);

OSG_END_NAMESPACE

