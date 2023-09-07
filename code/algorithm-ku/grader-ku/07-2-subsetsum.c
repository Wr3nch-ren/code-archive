#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int n = 0,m = 0;

    int t[100][100];
    int num[100];

    char input[1000];

    fgets(input, 1000, stdin);

    
    char *token = strtok(input, " ");
    
    while(token != NULL){
        int k = atoi(token);
        num[n] = k;
        n++;
        token = strtok(NULL, " ");
    }

    scanf("%d",&m);

    for(int i = 0;i < n;i++){
        for(int j = 0;j <= m;j++){
            if(i == 0) t[i][j] = (j == 0 || num[i] == j) ? 1 : 0;
            else t[i][j] = (t[i-1][j] == 1 || t[i-1][j-num[i]] == 1) ? 1 : 0;
        }
    }

    if(t[n-1][m] == 1) printf("Yes");
    else printf("No");
    

}