#include <stdio.h>

int main(void)
{
    char c = 'a';
    int i = 100;
    double d = 0.1234;

    printf("����c�𐔒l�F%d\n", c);
    printf("���li�𕶎��F%c\n", i);
    printf("���li��16�i���F%#x\n", i);
    printf("����d��S��10���F%010.5f\n", d);
    printf("����d�̎w���`���F%e", d);
    return 0; 
}