#include <stdio.h>

int main(void)
{
    int m, n;

    printf("”’l‚ð“ü—Í > ");
    scanf("%d", &m);
    n = (m < 0) ? m * -1: m;
    printf("%d‚Ìâ‘Î’l‚Í%d\n", m, n);
    return 0;

}