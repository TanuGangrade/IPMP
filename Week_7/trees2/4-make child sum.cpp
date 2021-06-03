void convertTree(node* node) 
{ 
    int l = 0, r = 0, diff; 
    if (node == NULL || (node->left == NULL &&
                        node->right == NULL)) 
        return; 
    else
    { 
        convertTree(node->left); 
        convertTree(node->right); 
      
        if (node->left != NULL) 
        l = node->left->data; 
      
        if (node->right != NULL) 
        r = node->right->data; 
      
        diff = l+r-node->data; 
      
        if (diff > 0) 
        node->data = node->data + diff; 
      
        if (diff < 0) 
        increment(node, -diff); // -diff is used to make diff positive 
    } 
} 
  
void increment(node* node, int diff) 
{ 
    if(node->left != NULL) 
    { 
        node->left->data = node->left->data + diff; 
        increment(node->left, diff); 
    } 
    else if (node->right != NULL) 
    { 
        node->right->data = node->right->data + diff; 
        increment(node->right, diff); 
    } 
} 
