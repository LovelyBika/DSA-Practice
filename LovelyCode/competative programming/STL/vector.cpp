#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void display(vector<int> &v){
    for (int i=0;i<v.size();i++){
     cout<<v[i]<<" ";
    }


cout<<"\n";
}


int main() {
vector <int >v;
int x;
cout<<"intialise value="<<v.size()<<"\n";
cout<<"enter five element"<<endl;
for(int i=0;i<5;i++){
     cin>>x;
    v.push_back(x);
}
// display(v);
for(auto  value:v){
    cout<<value<<" ";
}

return 0;
}

