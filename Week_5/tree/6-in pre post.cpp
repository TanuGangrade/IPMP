//inorder
void ino(TreeNode* root,vector<int>&v)
    {
        if(root==NULL)
        return ;
        ino(root->left,v);
        v.push_back(root->val);
        ino(root->right,v);
        
    }
    
    
    vector<int> inorderTraversal(TreeNode* root) {
        
      vector<int>v;
      ino(root,v);
      return v;
        
    }

 //pre
    void ino(TreeNode* root,vector<int>&v)
    {
        if(root==NULL)
        return ;
        v.push_back(root->val);

        ino(root->left,v);
        ino(root->right,v);
        
    }
    
    
    vector<int> inorderTraversal(TreeNode* root) {
        
      vector<int>v;
      ino(root,v);
      return v;
        
    }

    //post

    void ino(TreeNode* root,vector<int>&v)
    {
        if(root==NULL)
        return ;
        ino(root->left,v);
        ino(root->right,v);
        v.push_back(root->val);
        
        
    }
    
    
    vector<int> inorderTraversal(TreeNode* root) {
        
      vector<int>v;
      ino(root,v);
      return v;
        
    }