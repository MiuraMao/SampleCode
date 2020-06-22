#include <stdio.h>
#include <stdlib.h>

void rconvert(int d, int rdx, char str[9]){
    int i;
    char code[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    str[8] = '\0';
    for (i = 7; i >= 0; i--){
        str[i] = code[d % rdx];
        d /= rdx;
   }
}

int main(int argc, char* argv[]){
    int d = 0, rdx = 2;
    char str[9];

    if(argc > 2 ){
        rdx = atoi(argv[1]);
        d = atoi(argv[2]);
    }else if(argc > 1){
        d = atoi(argv[1]);
    }
    if((rdx == 2) || (rdx == 8) || (rdx == 16)){
        rconvert(d, rdx, str);
        printf("%s\n", str);
    }
    return 0;
}