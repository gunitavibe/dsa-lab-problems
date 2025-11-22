// Author: Gunita, Roll No. 241515

/*
   Program 20:
   Perform Breadth-First Search (BFS) traversal on a graph.
*/
#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n, e;
    cout << "Enter number of vertices: ";
    cin >> n;

    int adj[20][20] = {0};

    cout << "Enter number of edges: ";
    cin >> e;

    cout << "Enter edges (u v):\n";
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;  // remove for directed graph
    }

    int start;
    cout << "Enter starting vertex: ";
    cin >> start;

    int visited[20] = {0};
    queue<int> q;

    q.push(start);
    visited[start] = 1;

    cout << "BFS Traversal: ";

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        for (int i = 0; i < n; i++) {
            if (adj[node][i] == 1 && visited[i] == 0) {
                q.push(i);
                visited[i] = 1;
            }
        }
    }

    cout << endl;
    return 0;
}

