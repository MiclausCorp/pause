//
//  main.hpp
//  Main Header file
//
//  The pause Project
//
//  Created by Miclaus Darius on 3/2/2022.
//  Trademark™ and Copyright© Darius Inc. Advanced Software Technologies Research Division.
//
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#pragma once
#ifndef PAUSE_MAIN_HPP
#define PAUSE_MAIN_HPP

/* Name Mangling */
#ifdef __cplusplus
    extern "C" {
#endif

/* Include Directive */
#pragma region "Include Directive"
#include <stdio.h>
#include <cstdlib>
#include <iostream>

#include "driver/keyboard.h"
#pragma endregion

/* Macros */
#pragma region "Macros"
#define PAUSE_STRING "Press any key to continue..."
#define EMPTY_CHAR   " "
#pragma endregion

/* Methods */
#pragma region "Methods"
int main(void);
#pragma endregion

/* Name Mangling */
#ifdef __cplusplus
    }
#endif

#endif /* PAUSE_MAIN_HPP */
