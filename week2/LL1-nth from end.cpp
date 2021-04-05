int getNthFromLast(Node *head, int n)
{
       
       Node*n1=head,*n2=head,*prev=NULL;
        
       for(int i=0;i<n;i++)
       {
           n1=n1->next;
       }
        while(n1!=NULL)
        {
            n2=n2->next;
            prev=n1;
            n1=n1->next;
        }
        
        prev->next=n1->next;
        
        n2=head;
        while(n2!=NULL)
        cout<<n2->data<<" ";
        return 0;
        
}
