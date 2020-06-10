#include <stdio.h>

int main(void){
    char *animal[6] = { "dog", "cat", "rabbit", "panda", "penghin", "bear" };
    char *p;
    int i, left, right;

    for(left = 0, right = 5; left < right; left++, right--){
        p = animal[left];
        animal[left] = animal[right];
        animal[right] = p;
    }
    for(i = 0; i < 6; i++){
        printf("%p animal[%d] %s\n", &animal[i], i, animal[i]);
    }
    return 0;
}