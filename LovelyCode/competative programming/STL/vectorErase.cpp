#include<bits/stdc++.h>
using namespace std;
int main(){
    int ele,x;
   
    vector<int>v;

    for(auto i=0;i<3;i++){
        cin>>ele;
        v.push_back(ele);
    }
    cout<<"Enter the position want to delete";
    cin>>x;
    v.erase(v.begin()+x);
    for(auto i:v){
        cout<<i<<" ";
    }
}