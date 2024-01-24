#include<bits/stdc++.h>
using namespace std;



int main(){
    int ar[]={-2,1,-3,4,-1,2,1,-5,4};
     
    vector <int >s;
    int si=sizeof(ar)/sizeof(ar[0]);
    for(int i=0;i<si;i++){  
    for(int j=i;j<si;j++){  int sum=0; cout<<endl;
    for(int k=i;k<=j;k++){
        sum+=ar[k];
        // cout<<ar[k];
    }
    s.push_back(sum);
    }}
    cout<<*max_element(s.begin(),s.end());
}

