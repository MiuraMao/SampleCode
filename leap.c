#include <stdio.h>

int main(void)
{
    int year, day = 28;

    printf("年数を入力 > ");
    scanf("%d", &year);
    day += (year%4 == 0 && year%100 != 0) || year%400 == 0;
    printf("%d年２月の日数は%d日\n", year, day);
    return 0;
}