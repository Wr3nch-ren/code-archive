#include <bits/stdc++.h>

using namespace std;

class Graph{
    int V;
    list<int> *adj;
    bool isCyclicUtil(int v, bool visited[], bool *rs);
public:
    Graph(int V);
    void addEdge(int v, int w);
    bool isCyclic();
};

Graph::Graph(int V){
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w){
    adj[v].push_back(w);
}

bool Graph::isCyclicUtil(int v, bool visited[], bool *recStack){
    if(visited[v] == false){
        visited[v] = true;
        recStack[v] = true;
        list<int>::iterator i;
        for(i = adj[v].begin(); i != adj[v].end(); ++i){
            if(!visited[*i] && isCyclicUtil(*i, visited, recStack))
                return true;
            else if(recStack[*i])
                return true;
        }
    }
    recStack[v] = false;
    return false;
}

bool Graph::isCyclic(){
    bool *visited = new bool[V];
    bool *recStack = new bool[V];
    for(int i = 0; i < V; i++){
        visited[i] = false;
        recStack[i] = false;
    }
    for(int i = 0; i < V; i++)
        if(isCyclicUtil(i, visited, recStack))
            return true;
    return false;
}

int main(){
    int n,e;
    cin >> n >> e;
    Graph g(n);
    for(int i = 0; i < e; i++){
        int a,b;
        cin >> a >> b;
        g.addEdge(a,b);
    }
    if(g.isCyclic())
        cout << "Graph contains cycle";
    else
        cout << "Graph doesn't contain cycle";
    return 0;
}