#include<bits/stdc++.h>
using namespace std;
//my  first approach
/* this is not bubble sort because it comparing with evey element not adjacently
 and i is fixed */
void MybubbleSort(int ar[],int n){
    int temp;
        int didSwap=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(ar[j]<ar[i])
             {  temp=ar[i]; 
                ar[i]=ar[j];
                ar[j]=temp;
                didSwap=1;
             }
        }
        if(didSwap==0){
            break;
        }
        cout<<"runs"<<endl;
    }
    for(int k=0;k<n;k++){
        cout<<ar[k]<<" ";
    }
    return ;

}
// what actually bubble Sort is 
void ActualBubbleSort(int arr[],int n){
    int temp;
    int didSwap=0;
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1])
             {  temp=arr[j+1]; 
                arr[j+1]=arr[j];
                arr[j]=temp;
                didSwap=1;
             }
        }
     if(didSwap==0){
        break;
      }
      cout<<"runs"<<endl;
    }
     
    
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    return ;
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
   
   MybubbleSort(ar,n);
//    cout<<"\n";
//    ActualBubbleSort(ar,n);
   
   return 0;

}