/*  =========================================================================
    agent-cm - Provides computation services on METRICS

    Copyright (C) 2016 Eaton

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
    =========================================================================
*/

#ifndef FTY_METRIC_COMPUTE_H_H_INCLUDED
#define FTY_METRIC_COMPUTE_H_H_INCLUDED

//  Include the project library file
#include "fty_metric_compute_library.h"

//  Add your own public definitions here, if you need them
#define AGENT_CM_TIME   "time"          // time item in aux
#define AGENT_CM_COUNT  "x-cm-count"    // how many measurements are there
#define AGENT_CM_SUM    "x-cm-sum"      // sum of the values
#define AGENT_CM_TYPE   "x-cm-type"     // type of computation (min/max/arithmetic_mean)
#define AGENT_CM_STEP   "x-cm-step"     // computation step (in seconds)

#endif
