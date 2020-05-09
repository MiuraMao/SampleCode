#include <stdio.h>

int main(void)
{
    char c;
    int i;
    double d;
    char s[20];

    printf("文字を入力 > ");
    scanf("%c", &c);
    printf("整数を入力 > ");
    scanf("%d", &i);
    printf("実数を入力 > ");
    scanf("%lf", &d);
    printf("文字列を入力 > ");
    scanf("%s", s);
    printf("文字c：%c\n", c);
    printf("整数i：%d\n", i);
    printf("実数d：%f\n", d);
    printf("文字列s：%s\n", s);
    return 0;
}