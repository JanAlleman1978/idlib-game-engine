///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Idlib: Game Engine
// Copyright (C) 2017-2018 Michael Heilmann
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
///////////////////////////////////////////////////////////////////////////////////////////////////

/// @file idlib/game-engine/vertex_component_semantics.hpp
/// @brief Semantic forms of vertex components.
/// @author Michael Heilmann

#pragma once

namespace idlib {

/// @brief An enum class of the semantic forms of vertex components.
enum class vertex_component_semantics {
	/// @brief None.
	NONE,
	/// @brief Position.
	POSITION,
	/// @brief Colour.
	COLOR,
	/// @brief Normal.
	NORMAL,
	/// @brief Texture.
	TEXTURE,
}; // enum class vertex_component_semantics

} // namespace idlib
