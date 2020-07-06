#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    FILE *fp;   //読み込みファイルのファイルポインタ
    char *file;
    char buff[8];
    int c = 0, size = 0;

    if(argc > 1){ file = argv[0]; } 
    else{ printf("ファイル名を指定してください\n"); exit(1); }
    if((fp = fopen(file, "rb")) == NULL){   
//読み込みファイルオープン
        printf("読み込みファイルオープンエラー\n");
        exit(1);
    }

    //ファイルの読み込み
    while ((c = fread(buff, sizeof(char), 8, fp)) != 0){
        size += sizeof(char) * c;
    }
    fclose(fp);
    printf("ファイルサイズ：%dバイト\n", size);
    return 0;
}