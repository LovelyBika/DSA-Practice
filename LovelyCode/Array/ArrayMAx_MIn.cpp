#include<bits/stdc++.h>
using namespace std;


int main(){
    int ar[]={22, 14, 8, 17, 35, 3};
    int size =sizeof(ar)/sizeof(ar[0]);
    int max=ar[0],min=ar[0];
    for(int i=1;i<size;i++){
      if(max<ar[i])
      max=ar[i];
      else
     if(min>ar[i])
      min=ar[i];     
    }
    cout<<"max value: "<<max<<"\n";
    cout<<"min vlue: "<<min<<"\n";
    return 0;

}