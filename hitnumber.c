#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    int hit;
    int d = -1, count = 0;
    srand(time(NULL));
    hit = rand() % 10;

    while(d != hit)
    {
        printf("0～9のどれかを入力 > ");
        scanf("%d", &d);
        while (getchar() != '\n'){}
        count++;
    }
    printf("%d回目で当たり！\n", count);
    return 0;
}