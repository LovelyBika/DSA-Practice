#include<bits/stdc++.h>
using namespace  std;
#define Floop(i,n) for(int i=0;i<n;i++)
#define Feach(ele,Container)  for(auto ele:Container)

//Function to count the frequency of all elements from 1 to N in the array.
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
             mp[nums[i]]++;
            //  cout<<mp[i]<<endl;
        }
        
        // Feach(a,mp){
        //     cout<<a.first<<"=>"<<a.second<<endl;
        // }
       priority_queue <pair<int,int>>p;
       Feach(d,mp){
        p.push({d.second,d.first});
        }
        vector<int >vc;
        for(int i=0;i<k;i++){
            vc.push_back(p.top().second);
            p.pop();
        }
return vc;
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
      int q;
      cin>>q;
    auto c= topK(ar,q);
    Feach(i,c){
        cout<<i<<" ";
    }
     return 0;
}