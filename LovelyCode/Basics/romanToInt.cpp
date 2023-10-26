#include<bits/stdc++.h>
    using namespace std;
    void romanToInt(string s) {
      
        map<int,char>m;
       m={
           {1,'I'},
           {5,'V'},
           {10,'X'},
           {50,'L'},
           {100,'C'},
           {500,'D'},
           {1000,'M'}

       };
        int sum=0;
        int i=0;
           while(i<s.size()){
           for(auto it=m.begin();it!=m.end();it++)
           if(it->second==s[i]){
               sum+=it->first;
           }
           i++;
           }
      cout<<sum;
    }
int main(){
romanToInt("MCMXCIV");
return 0;
}