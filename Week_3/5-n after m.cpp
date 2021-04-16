 void linkdelete(struct Node  *head, int M, int N)
    {
        //Add code here  
        Node*t=head,*prev=NULL;
        while(t){
        for(int i=0;i<M-1 &&t!=NULL;i++)
        {prev=t;
            t=t->next;
        }
        
        if(t==NULL)
        return;
        
        Node*t2=t->next;
        for(int i=0;i<N && t2!=NULL;i++){
            Node*temp=t2;
            t2=t2->next;
            free(temp);
        }
        
        t->next=t2;
        t=t->next;
        
        }
        
        
    }