#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,e;
    cin >> n >> e;
    vector<int> v[n];
    for(int i = 0; i < e; i++){
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
    }
    int a,b;
    cin >> a >> b;
    bool visited[n];
    for(int i = 0; i < n; i++)
        visited[i] = false;
    vector<int> q;
    q.push_back(a);
    while(!q.empty()){
        int x = q.back();
        q.pop_back();
        if(x == b){
            cout << "True";
            return 0;
        }
        visited[x] = true;
        for(int i = 0; i < v[x].size(); i++)
            if(!visited[v[x][i]])
                q.push_back(v[x][i]);
    }
    cout << "False";
    return 0;
}