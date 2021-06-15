class MyStack {
    queue<int> q1;
    
public:
    /** Initialize your data structure here. */
    MyStack() {
        while(!q1.empty()){
            q1.pop();
        }
      
        
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
      q1.push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int top() {
          int x=q1.size();
        x--;
        queue<int> q2;
        while(x--){
            q2.push(q1.front());
            q1.pop();
        }
        int y=q1.front();
        q2.push(y);
        q1=q2;
        return y;
    }
    
    /** Get the top element. */
    int pop() {
        int x=q1.size();
        x--;
        queue<int> q2;
        while(x--){
            q2.push(q1.front());
            q1.pop();
        }
        int y=q1.front();
        q1=q2;
        return y;
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q1.size()?false:true;
    }
};
