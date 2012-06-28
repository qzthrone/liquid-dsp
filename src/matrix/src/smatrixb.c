/*
 * Copyright (c) 2012 Joseph Gaeddert
 * Copyright (c) 2012 Virginia Polytechnic Institute & State University
 *
 * This file is part of liquid.
 *
 * liquid is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * liquid is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with liquid.  If not, see <http://www.gnu.org/licenses/>.
 */

//
// sparse matrix API: boolean
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "liquid.internal.h"

// name-mangling macro
#define SMATRIX(name)       LIQUID_CONCAT(smatrixb,name)

// primitive type
#define T                   unsigned char

// category (float/int/bool)
#define SMATRIX_FLOAT       0
#define SMATRIX_INT         0
#define SMATRIX_BOOL        1

// print macros
#define PRINTVAL_ZERO()     printf(" .");
#define PRINTVAL(V)         printf(" %1u", V);

// source files
#include "smatrix.c"
