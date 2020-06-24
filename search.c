#include <stdio.h>
#include <string.h>

int main(void){
    char *list[] = { "dog", "cat", "rabbit", "panda", "penghin", "bear" };
    char key[10];
    int i;

    printf("動物名を入力 > ");
    gets(key);
    for(i = 0; i < 6; i++){
        if(strcmp(list[i], key) == 0){ break; }
    }
    if(i == 6){ printf("%sはリストにありません\n", key); }
    else{ printf("%sはリストの%d番目にあります\n", key, i+1); }
    return 0;
}