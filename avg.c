#include <stdio.h>

int main(void){
    int data[] = { 75, 80, 96, 56, 89 };
    int i, total = 0;

    for(i = 0; i < 5; i++){
        printf("%d ", data[i]);
        total += data[i];
    }
    printf("の平均は %f\n", (double)total/5);
    return 0;
}