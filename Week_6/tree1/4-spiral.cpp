vector<int> findSpiral(Node *root)
{
    //Your code here
    vector<int>v;
    stack<Node*>q1;
    stack<Node*>q2;
    Node*t;
    q1.push(root);
    
    while(!q1.empty()||!q2.empty())
    {
        while(!q1.empty())
        {
            t=q1.top();
            v.push_back(t->data);
            q1.pop();
            if(t->right)
            q2.push(t->right);
              if(t->left)
            q2.push(t->left);
            
           
            
        }
         while(!q2.empty())
        {
            t=q2.top();
            v.push_back(t->data);
            q2.pop();
             if(t->left)
            q1.push(t->left);
            if(t->right)
            q1.push(t->right);
            
            
            
        }
        
        
    }
    
    return v;
}
