  
 void util(Node*root,vector<int>&v)
    {
        if(root==NULL)
        return;
        util(root->left,v);
        
        v.push_back(root->data);
        
        util(root->right,v);
        
        
    }
    
    
    int isPairPresent(struct Node *root, int target)
    {
    //add code here.
    vector<int>v;
    util(root,v);
    
    int i=0,j=v.size()-1;
    
    while(i<j)
    { 
        if(target==v[i]+v[j])
         return 1;
         else if(target>v[i]+v[j])
         i++;
         else j--;
     }
    
    return 0;
    }
