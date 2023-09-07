#include <bits/stdc++.h>

using namespace std;

int main(){
    //recieve coin types in one line
    string s1;
    getline(cin, s1);
    //split coin types
    stringstream ss(s1);
    string temp;
    vector<int> coins;
    while(getline(ss, temp, ' ')){
        coins.push_back(stoi(temp));
    }
    //check if coin types are not negative
    for(int i = 0; i < coins.size(); i++){
        if(coins[i] < 0){
            cout << "Just because a thing can be done, does not mean that it should be done." << endl;
            return 0;
        }
    }
    //recieve number of money
    int money;
    cin >> money;
    //sort coin types
    sort(coins.begin(), coins.end());
    //reverse coin types
    reverse(coins.begin(), coins.end());
    //output coin types and number of coins for each type
    if(money >= 0){
        for(int i = 0; i < coins.size(); i++){
            cout << coins[i] << ": " << money / coins[i] << endl;
            money %= coins[i];
        }
    }
    if(money > 0){
        cout << "Change: " << money << endl;
    }
    return 0;
}