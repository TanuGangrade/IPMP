 struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        
        if(!head)
        return NULL;
        
        node*curr=head;
        node*next=NULL;
        node*prev=NULL;
        int i=0;
        while(i<k&&curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            i++;
            
        }
        
        head->next=reverse(next,k);
        
        return prev;
        
        
        
    }
