Node*fun(Node* head1, Node* head2)
{
    Node*t1=head1,*t2=head2,*temp=NULL,*p=NULL;
    
    while(t2 && t1)
    {       
        // cout<<"t1:"<<t1->data<<" t2:"<<t2->data<<",";
        if(t1->data>t2->data)
        { Node* temp=new Node(t1->data);
        temp->next=t1->next;
        t1->data=t2->data;
        t1->next=temp;
        t2=t2->next;

        }
        p=t1;
        t1=t1->next;
    }
    

    if(t2!=NULL)
  { while(t2!=NULL)
     {Node* temp=new Node(t2->data);
        p->next=temp;
        p=p->next;
        t2=t2->next;
    }}
    
    return head1;
    
}




Node* sortedMerge(Node* head1, Node* head2)  
{  

    Node* ans,*t1=head1,*t2=head2;
    int count1,count2;
    while(t1)
    {
        count1++;
        t1=t1->next;
    }
    while(t2)
    {
        count2++;
        t2=t2->next;
    }
    
    if(count1>count2)
    return fun(head1,head2);
    else
    return fun(head2,head1);
}  
