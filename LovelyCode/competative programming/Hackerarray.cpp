#include<iostream>
using namespace std;
int main(){
    int a[100],b[100];
    int alice=0,bob=0;
    for(int i=0;i<3;i++)
    cin>>a[i];
    for(int i=0;i<3;i++)
    cin>>b[i];
   for(int j=0;j<3;j++){
       if(a[j]>b[j])
       alice++;
       if(a[j]<b[j])
        bob++;
    
    }cout<<alice<<" "<<bob;
    return 0;
}