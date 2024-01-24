#include<bits/stdc++.h>
using namespace std;
void RecBubbleSort(int ar[],int n){
   if(n==1)
      return;
    cout<<n<<" ";
    RecBubbleSort(ar,n--);  
}

int main(){
     #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w", stdout);
      #endif
        int n;
        cin>>n;
        int ar[n];
    //     for(int i=0;i<n;i++){
    //         cin>>ar[i];
    // }
    RecBubbleSort(ar,n);    
     return 0;
}