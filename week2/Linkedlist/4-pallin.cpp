 bool isPalindrome(Node *head)
    {
        //Your code here
        int t;
        stack<int> s;
        Node*n=head;
        
        while(n!=NULL)
        {
            s.push(n->data);
            n=n->next;
        }
        n=head;
        while(n!=NULL && !s.empty())
        {   t=s.top();
            s.pop();
            if(t!=n->data)
            return 0;
            n=n->next;
        }
        
        return 1;
    }
