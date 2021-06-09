bool hasPathSum(Node *root, int s) {
    // Your code here
    if(root==NULL)
    return s==0;
    
    s=s-(root->data);
    
    if(s==0&&root->left==NULL&&root->right==NULL)
    return 1;
    
    bool a,b;
    if(root->left)
     a=hasPathSum(root->left,s);
    
    if(root->right)
     b=hasPathSum(root->right,s);
    
    return a||b; 
    
    
    
}
