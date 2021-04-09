void alternatingSplitList(struct Node* head) 
{
    //Your code here

    Node*t=head;
    while(t)
    {
        append(&a,t->data);
        t=t->next;
        
        if(t)
       { append(&b,t->data);
        t=t->next;}
    }
    
   
}
