/*#include<iostream>
#include<iomanip>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
//     cin>>n;
    string str;
    map<int,string>m;
    m={
        {0,"zero"},
        {1,"one"},
        {2,"two"},
        {3,"three"},
        {4,"four"},
        {5,"five"},
        {6,"six"},
        {7,"seven"},
        {8,"eight"},
        {9,"nine"}
        };
//        while(n--){
        // cin>>str;
        for(auto it=m.begin();it!=m.end();it++){
                cout<<it->first<<" "<<it->second<<endl;
                
        
        
        // }
       }

return 0;
}



*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector zero(vector<char> s,vector<int> v1){
int a=s.find('z');
if(a!=0)
{s.erase(a);
 s.erase('e');
 s.erase('r');
 s.erase('o');
v1.push_back('0');
zero(s,s1);}
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    //vector<char> st;
    map <int,striing>m;
    m={{1,"one"},
    {2,"two"},
    {3,"three"},
    {4,"four"},
    {5,"five"},
    {6,"six"},
    {7,"seven"},
    {8,"eight"},
    {9,"nine"}
    };
    string st;
    vector<char> str;
    vector<int> s1;
    cin>>t;

    while(--t)
    { cin>>st;
        for(int i=0;i<sizeof(st);i++)
        {
            str.push_back(st[i]);
        }  
       str=one(str);

    }
    return 0;
}
//2
//ewtooetzrowon
//ttnrwoooeeefurh