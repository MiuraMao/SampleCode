#include <stdio.h>

int main(void){
    char data[3][6] = { "abcd", "12345", "efg" };
    int i, j;

    for(j = 0; j < 3; j++){
        for(i = 0; i < 6; i++){
            if(data[j][i] == '\0'){ break; }
        }
        printf("data[%d] 文字列の長さ：%d 文字列：%s\n", j, i, data[j]);
    }
    return 0;
}