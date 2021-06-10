TreeNode* sortedArrayToBST(vector& nums) {
return util(nums,0,nums.size()-1);
}


TreeNode* util(vector v,int l,int h)
{
if(l>h)
return NULL;

    int mid=(l+h)/2;
    int rootData=v[mid];
    TreeNode* root=new TreeNode(rootData);
    root->left=helper(v,s,mid-1);
    root->right=helper(v,mid+1,e);
    return root;
}
};
