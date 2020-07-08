#include <stdio.h>
#include "main.h"

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