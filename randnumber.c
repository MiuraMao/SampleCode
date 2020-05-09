#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    int r;
    
    srand((unsigned)time(NULL));
    r = rand();
    printf("%d", r);
    return 0;

}