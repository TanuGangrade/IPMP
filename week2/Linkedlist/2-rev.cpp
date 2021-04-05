struct Node* reverseList(struct Node *head)
    {
        Node *curr=head,*nex=NULL,*prev=NULL;
        
        while(curr!=NULL)
        {
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
        
        return prev;
    }
