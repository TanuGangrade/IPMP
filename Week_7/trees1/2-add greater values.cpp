void util(Node*root, int &sum)
{if(root==NULL)
return;
    util(root->right,sum);
    sum+=root->data;
    root->data=sum;
    util(root->left,sum);
}


Node* modify(Node *root)
{
    // staic Node*t;
    if(root==NULL)
    return NULL;
   int sum=0;
   util(root,sum);
   return root;
    // Your code here
}
