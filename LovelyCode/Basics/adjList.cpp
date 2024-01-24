#include <bits/stdc++.h>
using namespace std;
void dfs(int sv, int v, vector<bool> &visited, vector<int> &adj)
{
}
int main()
{
    int v = 5;
    vector<int> adj[5];
    adj[0].push_back(1);
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(8);
    adj[3].push_back(4);
    adj[3].push_back(5);
    vector<bool> visited(v, false);
    dfs(1, v, visited, adj);

    return 0;
}