bool util(Node*root,int min, int max)
    {
        if(root==NULL)
        return 1;
        if(root->data>max||root->data<min)
        return 0;
        
        
        return util(root->left,min,root->data-1)&&util(root->right,root->data+1,max);
    }
    
    bool isBST(Node* root) 
    {
        // Your code here
      return util(root,INT_MIN,INT_MAX);
    }
