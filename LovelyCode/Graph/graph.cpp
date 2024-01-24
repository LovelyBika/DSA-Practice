#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int Graph1[N][N];
vector<pair<int, int>> Graph2[N];
int main()
{
  int n, m, wt;
  cin >> n >> m; // n->Nodes || m->edges
  int v1, v2;
  for (int i = 0; i < m; i++)
  {
    cin >> v1 >> v2 >> wt;
    Graph1[v1][v2] = wt;
    Graph1[v2][v1] = wt;

    //  Graph2[v1].push_back({v2,wt});
    //  Graph2[v1].push_back({v1,wt});
  }
  for (int i = 0; i < m; i++)
  {
    cout << Graph1[v1][v2];
    cout << Graph1[v2][v1];
  }

  return 0;
}

// Simple Graph implementation Where edges have Unit Weights
main()
{

  int n, m;
  cin >> n >> m;
  vector<int> adj[n + 1];
  for (int i = 0; i < m; i++)
  {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
}