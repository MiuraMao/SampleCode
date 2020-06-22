#include <stdio.h>

int main(void) {
        typedef struct {
            int id;
            char name[20];
            int result[5];
        }test;
        int i, k;

        test testrlt = { 20122001, "Yamada Hanako4", { 80, 92, 82, 95, 77 }};
        for(i = 0, k = 0; i < 5; i++){
            if(testrlt.result[i] > testrlt.result[k]) { k = i;}
        }
        printf("学籍番号：%d 名前：%s 最高点：%d\n", testrlt.id, testrlt.name, testrlt.result[k]);
        return 0;
}