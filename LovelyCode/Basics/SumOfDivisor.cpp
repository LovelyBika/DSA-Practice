#include <bits/stdc++.h>
using namespace std;
int main()
{    int sum=0,N;
   cin>>N;
    for(int i=1;i<=N;i++){
          sum+=(N/i)*i;
          cout<<sum<<endl;
       }

    return 0;
}