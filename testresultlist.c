#include <stdio.h>

int main(void){
    typedef struct {
        int id;
        char name[20];
        int result[5];
    }test;
    int i, j, k;

    test testrlt[3] = {{ 2012001, "Yamada Hanako", { 90, 95, 82, 93, 77}},
                      { 2012002, "Tanaka Ichiro", { 88, 95, 96, 100, 92}},
                      { 2012003, "Suzuki Jiro", { 62, 79, 77, 83, 93}}};
    for(i = 0; i < 5; i++){
        for(j = 0, k = 0; j < 3; j++){
            if(testrlt[j].result[i] == testrlt[k].result[i]) { k = j;}
        }
        for(j = 0; j < 3; j++){
            if(testrlt[j].result[i] == testrlt[k].result[i]){
                printf("%d回目 最高点：%3d 学籍番号：%d 名前：%s\n", 
                i+1, testrlt[j].result[i], testrlt[j].id, testrlt[j].name);
            }
        }
    }
    return 0;
}