#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>s;
    int x;
    for(int i=0;i<4;i++){
        cin>>x;
        s.push(x);
    }
    while(!s.empty())
    { cout<<s.top()<<endl;
       s.pop();
     }
} 