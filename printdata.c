#include <stdio.h>

int main(void)
{
    char c = 'a';
    int i = 100;
    double d = 0.1234;

    printf("文字cを数値：%d\n", c);
    printf("数値iを文字：%c\n", i);
    printf("数値iを16進数：%#x\n", i);
    printf("実数dを全体10桁：%010.5f\n", d);
    printf("実数dの指数形式：%e", d);
    return 0; 
}