/****************************************************************************
 * Copyright 2021-on Jens Schendel                                          *
 *                                                                          *
 * Permission is hereby granted, free of charge, to any person obtaining a  *
 * copy of this software and associated documentation files (the            *
 * "Software"), to deal in the Software without restriction, including      *
 * without limitation the rights to use, copy, modify, merge, publish,      *
 * distribute, distribute with modifications, sublicense, and/or sell       *
 * copies of the Software, and to permit persons to whom the Software is    *
 * furnished to do so, subject to the following conditions:                 *
 *                                                                          *
 * The above copyright notice and this permission notice shall be included  *
 * in all copies or substantial portions of the Software.                   *
 *                                                                          *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS  *
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF               *
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.   *
 * IN NO EVENT SHALL THE ABOVE COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,   *
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR    *
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR    *
 * THE USE OR OTHER DEALINGS IN THE SOFTWARE.                               *
 *                                                                          *
 * Except as contained in this notice, the name(s) of the above copyright   *
 * holders shall not be used in advertising or otherwise to promote the     *
 * sale, use or other dealings in this Software without prior written       *
 * authorization.                                                           *
 ****************************************************************************/

/****************************************************************************
 *  Author: Jens Schendel <jagottsicher@gmx.net 2021-on                     *
 ****************************************************************************/

#ifndef NEEDFUL-THINGS_H_INCLUDED
#define NEEDFUL-THINGS_H_INCLUDED

#endif // NEEDFUL-THINGS_H_INCLUDED

// #include <stdbool.h> // included only to be able to use 'bool' as type
// #include <ncurses.h> // provides getch, but must be compiled with -ln option in gcc

// Return Type: int
// Name: randomNumber
// Parameters: int lower, int upper
// Declaration
int randomNumber(int lower, int upper);

// Return Type: void
// Name: clearScreen
// Parameters: None
// Declaration clears the screen of the terminal with escape sequence
void clearScreen();

// Return Type: int
// Name: msleep
// Parameters: long tms
// Declaration time in milliseconds to sleep
int msleep(long tms);

// Return Type: void
// Name: pressAnyKey
// Parameters: None
// Declaration waits for any key be pressed on keyboard
void pressEnter();
