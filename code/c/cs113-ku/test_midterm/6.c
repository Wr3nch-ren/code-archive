#include <stdio.h>

void exchange_int(int *x,int *y,int size){
    int tmp[size],tmp2[size];
    for(int i = 0; i <size ; ++i){
        tmp[i]=*(x+i);
        tmp2[i]=*(y+i);
    }
    for(int i = 0; i <size ; ++i){
        *(x+i) = tmp2[i];
        *(y+i) = tmp[i];
    }
}

void print_array(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int x = 1;
    int y = 2;
    int arr_x[] = {1, 2, 3, 4, 5};
    int arr_y[] = {6, 7, 8, 9, 10};

    exchange_int(&x, &y, 1);
    printf("%d %d\n", x, y);
    // ผลลัพธ์ที่แสดงคือ
    // 2 1

    exchange_int(arr_x, arr_y, 5);
    print_array(arr_x, 5);
    // ผลลัพธ์ที่แสดงคือ
    // 6 7 8 9 10

    print_array(arr_y, 5);
    // ผลลัพธ์ที่แสดงคือ
    // 1 2 3 4 5
}