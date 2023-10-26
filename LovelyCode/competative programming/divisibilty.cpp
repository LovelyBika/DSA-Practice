#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	vector<int>vc;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
    for(int i=0;i<n;i++){
		vc.push_back(ar[i]%10);
	}
   if(vc.back()==0)
    cout<<"Yes";
   else 
     cout<<"No";
   return 0;   
}