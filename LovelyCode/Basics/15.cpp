#include<bits/stdc++.h>
#include<string>

using namespace std;
int main(){
    long long n,s; int d;
     cin>>n>>s>d;
      
    vector<int> digits;
    
    while (n > 0) {
        digits.insert(digits.begin(), n % 10);
        n /= 10;
    }
    reverse(digits.begin(),digits.end());
    for(auto a:digits){
        cout<<a;
    }

   return 0;
    
}