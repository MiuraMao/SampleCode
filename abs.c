#include <stdio.h>

int main(void)
{
    int m, n;

    printf("数値を入力 > ");
    scanf("%d", &m);
    n = (m < 0) ? m * -1: m;
    printf("%dの絶対値は%d\n", m, n);
        
    return 0;

}