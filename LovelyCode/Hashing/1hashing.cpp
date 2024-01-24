#include<bits/stdc++.h>
using namespace  std;
#define Floop(i,n) for(int i=0;i<n;i++)
#define Feach(ele,Container)  for(auto ele:Container)
int main(){
     #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w", stdout);
      #endif
      string str;
      cin>>str;
      
      int cHash[26]={0};
      
      Floop(i,str.size()){
         
         cHash[str[i]-'a']+=1;
      }
      
      int q;
      cin>>q;
      char ch;
      while(q--){
        cin>>ch;
       cout<<cHash[ch-'a']<<endl;
      
      }


     return 0;
}