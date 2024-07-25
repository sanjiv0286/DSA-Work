// *** Adjacency list for undirected graph  : using vector of array and vector of vector

#include <bits/stdc++.h>
using namespace std;

// Add edge
void addEdge(vector<vector<int>> &adj, int i, int j)
{
  adj[i].push_back(j);
  adj[j].push_back(i);
}

// Print the graph
void printGraph(vector<vector<int>> &adj, int V)
{
  for (int d = 0; d < V; ++d)
  {
    cout << "\nVertex "
         << d << " :-> ";
    for (auto &x : adj[d])
      cout << " " << x;
    // printf("\n");
  }
}

int main()
{
  int V = 5;

  // Create a graph
  vector<int> adj[V];
  // vector<vector<int>> adj(V);
  // Add edges
  addEdge(adj, 0, 1);
  addEdge(adj, 0, 2);
  addEdge(adj, 0, 3);
  addEdge(adj, 1, 2);
  addEdge(adj, 3, 4);
  addEdge(adj, 4, 1);
  addEdge(adj, 1, 3);
  addEdge(adj, 0, 4);
  printGraph(adj, V);
}

// * By taking input by the user : start vertex 0

// #include <iostream>
// #include <vector>
// using namespace std;

// // Add edge
// void addEdge(vector<vector<int>> &adj, int i, int j)
// {
//   adj[i].push_back(j);
//   adj[j].push_back(i);
// }

// // Print the graph
// void printGraph(vector<vector<int>> &adj, int V)
// {
//   for (int d = 0; d < V; ++d)
//   {
//     cout << "\nVertex " << d << " :-> ";
//     for (auto x : adj[d])
//       cout << " " << x;
//   }
// }

// int main()
// {
//   int V, E;
//   cin >> V;
//   cin >> E;

//   // Create a graph as a vector of vectors
//   vector<vector<int>> adj(V);

//   for (int e = 0; e < E; ++e)
//   {
//     int i, j;
//     cin >> i >> j;
//     // addEdge(adj, i, j);
//     adj[i].push_back(j);
//     adj[j].push_back(i);
//   }

//   // printGraph(adj, V);
//   for (int d = 0; d < V; ++d)
//   {
//     cout << "\nVertex " << d << " :-> ";
//     for (auto x : adj[d])
//       cout << " " << x;
//   }

//   return 0;
// }

// ***********************************************************************
/*
 *If you want to modify your code to start the vertex numbering from 1 instead of 0,
 *you can make a few changes.In C++, arrays and vectors are 0 - based,
 *so you 'll need to shift the vertex indices accordingly. Here' s the modified code :
 */
// *************************** starting vertex 1 **************************

// #include <iostream>
// #include <vector>
// using namespace std;

// // Add edge
// void addEdge(vector<vector<int>> &adj, int i, int j)
// {
//   adj[i].push_back(j);
//   adj[j].push_back(i);
// }

// // Print the graph
// void printGraph(vector<vector<int>> &adj, int V)
// {
//   for (int d = 1; d <= V; ++d) // Start the loop from 1
//   {
//     cout << "\nVertex " << d << " :-> ";
//     for (auto x : adj[d])
//       cout << " " << x;
//   }
// }

// int main()
// {
//   int V, E;
//   cin >> V;
//   cin >> E;

//   // Create a graph as a vector of vectors
//   vector<vector<int>> adj(V + 1); // Increase the size of the vector by 1

//   for (int e = 0; e < E; ++e)
//   {
//     int i, j;
//     cin >> i >> j;
//     // addEdge(adj, i, j);
//     adj[i].push_back(j);
//     adj[j].push_back(i);
//   }

//   // printGraph(adj, V);
//   for (int d = 1; d <= V; ++d) // Start the loop from 1
//   {
//     cout << "\nVertex " << d << " :-> ";
//     for (auto x : adj[d])
//       cout << " " << x;
//   }

//   return 0;
// }

// ******************** Undireted Graph **********************************

// #include <iostream>

// using namespace std;

// int main()
// {
//   int n, m;
//   cin >> n >> m;
//   // adjacency list for undirected graph
//   // time complexity: O(V+2E)
//   vector<int> adj[n + 1];
//   for (int i = 0; i < m; i++)
//   {
//     int u, v;
//     cin >> u >> v;
//     adj[u].push_back(v);
//     adj[v].push_back(u);
//   }
//   return 0;
// }

// ******** Directed Graph  ***************************************

// #include <iostream>

// using namespace std;

// int main()
// {
//   int n, m;
//   cin >> n >> m;
//   // adjacency list for directed graph
//   // time complexity: O(V+E)
//   vector<int> adj[n + 1];
//   for (int i = 0; i < m; i++)
//   {
//     int u, v;
//     // u —> v
//     cin >> u >> v;
//     adj[u].push_back(v);
//   }
//   return 0;
// }
