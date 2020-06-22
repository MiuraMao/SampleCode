#include <stdio.h>

int main(void){
    int d, datanum = 0, i;
    int data[5];
    int *p = data;            //配列の要素を指すポインタ

    do{
        d = 0;
        printf("整数を入力 > ");
        scanf("%d", &d);
        for(p = &data[datanum]; p > data; p--){
            if(*(p-1) > d){ *p = *(p-1);}
                    else{ break; }
        }
        *p = d;
        datanum++;
    }while(datanum < 5);

    for(i = 0; i < datanum; i++){
        printf("%d ", data[i]);
    }
    return 0;
}