#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class A{
     public: 
     int a,b;
     
     int add(){
        return a+b;
     }
     
     void operator+(A &obj){
        int value=this->a;
        int value2=obj.a;
        cout<<"the result "<<value2-value;
     
     }

};
int main(){
    A o,o1;
    o.a=7;
    o1.a=3;
    o+o1;
   return 0;
}