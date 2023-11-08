class Stack {
	// Define the data members.
     queue<int>q,q2;
     
   public:
    Stack() {
        // Implement the Constructor.
        
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function.
        return q.size();
    }

    bool isEmpty() {
        // Implement the isEmpty() function.
        if(getSize()==0)
           return true;
        else 
        return false;   
    }

    void push(int element) {
        // Implement the push() function.
        q2.push(element);
        while(!q.empty()){
            q2.push(q.front());
            q.pop();
        }
        swap(q,q2);
        
    }

    int pop() {
        // Implement the pop() function.
        if(isEmpty())
         return -1;
         else {
             int val=q.front();
             q.pop();
             return val;
            } 
    }

    int top() {
        // Implement the top() function.
         if(getSize()==0)
          return -1;
          else 
          return q.front();

    }
};
