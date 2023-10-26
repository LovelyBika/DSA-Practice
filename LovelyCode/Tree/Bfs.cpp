#include <bits/stdc++.h>
using namespace std;

vector<int> bfsOfGraph(int V, vector<int> adj[])
{
    int visited[V] = {0};
    visited[1] = 1;
    queue<int> q;
    q.push(1);
    vector<int> bfs;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        bfs.push_back(node);

        for (auto it : adj[node])
        {
            if (!visited[it])
            {
                visited[it] = 1;
                q.push(it);
            }
        }
    }
    return bfs;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

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
    vector<int> graph;
    graph = bfsOfGraph(m, adj);
    for (auto a : graph)
    {
        cout << a << endl;
    }
    return 0;
}