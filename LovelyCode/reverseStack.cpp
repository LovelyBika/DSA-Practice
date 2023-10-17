void insert(stack<int>&stack,int temp){
    if(stack.empty()){
      stack.push(temp);
      return;
    }
    int val=stack.top();
    stack.pop();
    insert(stack,temp);
    stack.push(val);
}


void reverseStack(stack<int> &stack) {
   vector<int>vc;
   if(stack.empty()|| stack.size()==1)
     {  
         return;
     }
   int temp=stack.top();
   stack.pop();
   
   reverseStack(stack);  
   insert(stack,temp);
   
}
