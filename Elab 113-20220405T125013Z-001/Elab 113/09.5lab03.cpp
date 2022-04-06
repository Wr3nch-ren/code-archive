#include <iostream>
using namespace std;

int main(){
    int n, n_shirt, max = 0, k = 0;
    cin >> n;
    int prisoner[n];

    for (int i = 0; i < n; i++){
        cin >> n_shirt;
        prisoner[i] = n_shirt;
    }
    
    for(int i = 0; i < n; i++){
        if(prisoner[i] > max){
            max = prisoner[i];
        }
    }
    
    int missing[max];
    for(int i = 0; i <= max; i++){
        missing[i] = 0;
        // printf("i = %d\n",i);
    }

    for(int i = 1 ; i <= max; i++){
        // cout << "--------------------" << endl;
        // cout << i << endl;
        int count = 0;
        for(int j = 0; j < n; j++){
            // cout << "now = " << prisoner[j] << endl;
            count++;
            if (i == prisoner[j]){
                break;
            }
        if (count == n){
            // cout << "k = " << k << endl;
            missing[k] = i;
            // cout << "missing " << missing[k] << endl;
            k++;
        }
        }
    }
    
    for(int i = 0; i < max; i++){
        if (missing[i] % 2 != 0)
            cout << missing[i] << " ";
    }
        cout << endl;

    for(int i = 0; i < max; i++){
        if (missing[i] % 2 == 0 && missing[i] != 0)
            cout << missing[i] << " "; 
    }
}