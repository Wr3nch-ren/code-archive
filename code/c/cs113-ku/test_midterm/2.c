#include <stdio.h>
#include <stdlib.h>

int* make_it(int n, int d)
{
    int *array = (int *)malloc(sizeof(int)*n);
    int counter=0;
    for(int i = 1;i<=n;++i){
        if(i%d==0){
            array[counter]=i;
            ++counter;
        }
    }
    return array;
}

void print_array(int* array, int size);

int main()
{
    int n, d;
    scanf("%d %d", &n, &d);
    int* array = make_it(n, d);
    print_array(array, n / d);
}

void print_array(int* array, int size)
{
    for (int i = 0; i < size; ++i) {
        printf("%d,", array[i]);
    }
}