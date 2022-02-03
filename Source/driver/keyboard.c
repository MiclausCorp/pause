//
//  keyboard.c
//  Keyboard driver for pause
//
//  The pause Project
//
//  Created by Miclaus Darius on 11/1/2021.
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

#include "keyboard.h"

int handle(void)
{
  /* Create our initial variables */
  /// `oldTerminal` `Termios` struct
  struct termios oldTerminal;

  /// `newTerminal` `Termios` struct
  struct termios newTerminal;

  /// Change
  int character;

  /// Old file
  int oldFile;

  // Get the parameters associated with the terminal from the Standard Input and save them to `oldTerminal`
  tcgetattr(STDIN_FILENO, &oldTerminal);

  // Make a copy in newTerminal
  newTerminal = oldTerminal;

  // Set termios flag
  newTerminal.c_lflag &= ~(ICANON | ECHO);

  // Set the `TCSANOW` attribute flag to the new terminal
  tcsetattr(STDIN_FILENO, TCSANOW, &newTerminal);

  // Manipulate the STDIN file descriptor
  oldFile = fcntl(STDIN_FILENO, F_GETFL, 0);
  fcntl(STDIN_FILENO, F_SETFL, oldFile | O_NONBLOCK);

  // Wait for input
  character = getchar();

  // Set terminal attributes
  tcsetattr(STDIN_FILENO, TCSANOW, &oldTerminal);
  fcntl(STDIN_FILENO, F_SETFL, oldFile);

  // Wait until an End-of-file character.
  if(character != EOF)
  {
    // Push the character back onto the given input stream.
    ungetc(character, stdin);
    return 1;
  }

  // Exit
  return 0;
}