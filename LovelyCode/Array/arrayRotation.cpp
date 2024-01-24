#include<bits/stdc++.h>
using namespace std;

// int main(){
//     vector <int >v={13,,34,66,334,54,3};
//     int ele;
//     cin>>ele;
    
//     for(int i=0;i<ele;i++){
//     v.insert(v.end(),v[i]);
//    }
   
//    v.erase(v.begin(),v.begin()+ele);
//     for(auto value:v){
//         cout<<value<<" ";
//     }
//     return 0;
// }

void RotateArr(int ar[],int n,int del){
int* temp =new int[n];
int k=0;
for(int i=del;i<n;i++)
{
    temp[k]=ar[i];
    k++;
}
cout<<endl;
for(int i=0;i<del;i++)
{
    temp[k]=ar[i];
    k++;
    
}
for(int i=0;i<n;i++)
{
   cout<<temp[i]<<" ";
}

}
int main(){
    int ar[]={23,34,55,2,6,3};
    int s=sizeof(ar)/sizeof(ar[0]);
    
    RotateArr(ar,s,3);
}
