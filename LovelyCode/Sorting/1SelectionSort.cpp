#include<bits/stdc++.h>
using namespace std;

void selectionSort(int ar[],int s){
    int min,temp;
    for(int i=0;i<s-1;i++){
        for(int j=i;j<s;j++){
              min =i;
            if(ar[j]<ar[i])
              min=j;
            temp=ar[i];
            ar[i]=ar[min];
            ar[min]=temp;
            }
        }
         for(int i=0;i<s;i++){
            cout<<ar[i]<<" ";
          }  
       return;   
}
int main(){
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   #endif
   
   int n;
   cin>>n;
   int ar[n];
   for(int i=0;i<n;i++){
    cin>>ar[i];
   }
   
   selectionSort(ar,n);
   
   return 0;

}