bool util(Node*root,int&h)
 {
     
   
     if(root==NULL)
     {h=0; 
     return 1;
     }
     
     int lh=0,rh=0;
     int l=0,r=0;
    l=util(root->left,lh);
     r=util(root->right,rh);
    
    h=max(lh,rh)+1;
    
    if(abs(lh-rh)>1)
    return 0;
    
    return l&&r;
     
     
 }


//Function to check whether a binary tree is balanced or not.
bool isBalanced(Node *root)
{
    //  Your Code here
    int h=0;
    return util(root,h);
    
}
