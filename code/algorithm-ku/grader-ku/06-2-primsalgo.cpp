#include <bits/stdc++.h>

using namespace std;

int main(){
    int villages, roads, start;
    cin >> villages >> roads >> start;
    if (start < 1 || start > villages){
        cout << "What did you expect?";
        return 0;
    }
    vector<vector<int>> graph(villages+1, vector<int>(villages+1, 0));
    for (int i = 0; i < roads; i++){
        int v1, v2, dist;
        cin >> v1 >> v2 >> dist;
        if (v1 < 1 || v1 > villages || v2 < 1 || v2 > villages){
            cout << "What did you expect?";
            return 0;
        }
        graph[v1][v2] = dist;
        graph[v2][v1] = dist;
    }
    vector<int> key(villages+1, INT_MAX);
    vector<bool> mst(villages+1, false);
    key[start] = 0;
    for (int i = 0; i < villages; i++){
        int min = INT_MAX, min_index = 0;
        for (int j = 1; j <= villages; j++){
            if (mst[j] == false && key[j] < min){
                min = key[j];
                min_index = j;
            }
        }
        mst[min_index] = true;
        for (int j = 1; j <= villages; j++){
            if (graph[min_index][j] != 0 && mst[j] == false && graph[min_index][j] < key[j]){
                key[j] = graph[min_index][j];
            }
        }
    }
    int sum = 0;
    for (int i = 1; i <= villages; i++){
        sum += key[i];
    }
    cout << sum;
    return 0;
}