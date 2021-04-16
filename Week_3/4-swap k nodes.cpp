Node *swapkthnode(Node* head, int n, int k)
{
    
    if(k>n)
    return head;
    if(k*2-1==n)
    return head;
    
    
    Node* x=head,*y=head,*xprev=NULL,*yprev=NULL;
    
    
    for(int i=0;i<k-1;i++)
    {xprev=x;
    x=x->next;
        
    }
    
     for(int i=0;i<n-k;i++)
    {yprev=y;
    y=y->next;
        
    }
    
    if(xprev)
    xprev->next=y;
    if(yprev)
    yprev->next=x;
    
    Node*temp=NULL;
    
    temp=y->next;
    y->next=x->next;
    x->next=temp;
    
    if(n==k)
    head=x;
    if(k==1)
    head=y;
    return head;

    
    
    
    
    // Your Code here
}