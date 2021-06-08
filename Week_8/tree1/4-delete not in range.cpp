Node*BSTrange(Node*root,int max,int min)
   {
      if (root==NULL)
      return NULL;

      root->left=BSTrange(root->left,max,min);
      root->right=BSTrange(root->right,max,min);

      if(root->data<min)
      {
        Node*t=root->left;
        delete(root);
        return t;
      }
      if(root->data>max)
      {
        Node*t=root->right;
        delete(root);
        return t;
      }

      return root;


   }
