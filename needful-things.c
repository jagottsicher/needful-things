#include <time.h> // amongst others for random numbers

// Definition/Implentation
int randomNumber(int lower, int upper)
{
    int num = (rand() % (upper - lower + 1)) + lower;

    return num;
}

// Definition/Implentation
void clearScreen()
{
    printf("\033[H\033[J");
}

// Definition/Implentation
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

// Definition/Implentation
void pressEnter()
{
    int input_key;

    // printf("press any key\n");
    scanf("%c", &input_key); // only works after any input ending with pressing <Enter>
    return; // returns no value
}
