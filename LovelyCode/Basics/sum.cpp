#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,room_price;
    cin>>n;
    int sum=0;
    vector<int> v;
    while(n--){
    cin>>room_price;
    v.push_back(room_price);
    }
    int i=0;
   while(i<v.size()){
    if(v[i]>v[i+1]){
        sum+=v[i];
        i+2;
    }
    else
       { sum+=v[i+1];
          i+2;
       }
   } 
    cout<<sum;
    
    return 0;
}