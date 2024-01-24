#include <bits/stdc++.h>
using namespace std;

void solve(vector<string> v, int size) {
	vector<int>ans(100000,0);
   string s1;
   string s2;
   bool flag=true;
   for(auto value: v){
   	for(auto value1:value){
   		if(value1!='U'&& value1!='-' && flag){
   			s1+=value1;
		   }
		if(value1=='-'){
			flag=false;
			continue;
		}
		if(value1!='U' && flag==false){
			s2+=value1;
		}
	   }
	   int temp1=stoi(s1);
	   int temp2=stoi(s2);
	   if(ans[temp1]==0 || ans[temp2]==0){
	   	ans[temp1]=1;
	   	ans[temp2]=1;
	   	cout<<"U"+s1+"-"<<" "<<"U"+s2<<endl;
	   }
//	   cout<<s1<<" "<<s2<<endl;
       
	   s1="";
	   s2="";
	   flag=true;
	    
   }
  
}

int main() {
    int n;
    cin >> n;
    vector<string> s;
    for(int i = 0; i < n; ++i) {
        string temp;
        cin >> temp;
        s.push_back(temp);
    }
    solve(s, n);
return 0;
}