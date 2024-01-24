#include<bits/stdc++.h>
using namespace std;
unordered_map <char,int> symbols = {{'[',-1},{'{',-2},{'(',-3},{']',1},{'}',2},{')',3}};
string isBalance(string s){
     stack<char> st;
     for(auto bracket:s){
            if(symbols[bracket]<0){
                st.push(bracket);
            }
            else {
                if(st.empty())
                return "No";
                char top=st.top();
                st.pop();
                if(symbols[top]+symbols[bracket]!=0)
                return "No";

            }
     }
if(st.empty())
return "Yes";
else 
return "NO"; 
}
int main(){
    int t; 
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        cout<<isBalance(s)<<endl;
    }
    return 0;
}