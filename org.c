#include <stdio.h>

#define LEN 3

int func01(void);

int main(void){
    int data[LEN];
    int i, total = 0;

    for(i = 0; i < LEN; i++){
        data[i] = func01();
    }
    for(i = 0; i < LEN; i++){
        if(i == 0){ printf("%d", data[i]); }
        else { printf(" + %d", data[i]); }
        total += data[i];
    }
    printf(" = %d\n", total);
    return 0;
}

int func01(void){
    int d = 0;
    printf("数値を入力してください > ");
    scanf("%d", &d);
    return d;
}