#include<bits/stdc++.h>
using namespace std;
void insertionSort(int ar[],int n){
    int temp,j;
    for(int i=0;i<n;i++){
        j=i;
        while(j>0 && ar[j-1]>ar[j]){
            temp=ar[j-1];
            ar[j-1]=ar[j];
            ar[j]=temp;
            j--;
        }
    }
for(int j=0;j<n;j++){
    cout<<ar[j]<<" ";
}
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
   
insertionSort(ar,n);
   
   return 0;

}