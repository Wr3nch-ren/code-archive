#include <iostream>
using namespace std;

int main() {
    int x,counter = 0;
    cin >> x;
    while (x!=0){
        counter++;
        if(x%2 != 0){
            x--;
        }else if(x%2 == 0){
            x/=2;
        }
    }
    cout << counter;

}