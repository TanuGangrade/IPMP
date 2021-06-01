 void inor(queue<Node*>&q,Node*root){
    
        if(root==NULL)
        return ;
        
        inor(q,root->left);
        q.push(root);
        inor(q,root->right);
        
    }
    
    
    
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        //Your code here
        queue<Node*>q;
        
        inor(q,root);
        
        while(q.front()!=x &&!q.empty())
        q.pop();
        
        if(!q.empty())
       q.pop();
       
       if(!q.empty())
        return q.front();
        else
        return NULL;
        
    }
