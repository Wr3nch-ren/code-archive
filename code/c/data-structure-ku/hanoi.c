#include <stdio.h>
#include <stdlib.h>

//convert python code to c code
//A = [2,1,0]
//B = []
//C = []
//def move(n,source,target,auxiliary):
//    if n > 0:
//        move(n-1,source,auxiliary,target)
//        target.append(source.pop())
//        print(A,B,C,sep='\n')
//        move(n-1,auxiliary,target,source)
//move(3,A,C,B)

int A[3] = {2,1,0};
int B[3];
int C[3];

void move(int n,int source[],int target[],int auxiliary[]){
    if (n > 0){
        move(n-1,source,auxiliary,target);
        //target.append(source.pop())
        target[n-1] = source[n-1];
        source[n-1] = 0;
        printArray(A,B,C);
        move(n-1,auxiliary,target,source);
    }
}

void printArray(int A[],int B[],int C[]){
    printf("\ntower A:");
    for(int i = 0 ; i != 3 ; i++){
        printf(" %d",A[i]);
    }
    printf("\ntower B:");
    for(int i = 0 ; i != 3 ; i++){
        printf(" %d",B[i]);
    }
    printf("\ntower C:");
    for(int i = 0 ; i != 3 ; i++){
        printf(" %d",C[i]);
    }
}

int main(){
    printf("Start");
    printArray(A,B,C);
    move(3,A,C,B);
}


