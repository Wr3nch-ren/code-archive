#include <iostream>
using namespace std;

void append_node(int* nodes,int* n_nodes,char node) {

    bool isDup = false;
    for(int i = 0;i < *n_nodes;i++){
        if(nodes[i] == (int)node) isDup = true;
    }
    if(!isDup){
        nodes[*n_nodes] = (int)node;
        *n_nodes = *n_nodes + 1;
    }

}

int main() {

    int nodes[200];
    int adj[200][200];
    int mst[200][200];
    int prim_arr[200] = {0};

    int n,n_nodes = 0;
    char start;

    cin >> n >> start;

    for(int i = 0;i < n;i++){

        int dist;
        char s,t;

        cin >> s >> dist >> t;
        append_node(nodes,&n_nodes,s);
        append_node(nodes,&n_nodes,t);
        
        adj[s][t] = dist;
        adj[t][s] = dist;
    }

    for(int i = 0;i < n_nodes;i++){

        prim_arr[start] = -1;
        
        int shortest_path = 99999;
        char next;

        for(int j = 0;j < n_nodes;j++){
            int selected = nodes[j];
            if(prim_arr[j] != -1){
                if( ((adj[start][selected] < adj[selected][prim_arr[selected]]) && adj[start][selected] != 0)  
                || (adj[start][selected] != 0 && prim_arr[selected] == 0)) {
                    prim_arr[selected] = start;
                   }
                if(adj[selected][prim_arr[selected]] < shortest_path && adj[selected][prim_arr[selected]] != 0){
                    shortest_path = adj[selected][prim_arr[selected]];
                    next = selected;
                }
            }
        }   

        mst[next][prim_arr[next]] = adj[next][prim_arr[next]];
        mst[prim_arr[next]][next] = adj[prim_arr[next]][next];
        start = next;
    }

    for(int i = 65;i < 123;i++){
        for(int j = 65;j < 123;j++){
            if(mst[j][i] != 0) {
                cout << (char)i << " " << mst[j][i] << " " << (char)j << endl;
                mst[i][j] = 0;
                mst[j][i] = 0;
            }
        }
    }

}