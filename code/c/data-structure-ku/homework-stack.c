#include <stdio.h>
#include <stdlib.h>
struct Stack {
    char data;
    struct Stack* next;
};


void push(struct Stack** s, int x) {
    struct Stack *new_node = (struct Stack*)malloc(sizeof(struct Stack));
    new_node->data = x;
    new_node->next = (*s);
    (*s) = new_node;
}

int pop(struct Stack **s){
    char r;
    struct Stack *top;
    top =  (*s);
    r = top->data;
    (*s) = top->next;
    free(top);
    return r;
}

int checkMatch(char c1, char c2){
    if((c1 == '(' && c2 == ')')||(c1 == '{' && c2 == '}')||(c1 == '[' && c2 ==']')){
        return 1;
    }
    return 0;
}

int checkBalance(char a[]){
    int i = 0;

    struct Stack* stack = NULL;

    while (a[i]) {
        if (a[i] == '{' || a[i] == '(' || a[i] == '['){
            push(&stack, a[i]);
        }
        if (a[i] == '}' || a[i] == ')' || a[i] == ']'){
            if(stack == NULL)
                return 0;
            else if (!checkMatch(pop(&stack), a[i]))
                return 0;
        }
        i++;
    }
    if(stack==NULL)
        return 1;
    return 0;
}

int main(){
    char input[100];
    scanf("%s",input);
    if(checkBalance(input))
        printf("Yes");
    else
        printf("No");
    return 0;
}