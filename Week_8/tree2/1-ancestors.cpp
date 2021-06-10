 bool util(vector<int>&v,Node*root,int t)
    {
        if(root==NULL)
        return 0;
        if(root->data==t||util(v,root->left,t)||util(v,root->right,t)  )
        {   if(root->data!=t)
            v.push_back(root->data);
            return 1;
        }
        return 0;
        
    }
    
    
    vector<int> Ancestors(struct Node *root, int target)
    {
         // Code here
         vector<int>v;
         util(v,root,target);
         return v;
    }
