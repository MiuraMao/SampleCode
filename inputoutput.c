#include <stdio.h>

int main(void){
    int i;
    double d;
    char str[10];
    int r;

    printf("整数 実数 文字列を入力 > ");
    r = scanf("%d %lf %s", &i, &d, str);
    printf("scanf関数戻り値：%d\n", r);

    r = printf("%d\n", i);
    printf("printf関数戻り値：%d\n", r);
    r = printf("%f\n", d);
    printf("printf関数戻り値：%d\n", r);
    r = printf("%s\n", str);
    printf("printf関数戻り値：%d\n", r);
    return 0;
}