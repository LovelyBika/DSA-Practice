#include <bits/stdc++.h>
using namespace std;
void fibo(int n)
{   vector <int >f;
         f[0]=1;
         f[1]=1;
         for(int i=2;i<=n;i++){
             f[i]=f[i-1]+f[i-2];
             }
            for(auto a:f){
                cout<<a<<endl;
            }
    return ;
}
int main(){
   
   int n;
   cin>>n;
   fibo(n);
  return 0;

}

