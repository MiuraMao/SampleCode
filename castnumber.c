#include <stdio.h>

int main(void)
{   
    unsigned short us = 50000;
    char c = (char)us;
    short s = us;
    int i = us;
    double d = us;

    printf("  char�^�F%d\n", c);
    printf(" short�^�F%d\n", s);
    printf("   int�^�F%d\n", i);
    printf("double�^�F%f\n", d);
    return 0;
}