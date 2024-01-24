#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int ar[]){
    int j=1;
   int  key=ar[j];
   int  i=j-1;
    while(i>0 && ar[i]>key)
    {
        ar[i+1]=ar[i];
        i--;
        ar[i+1]=key; 
    }
    for(int k=0;k<7;k++){
        cout<<ar[k];
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int ar[]={4,6,23,12,56,22,11};
    InsertionSort(ar);
   
return 0;
}