 int util(Node*node)
    {
        if(node==NULL)
        return 0;
        
        int old=node->data;
        
        node->data=util(node->right)+util(node->left);
        
        return node->data+old;
    }
    
    
    void toSumTree(Node *node)
    {
        // Your code here
        util(node);
    }
