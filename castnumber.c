#include <stdio.h>

int main(void)
{   
    unsigned short us = 50000;
    char c = (char)us;
    short s = us;
    int i = us;
    double d = us;

    printf("  charå^ÅF%d\n", c);
    printf(" shortå^ÅF%d\n", s);
    printf("   intå^ÅF%d\n", i);
    printf("doubleå^ÅF%f\n", d);
    return 0;
}