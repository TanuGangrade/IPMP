 void mirror(Node* node)
    {
     // code here
     if(node==NULL)
     return;
     
     mirror(node->left);
     mirror(node->right);
     
     Node*t;
     
     t=node->left;
     node->left=node->right;
     node->right=t;
    }
