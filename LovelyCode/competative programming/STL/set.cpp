#include <bits/stdc++.h>
#include<conio.h>
using namespace std;

int main() {
 
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q,x,y;
    set<int>s;
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>y>>x;
    }
    auto it=s.find(3);
    if(it!=s.end())
     cout<<"Yes";
     else cout<<"No";
    return 0;
}
