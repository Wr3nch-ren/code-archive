// C++ program to print BFS traversal from a given vertex in a given graph
#include<iostream>
#include<list>
using namespace std;
// Graph class represents a undirected graph using adjacency list
// representation
class Graph
{
	int V; // No. of vertices
	list<int>* adj; // Pointer to an array containing adjacency lists
public:
	Graph(int V); // Constructor
	void addEdge(int v, int w); // Function to add an edge to graph
	void BFSVisit(int s, int f); // BFS traversal of the vertices reachable from s
};
Graph::Graph(int V)
{
	this->V = V;
	adj = new list<int>[V];
}
void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w); // Add w to v’s list
	adj[w].push_back(v); // Add v to w’s list
}

// BFS traversal of the vertices reachable from s
void Graph::BFSVisit(int s, int f)
{
	// Mark all the vertices as not visited
	bool* visited = new bool[V];
	for (int i = 0; i < V; i++)
		visited[i] = false;
	// Create a queue for BFS
	list<int> queue;
	// Mark the current node as visited and enqueue it
	visited[s] = true;
	queue.push_back(s);
	// 'i' will be used to get all adjacent vertices of a vertex u
	list<int>::iterator i;
	int u;
	while (!queue.empty()) {
		// Dequeue a vertex from queue and print it
		u = queue.front();
		if (u == f) {
			cout << "YES";
			return;
		}
		queue.pop_front();
		// Get all adjacent vertices of the dequeued vertex u. If a adjacent has not been visited,
		// then mark it visited and enqueue it
		for (i = adj[u].begin(); i != adj[u].end(); ++i) {
			if (!visited[*i]) {
				visited[*i] = true;
				queue.push_back(*i);
			}
		}
	}
	cout << "NO";
}

int main()
{
	Graph g(64);
	//column 0
	//vertical
	g.addEdge(0, 1);
	g.addEdge(1, 2);
	g.addEdge(2, 3);
	g.addEdge(3, 4);
	g.addEdge(4, 5);
	g.addEdge(5, 6);
	g.addEdge(6, 7);
	//horizontal
	g.addEdge(0, 8);
	g.addEdge(1, 9);
	g.addEdge(2, 10);
	g.addEdge(7, 15);

	//column 1
	//vertical
	g.addEdge(11, 12);
	g.addEdge(12, 13);
	g.addEdge(13, 14);
	g.addEdge(14, 15);
	//horizontal
	g.addEdge(8, 16);
	g.addEdge(9, 17);
	g.addEdge(10, 18);
	g.addEdge(13, 21);

	//column 2
	//vertical
	g.addEdge(16, 17);
	g.addEdge(19, 20);
	g.addEdge(22, 23);
	//horizontal
	g.addEdge(18, 21);
	g.addEdge(21, 29);
	g.addEdge(22, 30);
	g.addEdge(23, 31);

	//column 3
	//vertical
	g.addEdge(24, 25);
	g.addEdge(25, 26);
	g.addEdge(26, 27);
	g.addEdge(27, 28);
	g.addEdge(29, 30);
	//horizontal
	g.addEdge(24, 32);
	g.addEdge(26, 34);
	g.addEdge(29, 37);
	g.addEdge(30, 38);
	g.addEdge(31, 39);

	//column 4
	//vertical
	g.addEdge(35, 36);
	//horizontal
	g.addEdge(33, 41);
	g.addEdge(34, 42);
	g.addEdge(36, 44);
	g.addEdge(37, 45);
	g.addEdge(38, 46);

	//column 5
	//vertical
	g.addEdge(42, 43);
	//horizontal
	g.addEdge(40, 48);
	g.addEdge(43, 51);
	g.addEdge(44, 52);
	g.addEdge(45, 53);
	g.addEdge(47, 55);

	//column 6
	//vertical
	g.addEdge(48, 49);
	g.addEdge(50, 51);
	g.addEdge(53, 54);
	g.addEdge(54, 55);
	//horizontal
	g.addEdge(49, 57);
	g.addEdge(52, 60);
	g.addEdge(55, 63);

	//column 7
	//vertical
	g.addEdge(56, 57);
	g.addEdge(57, 58);
	g.addEdge(58, 59);
	g.addEdge(59, 60);
	g.addEdge(60, 61);
	g.addEdge(61, 62);
	g.addEdge(62, 63);
	//horizontal

	cout << "Following is Breath-First Traversal (starting from vertex 0) \n";
	g.BFSVisit(0, 56);
	return 0;
}