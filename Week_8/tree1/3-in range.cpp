void util(vector<int>&v,Node*root,int l,int h)
{
    if(root==NULL)
    return;
    
    if(root->data>l)
    util(v,root->left,l,h);
    
    if(root->data>=l&&root->data<=h)
    v.push_back(root->data);
    
    if(root->data<h)
    util(v,root->right,l,h);
    
    
}


vector<int> printNearNodes(Node *root, int low, int high)
{
  // your code goes here   
  vector<int>v;
  util(v,root,low,high);
  return v;
  
}
