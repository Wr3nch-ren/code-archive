#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    // convert to array of int
    vector<int> arr;
    stringstream ss(s);
    int i;
    while (ss >> i) {
        arr.push_back(i);
    }
    // sort
    sort(arr.begin(), arr.end());
    // print
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if (i != arr.size() - 1) {
            cout << " ";
        }
    }
    return 0;
}