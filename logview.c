#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *fp;
    char str[256];
    int c, year, month, day, hour, min, sec;
    char name[10];
    char comment[200];

    if((fp = fopen("log.txt", "r")) == NULL){
        printf("ファイルオープンエラー\n");
        exit(1);
    }

    while(fgets(str, 256, fp)){
        c = sscanf(str, "%04d%02d%02d%02d%02d%02d %s %s\n",
                &year, &month, &day, &hour, &min, &sec, name, comment);
        if(c == 8){
            printf("%10s> %s [%04d年%02d月%02d日 %02d:%02d:%02d]\n",
                name, comment, year, month, day, hour, min, sec);
        }
    }
    fclose(fp);
    return 0;
}