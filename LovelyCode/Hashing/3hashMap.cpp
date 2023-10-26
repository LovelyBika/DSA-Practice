#include<bits/stdc++.h>
using namespace  std;
#define Floop(i,n) for(int i=0;i<n;i++)
#define Feach(ele,Container)  for(auto ele:Container)

//Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
       unordered_map <int ,int >mp;
       for(int i=0;i<N;i++){
           mp[arr[i]]++;
       }
       for(int k=1;k<=P;k++){
           cout<<mp[k]<<endl;
       }
       return ;
    }


int main(){
     #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w", stdout);
      #endif
      int n;
      cin>>n;
      vector <int>ar(n);
      Floop(i,n){
        cin>>ar[i];
      }
      int p;
      cin>>p;
     frequencyCount(ar,n,p);
     
     return 0;
}