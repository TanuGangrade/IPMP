void util(Node*root,vector<vector<int>>&ans,vector<int>v)
{
    if(root==NULL)
    return;
    v.push_back(root->data);
    if(root->left==0&&root->right==0)
   {
       ans.push_back(v);
       return ;}
    util(root->left,ans,v);
    util(root->right,ans,v);
    
}
 
 
 
vector<vector<int>> Paths(Node* root)
{
    // Code here
    vector<vector<int>> ans;
    vector<int>v;
    util(root,ans,v);
    return ans;
    
}
