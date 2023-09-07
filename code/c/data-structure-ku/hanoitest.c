#include <stdio.h>
#include <stdlib.h>
#define N 3
//make array stack
typedef struct stack{
    int *data;
    int top;
    int capacity;
}stack;

void init(stack *s,int capacity){
    s->data = (int *)malloc(capacity*sizeof(int));
    s->top = -1;
    s->capacity = capacity;
}

void push(stack *s,int x){
    if(s->top == s->capacity-1){
        printf("stack is full");
        return;
    }
    s->top++;
    s->data[s->top] = x;
}

void pop(stack *s){
    if(s->top == -1){
        return;
    }
    s->top--;
}

void print(stack *s){
    if(s->top == -1){
        return;
    }
    for(int i = s->top ; i >= 0 ; i--){
        printf("%d ",s->data[i]);
    }
    printf("\n");
}

void move(int n, stack *src, stack *dst, stack *aux){
    if(n==1){
        print(src);
        print(dst);
        print(aux);
        printf("move %d from %c to %c\n",n,src->data[src->top],dst->data[dst->top]);
    }
    else{
        move(n-1,src,aux,dst);
        print(src);
        print(dst);
        print(aux);
        printf("move %d from %c to %c\n",n,src->data[src->top],dst->data[dst->top]);
        move(n-1,aux,dst,src);
    }

}

void hanoi(int n){
    stack s1,s2,s3;
    init(&s1,n);
    init(&s2,n);
    init(&s3,n);
    for(int i = n ; i > 0 ; i--){
        push(&s1,i);
    }
    move(n,&s1,&s2,&s3);
}

int main(){
    hanoi(N);
    return 0;
}
