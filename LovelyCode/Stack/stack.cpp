#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int  Stack[100];
int top=-1;

bool isEmpty(){
  if(top<0)
     return true ;
   else
   return false ;  
}

void push(int ele){

if(top<99){
   top++;
   Stack[top]=ele;
   
}else
 cout<<"Overflow\n";
 
}
int  peek()
{
  int s=0;
  if(isEmpty()){
   cout<<"underflow ";
    return 0;
  }
    else 
      {s=Stack[top];
   return s;
 }
}

void pop(){
  if(isEmpty())
      cout<<"underflow";
    else
      {  cout<<"Element is pop "<<Stack[top]<<endl;
        top--;}

}

void printStack(){
  if(isEmpty){
    cout<<"No element is present\n";
  }
  for(int i= top;i>=0;i--){
    cout<<Stack[i]<<"\n";
    
  }
}
int main(){
  push(2);
  push(3);
  push(4);
  // printStack();
  push(56);
  // pop();
  printStack();
  return 0;
    
    
}