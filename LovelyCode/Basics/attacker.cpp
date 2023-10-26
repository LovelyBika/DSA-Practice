#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	string str;
	cin>>str;
	for(int i=0;i<str.length();i++){
      if(str[i]+str[i+1]%2==0)
      cout<<"valid";
      else 
      cout<<"invalid";
    }
return 0;
}
