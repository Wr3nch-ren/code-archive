#include <iostream>
#include <cstdlib>

int* process(int a[]){
    int arraySize = sizeof(*a)/sizeof(a[0]);
    int newarraySize = 2*arraySize-1;
    int *newarray = (int *)calloc(newarraySize, sizeof(int));
    int array_index = 0;
    for(int i = 0;i<arraySize-1;i++){
        newarray[array_index] = a[i];
        array_index++;
        newarray[array_index] = abs(a[i+1]-a[i]);
        array_index++;
    }
    newarray[array_index] = a[arraySize-1];
    return newarray;
}

int main(){
    int array_size;
    int numtoarray;
    std::cout << "Enter number of integers: ";
    std::cin >> array_size;
    int array[array_size];
    std::cout << "Enter a list of integers: ";
    for(int i = 0;i < array_size;i++){
        std::cin >> numtoarray;
        array[i] = numtoarray;
    }
    std::cout << "New list of integers: ";
    
    int* newarray = process(array);
    
    for(int j = 0; j < 2*array_size-1; j++){
        printf("%d ", newarray[j]);
    }
}