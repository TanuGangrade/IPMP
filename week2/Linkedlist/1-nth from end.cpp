ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode*n1=head,*n2=head,*prev=head;
        
       for(int i=0;i<n;i++)
       {
           n1=n1->next;
       }
        
        if(n1==NULL)
            return head->next;
        
        while(n1!=NULL)
        {prev=n2;
            n2=n2->next;
            
            n1=n1->next;
        }
        
       
            prev->next=n2->next;
        return head;
        
    }
