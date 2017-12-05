// Copyright Michael Heilmann 2016, 2017.
//
// This file is part of Idlib: Game Engine.
//
// Idlib: Game Engine is free software: you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Idlib: Game Engine is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Idlib: Game Engine. If not, see <http://www.gnu.org/licenses/>.

/// @file idlib/game-engine/events/mouse_pointer_event.hpp
/// @brief Mouse pointer events.
/// @author Michael Heilmann

#pragma once

#include "idlib/game-engine/common.hpp"
#include "idlib/game-engine/events/event.hpp"
#include "idlib/game-engine/events/mouse_pointer_event_kind.hpp"

#include "idlib/game-engine/events/internal/header.in"

/// @brief A generic mouse pointer event class.
/// Specializations for all events defined in id::events::mouse_pointer_event_kind are provided.
/// @tparam Kind the event kind
/// @tparam Enabled for SFINAE
template <mouse_pointer_event_kind Kind, typename Enabled = void>
struct mouse_pointer_event;

template <mouse_pointer_event_kind Kind>
struct mouse_pointer_event<Kind, std::enable_if_t<Kind == mouse_pointer_event_kind::moved>> final : public event
{
public:
    /// @brief Construct this mouse pointer moved event with the specified values.
    /// @param position the position of the mouse pointer
	/// @param time the point in time at which the event occurred. Default is <c>std::clock()</c>.
	/// @param handled wether the event was handled or not handled. @a true indicates handled, @a false not handled. Default is @a false.
    mouse_pointer_event(const point_2s& position, std::clock_t time = std::clock(), bool handled = false)
        : event(time, handled), m_position(position)
    {}

    /// @brief Get the mouse pointer position at the point of time where the event occurred.
    /// @return the mouse pointer position
    const point_2s& get_position() const
    { return m_position; }
	
    /// @brief Get the mouse pointer position at the point of time where the event occurred.
    /// @return the mouse pointer position
    void set_position(const point_2s& position)
    { m_position = position; }

	/// @brief Get the kind of the mouse pointer event.
	/// @return the kind of the mouse pointer event
	mouse_pointer_event_kind get_kind() const
	{ return Kind; }
	
private:
    point_2s m_position; ///< @brief The position of the mouse pointer at the point of time where the event occurred.

}; // class mouse_pointer_event

template <mouse_pointer_event_kind Kind>
struct mouse_pointer_event<Kind, std::enable_if_t<Kind == mouse_pointer_event_kind::entered || Kind == mouse_pointer_event_kind::exited>> final : public event
{
public:
    /// @brief Construct this mouse pointer moved event with the specified values.
	/// @param time the point in time at which the event occurred. Default is <c>std::clock()</c>.
	/// @param handled wether the event was handled or not handled. @a true indicates handled, @a false not handled. Default is @a false.
    mouse_pointer_event(std::clock_t time = std::clock(), bool handled = false)
        : event(time, handled)
    {}

	/// @brief Get the kind of the mouse pointer event.
	/// @return the kind of the mouse pointer event
	mouse_pointer_event_kind get_kind() const
	{ return Kind; }

}; // struct mouse_pointer_event

/// @brief Arguments of a mouse pointer event raised if a mouse pointer enters a window.
using mouse_pointer_entered_event = mouse_pointer_event<mouse_pointer_event_kind::entered>;

/// @brief Arguments of a mouse pointer event raised if a mouse pointer exits window.
using mouse_pointer_exited_event = mouse_pointer_event<mouse_pointer_event_kind::exited>;

/// @brief Arguments of a mouse pointer event raised if a mouse pointer moves.
using mouse_pointer_moved_event = mouse_pointer_event<mouse_pointer_event_kind::moved>;

#include "idlib/game-engine/events/internal/footer.in"
