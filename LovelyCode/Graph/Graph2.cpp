#include<bits/stdc++.h>
using namespace std;

vector <int >adj[6];
bool visited[0];
void ADjList(int N){
  
    int u,v;
    for(int i=0;i<N;i++){
        cin>>u>>v;
        adj[u].push_back(v);
}

}

void dfs(int N){
   
//    vector <int > adj[N];
   
    if(visited[N])
      return ;
    
   visited[N]=true;
    cout<<N<<" ";
   for(auto a:adj[N]){
      
      
        dfs(a);
         
        
    }

}


int main(){

 ADjList(3);
 dfs(0);
 return 0;
}

