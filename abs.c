#include <stdio.h>

int main(void)
{
    int m, n;

    printf("���l����� > ");
    scanf("%d", &m);
    n = (m < 0) ? m * -1: m;
    printf("%d�̐�Βl��%d\n", m, n);
    return 0;

}