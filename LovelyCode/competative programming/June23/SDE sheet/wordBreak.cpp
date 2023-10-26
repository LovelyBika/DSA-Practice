#include<bits/stdc++.h>
using namespace std;

int main(){
system("cls");
vector<string>vc= {"leet","code"};
string word="leetcode";

for(int i=0;i<2;i++){
string str=vc[i];
for(int j=0;j<str.length();j++){
    int p=0;
if(str[j]==word[p++])
    cout<<str[j];


}

}


return 0;

}