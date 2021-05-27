void util(Node*root,int &count){
       if(root==NULL)
       return;
       util(root->left,count);
       if(root->left==0&&root->right==0)
       count++;
       util(root->right,count);
   }
   

int countLeaves(Node* root)
{
  // Your code here
  int count=0;
   util(root,count);
   return count;
  
}

///////////////////
int countLeaves(Node* root)
{
   if(root==NULL)
       return 0;
       
       if(root->left==0&&root->right==0)
       return 1;
       return countLeaves(root->left) +countLeaves(root->right);
  
}
