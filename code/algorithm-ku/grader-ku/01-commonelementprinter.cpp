#include <bits/stdc++.h>

using namespace std;

int main(){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int i = 0, j = 0;
    while(i < s1.length() && j < s2.length()){
        if(s1[i] == s2[j]){
            cout << s1[i];
            i++;
            j++;
        }
        else if(s1[i] < s2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return 0;
}