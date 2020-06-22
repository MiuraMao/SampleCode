#include <stdio.h>

double triangle(int w, int h){
    return (double)(w * h)/2;
}
int rectangle(int w, int h){
    return w * h;
}
int square(int w){
    return w * w;
}

int main(void){
    int width = 5;
    int height = 3;

    printf("底辺%d 高さ%d 三角形の面積：%f\n", width, height, triangle(width, height));
    printf("長さ%d 高さ%d 長方形の面積：%d\n", width, height, rectangle(width, height));
    printf("一辺%d 正方形の面積：%d\n", width, square(width));
    return 0;
}