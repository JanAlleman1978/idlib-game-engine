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

/// @file idlib/game-engine/video/vertex_buffer.cpp
/// @brief Vertex buffers.
/// @author Michael Heilmann

#include "idlib/game-engine/video/vertex_buffer.hpp"

namespace idlib {

vertex_buffer::vertex_buffer(size_t number_of_vertices, size_t vertex_size)
	: buffer(number_of_vertices * vertex_size),
	  m_number_of_vertices(number_of_vertices),
	  m_vertex_size(vertex_size)
{}

vertex_buffer::~vertex_buffer()
{}

size_t vertex_buffer::number_of_vertices() const
{ return m_number_of_vertices; }

size_t vertex_buffer::vertex_size() const
{ return m_vertex_size; }

} // namespace idlib
