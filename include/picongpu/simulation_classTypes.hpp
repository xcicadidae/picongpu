/* Copyright 2013-2017 Axel Huebl, Felix Schmitt, Heiko Burau, Rene Widera
 *
 * This file is part of PIConGPU.
 *
 * PIConGPU is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * PIConGPU is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with PIConGPU.
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "pmacc_types.hpp"
#include "Environment.hpp"
#include "picongpu/simulation_defines.hpp"

#include "mappings/kernel/AreaMapping.hpp"
#include "math/Vector.hpp"
#include "eventSystem/EventSystem.hpp"

#include "picongpu/debug/PIConGPUVerbose.hpp"


namespace picongpu
{
    using namespace pmacc;

    //short name for access verbose types of picongpu
    typedef PIConGPUVerbose picLog;

} //namespace picongpu
