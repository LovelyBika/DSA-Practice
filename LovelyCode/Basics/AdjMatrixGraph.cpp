#include <bits/stdc++.h>
using namespace std;

int main()
{
  // Implementing Adjacency Matrix
  int n, m;
  cin >> n >> m;
  int adj[n][n];
  memset(adj, 0, sizeof(adj));
  for(int k=0;k<m;k++){
    int a,b;
    cin>>a>>b;
    adj[a][b]=1;
    adj[b][a]=1;
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << adj[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
