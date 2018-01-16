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

/// @file idlib/game-engine/video/texture_address_mode.hpp
/// @brief An enumeration of texture address modes.
/// @author Michael Heilmann

#pragma once

namespace id {

/// @brief An enumeration of texture address modes.
/// Defines what happens when texture coordinates exceed 1.0.
enum class texture_address_mode
{
    /// @brief A value \f$t\f$ is clamped to \f$[0,1]\f$
    /// i.e. is set to \f$0\f$ if \f$t < 0\f$ and to \f$1\f$ if \f$t > 1\f$.
    clamp,

    /// @brief A value \f$t\f$ is clamped to \f$\left[\frac{-1}{2n},1+\frac{1}{2n}\right]\f$
    /// i.e. is set to \f$\frac{-1}{2n}\f$ if \f$t < \frac{-1}{2n}\f$ and to
    /// \f$1+\frac{1}{2n}\f$ if \f$t > 1+\frac{1}{2n}\f$. \f$n\f$ is the size of the
    /// texture in the direction of the clamping.
    clamp_to_border,

    /// @brief A value \f$t\f$ is clamped to \f$\left[\frac{1}{2n},1-\frac{1}{2n}\right]\f$
    /// i.e. is set to \f$\frac{1}{2n}\f$ if \f$t < \frac{1}{2n}\f$ and to
    /// \f$1-\frac{1}{2n}\f$ if \f$t > 1 - \frac{1}{2n}\f$. \f$n\f$ is the size of the
    /// texture in the direction of the clamping.
    clamp_to_edge,

    /// @brief A value \f$t\f$ is set to \f$\{t\}\f$
    /// i.e. the integer part is <em>ignored</em>.
    /// @remark
    /// \f$\{x\} = 1 - \lfloor x \rfloor\f$ denotes the fractional part
    /// of a real number \f$x\f$ e.g. \f$\{2.0\} = 0.0\f$,
    /// \f$\{2.9\} = 0.9\f$, ...
    repeat,

    /// @brief A value \f$t\f$ is set to \f$\{t\}\f$
    /// if \f$t\f$ is even
    /// i.e. the integer part is <em>ignored</em>
    /// (cfg Ego::TextureAddressMode::Repeat).
    /// However, if the integer part of \f$t\f$ is odd,
    /// then the \f$\f$ is set to \f$1 - \{t\}\f$.
    repeat_mirrored,

}; // enum class texture_address_mod

} // namespace id
