void doubleTree(node* Node) 
{       
    if (Node == NULL) return; 
      
    doubleTree(Node->left); 
    doubleTree(Node->right); 
     
    node*old= Node->left; 
    Node->left = newNode(Node->data); 
    Node->left->left = oldLeft; 
} 
