//
//  keyboard.h
//  Header file keyboard driver for pause
//
//  The pause Project
//
//  Created by Miclaus Darius on 3/2/2022.
//  Trademark™ and Copyright© Darius Inc. Advanced Software Technologies Research Division.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.

#pragma once
#ifndef PAUSE_KEYBOARD_DRIVER_H
#define PAUSE_KEYBOARD_DRIVER_H

#pragma region "Include Directive"
#include <stdio.h>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>
#pragma endregion

#pragma region "Methods"
/// Keyboard key press handle.
int handle(void);
#pragma endregion

#endif /* PAUSE_KEYBOARD_DRIVER_H */
