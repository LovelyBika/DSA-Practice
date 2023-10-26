#include <iostream>
using namespace std;
int main(){
    // system("cls");
    int ar[5],n,key;
    cout<<"Enter the size of array ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>ar[i];
    }
    cout<<"Enter the Key you want to search ";
    cin>>key;
    int low=0,high=n-1,mid;
    while(low<=high){
         mid=(low+high)/2;
         if(ar[mid]==key)
        printf("Your element %d is found at %d",ar[mid],mid);
         if(ar[mid]>key)
              high=mid-1;
         if(ar[mid]<key)
              low=mid+1;
    }

    // for(int i=0;i<n;i++){
    //     cout<<ar[i]<<" ";
    // }
    

  return 0;  
}