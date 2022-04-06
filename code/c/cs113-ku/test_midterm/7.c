#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,j=0,tmp,tmp2;
    scanf("%d",&n);
    int *array = calloc(n,sizeof(int));
    for(int i=0;i<n;++i){
        scanf("%d",&tmp2);
        array[i] = tmp2;
    }
    tmp = array[j];
    while(array[j+1]){
        if(array[j+1]<array[j]){
            array[j] = array[j+1];
            array[j+1] = tmp;
            --j;
        }
        ++j;
    }
    printf("DEBUG MODE:\n");
    for(int k=0;array[k];++k){
        printf("%d\n",array[k]);
    }
}