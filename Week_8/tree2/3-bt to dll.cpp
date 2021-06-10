void util(Node *root, Node **head,Node**prev)
{
    if(root==NULL)
    return;
    util(root->left,head,prev);
    if(*prev==NULL)
    {
        *head=root;
        *prev=root;
    }
    else
    {(*prev)->right=root;
         root->left=(*prev);
         (*prev)=(*prev)->right;
    }
   util(root->right,head,prev);
   
}
   
    Node * bToDLL(Node *root)
    {
        // your code here
        Node*head=NULL,*prev=NULL;
         util(root, &head,&prev);
        return head;
        
    }
