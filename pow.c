#include<stdio.h>

int main(void)
{
    int i, d = 0, pownumber = 1;

    printf("乗数を入力 > ");
    scanf("%d", &d);
    for (i = 0; i < d; i++)
    {
        pownumber *= 2;            /*2を指定回数（i）掛ける*/
    }
    printf("2の%d乗は%d\n", d, pownumber);
    return 0;
}