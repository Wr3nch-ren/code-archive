#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct eatList
{
    char menuName[20];
    struct eatList *next;
};

void addMenu(struct eatList *head, char menuName[])
{
    struct eatList *newNode = (struct eatList *)malloc(sizeof(struct eatList));
    strcpy(newNode->menuName, menuName);
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        struct eatList *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void showMenu(struct eatList *head)
{
    int i = 1;
    printf("<< Menu >>\n");
    struct eatList *temp = head->next;
    while (temp != NULL)
    {
        printf("%d. %s\n",i, temp->menuName);
        temp = temp->next;
        i++;
    }
}

void deleteMenu(struct eatList *head, int menuNumber)
{
    struct eatList *temp = head->next;
    struct eatList *prev = head;
    int i = 1;
    while (temp != NULL)
    {
        if (i == menuNumber)
        {
            prev->next = temp->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
        i++;
    }
}

int main(){
    struct eatList *head = (struct eatList *)malloc(sizeof(struct eatList));
    char input[20];
    while(1){
        scanf("%s", input);
        if(strcmp(input, "add") == 0){
            char menuName[20];
            scanf("%s", menuName);
            addMenu(head, menuName);
        }
        else if(strcmp(input, "del") == 0){
            int menuNumber;
            scanf("%d", &menuNumber);
            deleteMenu(head, menuNumber);
        }
        if(strcmp(input, "show") == 0){
            showMenu(head);
        }
        if(strcmp(input, "exit") == 0){
            showMenu(head);
            break;
        }
    }
}