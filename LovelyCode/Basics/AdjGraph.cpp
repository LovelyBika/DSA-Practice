#include <iostream>
using namespace std ;
#define loop(n) for(int i =0;i<n;i++)
int main()
{  int n,m;      //n= No of verticies , m= no of edges 
   int u,v;
   cin>>n>>m;
   int adj[n+1][n+1] ;
    loop(m){
        
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
            }
     loop(n+1){
        cout<<"\n";
        loop(n+1){
            cout<<adj[u][v];
        }
     }       
  return 0;        
}