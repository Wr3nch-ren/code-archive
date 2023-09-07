#include <iostream>
#include <vector>
using namespace std;

float* bubble_sort(float arr[], int n){
    float* sorted_array = new float[n];
    copy(arr, arr+n, sorted_array);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            if(sorted_array[j] > sorted_array[j+1]){
                swap(sorted_array[j], sorted_array[j+1]);
            }
        }
    }
    return sorted_array;
}

int main(){
    int x, y;
    cin >> x;
    cin >> y;
    if ((x + y) > 0){
        float arr[(x+y)];
        float num;
    
        for(int i = 0; i < x; i++){
            cin >> num;
            arr[i] = num;
        }
        for(int i = 0; i < y; i++){
            cin >> num;
            arr[x+i] = num;
        }
        float* sorted_array = bubble_sort(arr, x+y);
        if((x+y)%2 != 0){
            int index = ((x+y-1)/2);
            cout << arr[index];
        }
        else{
            int index = ((x+y)/2)-1;
            cout << (arr[index]+arr[index+1])/2;
        }
    }
    return 0;
}