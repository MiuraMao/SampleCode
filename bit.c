#include <stdio.h.>

int main(void)
{
    char i = 1;

    printf("0&0=%d 0|0=%d 0^0=%d\n", 0&0, 0|0, 0^0);
    printf("0&1=%d 0|1=%d 0^1=%d\n", 0&1, 0|1, 0^1); 
    printf("1&0=%d 1|0=%d 1^0=%d\n", 1&0, 1|0, 1^0);
    printf("1&1=%d 1|1=%d 1^1=%d\n", 1&1, 1|1, 1^1);
    printf("~i=%d\n", ~i);
    return 0;
}