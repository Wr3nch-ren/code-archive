#include <stdio.h>
#include <stdlib.h>

int main(){
    char n_str[5];
    int n,result_i = 0,result_j = 0,result_k = 0;
    fgets(n_str,5,stdin);
    n = atoi(n_str);
    for (int i = 1; i < n/2; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if(i*i + j*j == (n-i-j)*(n-i-j)){
                result_i = i;
                result_j = j;
                result_k = (n-i-j);
                break;
            }
        }
    }
    if(result_i==0 || result_j==0 || result_k==0){
        printf("No triple found.");
    }else
        printf("(%d, %d, %d)",result_j,result_i,result_k);
}