
    MyQueue() {
        stack<int> a;
    stack<int> b;
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        a.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int x;
        if(!b.empty())
        {
            x=b.top();
            b.pop();
        }
        else
        {
            while(!a.empty())
            {
                b.push(a.top());
                a.pop();
            }
            x=b.top();
            b.pop();
        }
        return x;
    }
    
    /** Get the front element. */
    int peek() {
        int x;
        if(!b.empty())
        {
            x=b.top();
        }
        else
        {
            while(!a.empty())
            {
                b.push(a.top());
                a.pop();
            }
            x=b.top();
        }
        return x;
       
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        if((a.empty())&&(b.empty())) return true;
        else return false;
    }
