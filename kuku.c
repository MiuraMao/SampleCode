#include <stdio.h>                   

int main(void)
{
    int i, j;                        /*九九の数字を表す整数*/
    for(j = 0; j < 9, j++;)
    {
        printf("%dの段", j+1);
        for(i = 0; i < 9; i++)
         {                          /*１段分を表示する*/
                printf("%d×%d=%2d", j+1, i+1, (j+1)*(i+1));
         }
        printf("\n");               /*１段分表示したら最後に改行する*/
    }
    return 0;
}