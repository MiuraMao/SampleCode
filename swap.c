#include <stdio.h>

int main(void){
    int a = 1, b = 2, tmp;
    int *pa, *pb;

    pa = &a;
    pb = &b;

    printf("aのアドレス：%p aの値%d bのアドレス%p bの値%d\n", pa, *pa, pb, *pb);
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
    printf("入替え後\n");
    printf("aのアドレス；%p aの値：%d bのアドレス%p bの値%d\n", pa, *pa, pb, *pb);
    return 0;
}