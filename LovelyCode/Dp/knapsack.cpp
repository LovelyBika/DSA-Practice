#include<iostream>
using namespace std;
// int Knapsack(int val[],int w[],int n,int W){
// int t[n+1][W+1];

// if(W==0 || n==0)
//    return 0;

// if(W>=w[n-1]){
//    max(val[n-1]+Knapsack(&val[n-1],&W-w[n-1],n-1,W),
//    Knapsack(&val[n-1],w,n,W));
//    }
//    else 
//    return Knapsack(&val[n-1],w,n,W);

// return 0;

// }
int recur(int val[], int n){
 static int m=0;
   if(m==n)
     return 0;
   else
     cout<<recur(&val[m++],n)<<endl;  
 return 0;    


}
 

int main(){
int w[]={2,4,5,6,7,3};
// int val[]={1,4,2,5,8,3};
// cout<<Knapsack(val,w,6,7);
recur(w,6);

return 0;
}