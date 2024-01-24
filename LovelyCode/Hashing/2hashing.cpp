#include<bits/stdc++.h>
using namespace  std;
#define Floop(i,n) for(int i=0;i<n;i++)
#define Feach(ele,Container)  for(auto ele:Container)
int main(){
     #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w", stdout);
      #endif
      int n;
      cin>>n;
      int ar[n];
      
      Floop(i,n){
        cin>>ar[i];
        }
        //precompute 
       int hash[13]={0};
       Floop(i,n){
        hash[ar[i]]+=1;
       }
       int q;
       cin>>q;
       while(q--){
        int number;
        cin>>number;
        cout<<hash[number]<<endl;

       }


    
     return 0;
}