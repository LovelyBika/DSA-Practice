#include<bits/stdc++.h>
using namespace std;

    vector<long long> printFibb(int n) 
    {   if(n==1) return {1};
         if(n==2) return {1,1};
        vector<long long> v=printFibb(n-1);
       
        v.push_back(v[n-2]+v[n-3]);
        return v;
    }
    
    int main(){
     
      #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w", stdout);
      #endif
      
      int n;
      cin>>n;
      auto a=printFibb(n);
      for(auto b:a){
         cout<<b<<"\n";
      }
      return 0;
    }