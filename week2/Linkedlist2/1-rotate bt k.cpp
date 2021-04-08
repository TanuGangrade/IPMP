Node* rotate(Node* head, int k)
    {
        if(!head)
        return NULL;
        
        Node*temp=head;Node*prevhead=head;
        for(int i=0;i<k-1;i++)
        {
            temp=temp->next;
        }
        
        if(temp->next==NULL)
        return head;
        
        head=temp->next;
        temp->next=NULL;
        temp=head;
        while(temp->next!=NULL)
        temp=temp->next;
        
        temp->next=prevhead;
        
        return head;
        
        // Your code here
    }
