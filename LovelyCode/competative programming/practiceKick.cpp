#include<iostream>
using namespace  std;
int sample(int n, int m){
    int c[100001],sum=0;
    if(n>0 && m>0){
        for(int i=1;i<=n;i++){
            cin>>c[i];
            sum+=c[i];
            }
           
 }
 return sum%m;
}
int main(){
short int t,n,m,rem;
 cin>>t;
 for(int i=1;i<=t;i++){
    cin>>n>>m;
    rem=sample(n,m);
    printf("Case #%d: %d\n",i,rem);
 }   
return 0;    
}