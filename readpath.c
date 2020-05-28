#include <stdio.h>

int main(void)
{
    int c;

    printf("パスを入力 > ");
    c = getchar();
    switch (c)
    {
    case '.':     printf("相対パスです\n");
                  break;
    case '\\':    printf("絶対パスです\n");
                  break;
    default:      c = getchar();
                  if(c == ':') printf("絶対パスです\n");
                  else printf("相対パスです");
                  break;
    }
    return 0;
}