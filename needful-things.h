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
