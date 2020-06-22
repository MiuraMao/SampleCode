#include <stdio.h>

void  rconvert(int d, int rdx, char str[9]){
    int i;
    str[8] = '\0';
    for(i = 7; i >=0; i--){
        str[i] = (char)((d % rdx) + '0');
        d /= rdx;
    }
}

int main(void){
    int d;
    char str[9];

    printf("0～255までの数値を入力 > ");
    scanf("%d", &d);
    rconvert(d, 2, str);
    printf("%s\n", str);
    return 0;
}