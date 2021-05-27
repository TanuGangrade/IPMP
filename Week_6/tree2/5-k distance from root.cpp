void kdis(vector<int>&v,int level,Node*root)
{
    if(root==NULL)
    return;
    
    if(level==1)
    v.push_back(root->data);
    else 
    {
        kdis(v,level-1,root->left);
        kdis(v,level-1,root->right);

    }
}


vector<int> Kdistance(struct Node *root, int k)
{
  // Your code here
  
  vector<int>v;
  kdis(v,k+1,root);
  return v;
}
