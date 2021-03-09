#include <time.h> // amongst others for random numbers
#include <sys/ioctl.h> // for console dimensions
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/ioctl.h>
#include <string.h>
#include <termios.h>

// Definition/Implementation
int randomNumber(int lower, int upper)
{
    int num = (rand() % (upper - lower + 1)) + lower;

    return num;
}

// Definition/Implementation
void clearScreen()
{
    printf("\033[H\033[J");
}

// Definition/Implementation
int msleep(long tms)
{
    struct timespec ts;
    int ret;
    if (tms < 0)
    {
    return -1;
    }
    ts.tv_sec = tms / 1000;
    ts.tv_nsec = (tms % 1000) * 1000000;
    do
    {
    // printf("sleeping for %d", ret);
    ret = nanosleep(&ts, &ts);
    }
    while (ret);

    return ret;
}

void pressEnter()
{
    int input_key;

    // printf("press any key\n");
    scanf("%c", &input_key); // only works after any input ending with pressing <Enter>
    return; // returns no value
}

// get width ('x') or height ('anykey') of the console
int checkAndSetConsoleDimensions(char xy)
{
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    // printf ("\33[%d;%dH%d/%d",4, 2, w.ws_col, w.ws_row);
    return (xy == 'x') ? w.ws_col : w.ws_row;
}

// mygetchar without wating and no return needed
int mygetch (void) {
    int ch;
    struct termios oldt, newt;

    tcgetattr ( STDIN_FILENO, &oldt );
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO );
    tcsetattr ( STDIN_FILENO,TCSANOW, &newt );
    ch = getchar();
    tcsetattr ( STDIN_FILENO,TCSANOW, &oldt );

    return ch;
}

// show the cursor with 1 turns off with 0
void showCursor(bool show) {
#define CSI "\e["
  if (show) {
    fputs(CSI "?25h", stdout);
  }
  else {
    fputs(CSI "?25l", stdout);
  }
#undef CSI
}
