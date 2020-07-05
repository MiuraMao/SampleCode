#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *fp, *wfp;
    int c, s = 0, i;

    if((fp = fopen("tabtospace.c", "r")) == NULL){
                printf("ファイルオープンエラー \n");
        exit(1);
    }
    if((wfp = fopen("tabtospace_.c", "w")) == NULL){
        printf("ファイルオープンエラー \n");
        exit(1);
    }

    while((c = fgetc(fp)) != EOF){
        switch (c){
            case ' ':   s++;
                        break;
            case '\t':  s += 4;
                        break;
            case '\n':  fputc(c, wfp);
                        s = 0;
                        break;
            default:    if(s > 0){
                            for(i = 0; i < s; i++)  fputc(' ', wfp);
                            s = 0;
                        }
                        fputc(c, wfp);
                        break;
        }
    }
    fclose(fp);
    fclose(wfp);
    return 0;
}