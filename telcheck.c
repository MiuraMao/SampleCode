#include <stdio.h>
#include <ctype.h>

int main(void){
    char tel[15];
    char checknum[15];
    int i, j, check = 1;


    printf("電話番号を入力 > ");
    gets(tel);
    for(i = 0, j = 0; i < 15 && tel[i] != '\0'; i++){
        if(isdigit(tel[i])){ checknum[j++] = tel[i]; }
        else if (!isspace(tel[i]) && (tel[i] != '-')){
            check = 0;
            break;
        }
    }
    if(check == 1){
        checknum[j] = '\0';
        printf("電話番号：%s\n", checknum);
    } else { printf("電話番号が正しくありません\n");}
    return 0;
}