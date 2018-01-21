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

/// @file idlib/game-engine/events/keyboard_key_event_kind.hpp
/// @brief Enumeration of the different kinds of keyboard key events.
/// @author Michael Heilmann

#pragma once

#include "idlib/game-engine/events/internal/header.in"

/// @brief Enumeration of the different kinds of keyboard key events.
enum class keyboard_key_event_kind
{
    /// @brief Kind of a keyboard key event raised when a keyboard key is pressed.
    pressed,

    /// @brief Kind of a keyboard key event raised when a keyboard key is released.
    released,

    /// @brief Kind of a keyboard key event raised when a keyboard key is typed.
    typed,

}; // enum class keyboard_key_event_kind

#include "idlib/game-engine/events/internal/footer.in"
