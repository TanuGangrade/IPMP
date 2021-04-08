bool isv(char a)
{
    return (a=='a'||a=='e'||a=='i'||a=='o'||a=='u');
}
struct Node* arrange(Node *head)
{
    Node* conhead=NULL,*vhead=NULL;
    
    Node*t=head;
    while(t)
    {
        if(isv(t->data)  )
        append(&vhead,t->data);
        else
        append(&conhead,t->data);
        t=t->next;
    }
    
    t=vhead;
        
    if(vhead){
        while(t->next)
        t=t->next;
        
        t->next=conhead;
        
        return vhead;
        }
    else
    return conhead;
    
    
   //Code here
}
