/*#include <iostream>
#include <vector>
#include <queue>
#include <set>
*/
#include<bits/stdc++.h>

using namespace std;

// Graph represented as an adjacency list
class Graph {
public:
    int vertices;
    vector<vector<int>> adjacencyList;

    Graph(int v) : vertices(v), adjacencyList(v) {}

    void addEdge(int source, int destination) {
        adjacencyList[source].push_back(destination);
        adjacencyList[destination].push_back(source); // For undirected graph
    }

    void bfs(int startVertex) {
        vector<bool> visited(vertices, false);
        queue<int> q;

        visited[startVertex] = true;
        q.push(startVertex);

        while (!q.empty()) {
            int currentVertex = q.front();
            cout << currentVertex << " ";
            q.pop();

            for (int neighbor : adjacencyList[currentVertex]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
    }
};

int main() {
    int vertices, edges;
    cout << "Enter the number of vertices and edges: ";
    cin >> vertices >> edges;

    Graph graph(vertices);

    cout << "Enter the edges (source destination):" << endl;
    for (int i = 0; i < edges; ++i) {
        int source, destination;
        cin >> source >> destination;
        graph.addEdge(source, destination);
    }

    int startVertex;
    cout << "Enter the starting vertex for BFS: ";
    cin >> startVertex;

    cout << "Breadth-First Traversal starting from vertex " << startVertex << ":" << endl;
    graph.bfs(startVertex);

    return 0;
}