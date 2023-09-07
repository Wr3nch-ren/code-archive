#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printPathShortest(vector<int> path[], int s, int d){
    vector<int> p;
    p.push_back(d);
    while(p.back() != s){
        p.push_back(path[p.back()][0]);
    }
    reverse(p.begin(), p.end());
    cout << "Shortest Distance: " << p.size() - 1 << endl;
    cout << "Path = ";
    for(int i = 0; i < p.size(); i++){
        cout << p[i];
        if(i != p.size() - 1)
            cout << " > ";
    }
    cout << " :)";
}

int main(){
    int n,e;
    cin >> n >> e;
    vector<int> v[n];
    for(int i = 0; i < e; i++){
        int s,d;
        cin >> s >> d;
        v[s].push_back(d);
        v[d].push_back(s);
    }
    for(int i = 0; i < n; i++)
        sort(v[i].begin(), v[i].end(), greater<int>());
    int s,d;
    cin >> s >> d;
    bool visited[n];
    for(int i = 0; i < n; i++)
        visited[i] = false;
    vector<int> q;
    vector<int> path[n];
    q.push_back(s);
    while(!q.empty()){
        int u = q.back();
        q.pop_back();
        if(u == d){
            printPathShortest(path, s, d);
            return 0;
        }
        visited[u] = true;
        for(int i = 0; i < v[u].size(); i++)
            if(!visited[v[u][i]]){
                q.push_back(v[u][i]);
                path[v[u][i]].push_back(u);
            }
    }
    cout << "404: Path not found :(";
    return 0;
}