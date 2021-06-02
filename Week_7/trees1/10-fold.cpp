bool util(Node*a,Node*b)
{
    if(!a&&!b)
    return 1;
    if(!a||!b)
    return 0;
    
    return util(a->left,b->right)&&util(a->right,b->left);
    
}


bool IsFoldable(Node* root)
{
    // Your code goes here
    if(!root)
    return 1;
    return util(root->right,root->left);
    
}
