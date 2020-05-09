#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    int r;

    srand((unsigned)time(NULL));
    r = rand() % 3 + 1;
    printf("%d", r);
    return 0;
}