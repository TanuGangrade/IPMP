bool isSumTree(Node* root)
    {
         // Your code here
         static int sum=0;
         if(root==NULL)
         return 1;
         
         if(root->right==NULL&&root->left==NULL)
         return 1;
         
         int ls,rs;
         if(root->left==NULL)
         ls=0;
         else if(root->left->left==NULL&&root->left->right==NULL)//leaf
         ls=root->left->data;
         else
         ls=2*(root->left->data);
         
         if(root->right==NULL)
         rs=0;
         else if(root->right->left==NULL&&root->right->right==NULL)//leaf
         rs=root->right->data;
         else
         rs=2*(root->right->data);
         
         return isSumTree(root->left)&&isSumTree(root->right)&&(root->data==ls+rs);
         
    }
