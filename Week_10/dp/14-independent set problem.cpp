class node
{
    public:
    int data;
    int liss;
    node *left, *right;
};
 
int LISS(node *root)
{
    if (root == NULL)
        return 0;
 
    if (root->liss)
        return root->liss;
 
    if (root->left == NULL && root->right == NULL)
        return (root->liss = 1);
 
    int exclude = LISS(root->left) + LISS(root->right);
 
    int include = 1;
    if (root->left)
        include += LISS(root->left->left) + LISS(root->left->right);
    if (root->right)
        include += LISS(root->right->left) + LISS(root->right->right);
 
    root->liss = max(include, exclude);
 
    return root->liss;
}
