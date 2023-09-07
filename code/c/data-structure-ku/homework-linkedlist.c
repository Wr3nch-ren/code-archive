#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int num;
    struct node *next;
}Node;

typedef struct linked_list {
    int length;
    Node *head;
}NumList;

Node *newNode(){
    Node *p;
    p = (Node *)malloc(sizeof(Node));
    p->next = NULL;
    return p;
}

void initList(NumList *n) {
    n->head = NULL;
}

void insertEnd(NumList *s, Node *p) {
    if (s->head == NULL) {
        s->head = p;
    } else {
        Node *last = s->head;
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = p;
    }
}

void printNumList(NumList L){
    Node *pCurr = L.head;

    while (pCurr != NULL) {
        printf("Num: %d\n", pCurr->num);
        pCurr = pCurr->next;
    }
}

int main(){
    NumList NL;
    initList(&NL);
    for (int i = 0; i < 3; ++i) {
        Node *N = newNode();
        N->num = i;
        insertEnd(&NL,N);
    }

    printNumList(NL);
    return 0;
}