#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    char name[100];
    struct node *next;
}node;

static struct queue{
    node *head;
    node *tail;
}q;

void init_queue(){
    q.head = NULL;
    q.tail = NULL;
}

void enqueue(char *input){
    node *newnode = malloc(sizeof(node));
    newnode->next = NULL;
    char queuing[20]; 
    int j = 0;
    
    for (int i = 8; input[i] != '\0'; i++){
        queuing[j] = input[i];
        j++;
    }
    queuing[j] = '\0';
    strcpy(newnode->name, queuing);
    if (q.tail != NULL) {
        q.tail->next = newnode;
    }
    q.tail = newnode;
    if (q.head == NULL){
        q.head = newnode;
    }
}
void dequeue(){
    if (q.head == NULL)
        return;
    peek();
    node *tmp = q.head;
    q.head = q.head->next;
    free(tmp);
    if(q.head == NULL) {
        q.tail = NULL;
    }
}

void peek(){
    if(q.head->name != NULL){
        printf("%s",q.head->name);
    }
}
void checkEmpty(){
    if(q.head->name == NULL){
        printf("EmPTy\n");
    }
    else printf("nOT EmpTY\n");
}

int main(){
    init_queue();
    char input[20];
    while(1){
        fgets(input,20,stdin);
        if(input[0] == 'e' && input[1] == 'n' && input[2] == 'q'&&
            input[3] == 'u' && input[4] == 'e' && input[5] == 'u'&& input[6] == 'e'){
            enqueue(input);
        }
        else if(input[0] == 'd' && input[1] == 'e' && input[2] == 'q'&&
                input[3] == 'u'&& input[4] == 'e' && input[5] == 'u' && input[6] == 'e'){
            dequeue();
        }
        else if(input[0] == 'p' && input[1] == 'e' && input[2] == 'e' && input[3] == 'k'){
            peek();
        }
        else if(input[0] == 'e' && input[1] == 'm' && input[2] == 'p' && input[3] == 't' 
                && input[4] == 'y' && input[5] == '?'){
            checkEmpty();
        }
        else if(input[0] == 'e' && input[1] == 'x' && input[2] == 'i' && input[3] == 't'){
            break;
        }
    }
}