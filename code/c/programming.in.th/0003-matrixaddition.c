#include <stdio.h>

int main(){
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int arrayA[n1][n2],arrayB[n1][n2];
    for(int i = 0;i<n1;i++){
        for(int j=0;j<n2;j++){
            scanf("%d",&arrayA[i][j]);
        }
    }
    for(int i = 0;i<n1;i++){
        for(int j=0;j<n2;j++){
            scanf("%d",&arrayB[i][j]);
        }
    }
    for(int i = 0;i<n1;i++){
        for(int j=0;j<n2;j++){
            printf("%d ",arrayA[i][j]+arrayB[i][j]);
        }
        printf("\n");
    }
}