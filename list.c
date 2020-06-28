#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct list {
    char data[20];
    struct list *next;
};

int main(void){
    struct list head, *p, *n, *f;
    char data[20];

    p = &head;
    p->next = NULL;

    while(scanf("%s", data) != EOF){
        if((n = (struct list *) malloc(sizeof(struct list))) == NULL){
            printf("メモリが確保できません\n");
            exit(-1);
        }
        strcpy(n->data, data);
        n->next = NULL;
        p->next = n;
        p = n;
    }
    for(p = head.next ; p!=NULL ; p=p->next){
        printf("%s\n", p->data);
    }

    p = head.next;
    while(p != NULL){
        f = p->next;
        free(p);
        p = f;
    }
    return 0;
}