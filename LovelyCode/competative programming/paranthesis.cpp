#include<bits/stdc++.h>
using namespace std;

void para(string s){
stack <char >st;
for(int i=0;i<s.length();i++)
        {st.push(s[i]);
        }
        cout<<st.top();
}

int main(){
    string s ="(dfga)";
    para(s);
    
    return 0;
}