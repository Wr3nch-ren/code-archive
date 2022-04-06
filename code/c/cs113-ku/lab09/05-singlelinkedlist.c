//WARNING! This entire code is Doubly Linked List not Single Linked List

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int value;
    struct node *next;
    struct node *prev;
} node;


void printList(node *pList) {
    struct node *tmp;

    for (tmp = pList; tmp; tmp=tmp->next)
        printf("%d ", tmp->value);
    printf("\n");

}

void
 insertNode(
node **pList, int input
) {
    node *new_node, *prev, *tmp;
    
    new_node = (node *)malloc(sizeof(node));
    new_node->value = input;
    new_node->prev = new_node->next = NULL;

    if (*pList == NULL){
        *pList = new_node;
    }

    else if ((*pList)->value >= new_node->value){
        new_node->next = *pList;
        (*pList)->prev = new_node;
        *pList = new_node;
    }
    else {
        for (tmp = *pList; tmp && tmp->value < new_node->value; tmp=tmp->next)
            prev = tmp;
        if (tmp){
            new_node->prev = prev;
            new_node->next = tmp;
            tmp->prev = prev->next = new_node;
        }
        else{
            new_node->prev = prev;
            new_node->next = prev->next;
            prev->next = new_node;
        }
    }


}

int main() {
  int i, value;
  node *pList=NULL;

  for (i = 0; i < 10; i++) {
    scanf(" %d", &value);
    
insertNode(&pList, value);

  }

  printList(pList);
}