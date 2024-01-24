#include<bits/stdc++.h>
using namespace std;
int main(){
    string word;
    cin>>word;
    int x=0,y=0;
   int n=  word.size();
   for(int i =0;i<n;i++){
    if(word[i]=='z' || word[i]=='Z'){
        x++;
    }
   else if(word[i]=='o' || word[i]=='O'){
       y++;
   }
   }
   if(x==2*y){
    cout<<"Yes";
   }
  else cout<<"No";
return 0;

}