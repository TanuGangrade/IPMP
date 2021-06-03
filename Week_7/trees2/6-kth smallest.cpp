int KthSmallestElement(Node *root, int &k)
    {
        //add code here.
         if (root == NULL)
        return -1;
 
  int  left = KthSmallestElement(root->left, k);
    if (left != -1)
        return left;
 
    k--;
    if (k == 0)
        return root->data;
    return KthSmallestElement(root->right, k);
    }
