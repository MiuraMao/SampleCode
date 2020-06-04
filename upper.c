#include <stdio.h>

int main(void){
    char inputdata[20];
    char upperdata[20];
    int i = 0;

    printf("文字列を入力 > ");
    gets(inputdata);
    while(inputdata[i] != '\0'){
        if((inputdata[i] >= 'a') && (inputdata[i] <= 'z')){
            upperdata[i] = inputdata[i] - 32;
        }else {upperdata[i] = inputdata[i]; }
        ++i;
    }
    upperdata[i] = '\0';
    printf("入力文字列：%s 変換文字列：%s\n", inputdata, upperdata);
    return 0;
}