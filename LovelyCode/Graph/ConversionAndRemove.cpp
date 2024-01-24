#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    transform(str.begin(),str.end(),str.begin(),::tolower);
    int j=0;
    string s;
    for(int i=0;str[i]!='\0';i++){
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
           {str[j++]=str[i];
               }
                   }
   str[j]='\0';
   cout<<str;
}