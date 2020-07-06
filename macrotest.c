#include <stdio.h>

#define RATE(x, y) ((double)(x)/(y)*100)

#define ABS(x) ((x) < 0 ? - (x) : (x))

#define PRINT(x, y) do{ \
    if(x > y) printf("%dは%dより%d大きい", x, y, (x - y)); \
    else printf("%dは%dより%d大きい", x, y, (y - x)); \
}while(0)

int main(void){
    printf("RATE(42,75)=%f%%\n", RATE(42,75));
    printf("ABS(1.2)=%f\n", ABS(1.2));
    printf("ABS(-5)=%d\n", ABS(-5));
    PRINT(43, 12);

    return 0;
}