#include <stdio.h>
#include <time.h>

void fibonacci(int n){
    unsigned long long int a = 0, b = 1, c = 0;
    if (n == 1){
        printf("%llu\n",a);
    }
    else if (n == 2){
        printf("%llu\n",b);
    }
    else if (n > 2){
        printf("%llu\n",a);
        printf("%llu\n",b);
        for (int i = 2; i < n; i++){
            c = a + b;
            printf("%llu\n",c);
            a = b;
            b = c;
        }
    }
}

int main(){
    int n;
    clock_t start, end;
    double cpu_time_used;
    start = clock();
    scanf("%d", &n);
    fibonacci(n);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Used time: %f", cpu_time_used);
}
