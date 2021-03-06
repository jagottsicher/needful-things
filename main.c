/*
This may be helpful to figure out how to
make use of the needful-things implementations
and how to include the header file in own projects
*/

#include <stdio.h>
#include <stdlib.h>

#include "needful-things.h"

int main()
{
    printf("Let's wait 3 seconds and then clear the screen.\n"); // Note:   without '\n' this line will not appear and msleep will run. \
                                                                            to force output you need to fflush() before msleep. \
                                                                            This is intended behaviour because msleep uses nanosleep which \
                                                                            is used in parallel threaded environments - as I know
    msleep(3000);
    clearScreen();

    srand(time(NULL));
    printf("As Will said: \"Let's play Dungeons and Dragons!\"We need a Number between 1 and 20.\n");

    printf("Press <Enter> to roll the dice!\n");
    printf("You throw a: ");
    pressEnter();
    printf("%d\n", randomNumber(1,20));
    printf("By the way the terminal width is %d and height is %d",checkAndSetConsoleDimensions(x), checkAndSetConsoleDimensions(y));

return 0;
}
