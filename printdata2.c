#include <stdio.h>

typedef struct {
    int id;
    char name[20];
} student;
int size = 3;

void printData(student data[]);

int main(void){
    student classA[] = {{ 2012001, "Yamada Hanako"},
    { 2012002, "Tanaka Iciro"},
    { 2012003, "Suzuki Jiro"}};
    printf("データ個数 %d\n", size);
    printData(classA);
    return 0;
}

void printData(student data[]){
    int i;
    for(i = 0; i < size; i++){
        printf("学籍番号：%d 名前：%s\n", data[i].id, data[i].name);
    }
}
