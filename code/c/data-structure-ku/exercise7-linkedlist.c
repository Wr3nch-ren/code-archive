#include <stdio.h>
#include <stdlib.h>

struct Node {
    int num;
    struct Node *next;
};

void addNode(struct Node *first, int num) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->num = num;
    newNode->next = first->next;
    first->next = newNode;
}

void main() {
    struct Node* first = NULL;
    struct Node* last = NULL;

    first = (struct Node*)malloc(sizeof(struct Node));
    last = (struct Node*)malloc(sizeof(struct Node));

    first->num = 1;
    first->next = last;

    last->num = 5;
    last->next = NULL;

    addNode(first, 3);
}