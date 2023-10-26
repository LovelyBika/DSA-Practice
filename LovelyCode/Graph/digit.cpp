#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
vector <int > digit={1,2,6};
int n=digit.size();
cout<<digit[n-1]+1;

return 0;
}