#include <stdio.h>

int main(void)
{
    char c;
    int i;
    double d;
    char s[20];

    printf("��������� > ");
    scanf("%c", &c);
    printf("��������� > ");
    scanf("%d", &i);
    printf("��������� > ");
    scanf("%lf", &d);
    printf("���������� > ");
    scanf("%s", s);
    printf("����c�F%c\n", c);
    printf("����i�F%d\n", i);
    printf("����d�F%f\n", d);
    printf("������s�F%s\n", s);
    return 0;
}