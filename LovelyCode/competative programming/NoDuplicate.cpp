#include<bits/stdc++.h>
using namespace std;

void Noduplicate(vector <int >nums){
  set<int >s;
  for(int i=0;i<nums.size();i++){
    s.insert(nums[i]);
  }
  
   for(auto a:s){
    cout<<a<<" ";   }
   

    
}

int main(){
vector <int > v={1,1,1,6,7};
int ar[100];
Noduplicate(v);

return 0;
}