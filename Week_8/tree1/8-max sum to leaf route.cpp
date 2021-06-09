#include <bits/stdc++.h>
using namespace std;

 bool printPath(node* root,
               node* target_leaf)
{
    if (root ==NULL)
        return false;
  
    if (root == target_leaf || printPath(root->left, target_leaf) || 
                               printPath(root->right, target_leaf)) {
        cout << root->data << " ";
        return true;
    }
  
    return false;
}
  
void getTargetLeaf(node*Node, int* maxSum, int s, node** finalLeaf)
{
    if (Node ==NULL)
        return;

    s=s +Node->data;

    if (Node->left ==NULL &&Node->right ==NULL) {
        if (s > *maxSum) {
            *maxSum=s;
            *finalLeaf =Node;
        }
    }
  
    getTargetLeaf(Node->left, maxSum, s, finalLeaf);
    getTargetLeaf(Node->right, maxSum, s,finalLeaf);
}
  
int maxSumPath(node*Node)
{
    if (Node ==NULL)
        return 0;
  
    node* target_leaf;
    int max_sum=INT_MIN;
  
    getTargetLeaf(Node, &max_sum, 0, &target_leaf);
  
    printPath(Node, target_leaf);
  
    return max_sum; 
}
