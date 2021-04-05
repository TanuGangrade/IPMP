int fun(int d,Node* head1, Node* head2)
{
     Node*t1=head1,*t2=head2;
    for(int i=0;i<d;i++)
    {
        t1=t1->next;
    }
    
       while (t1 != NULL && t2 != NULL) {
        if (t1 == t2)
            return t1->data;
  
        // Move both the pointers forward
        t1 = t1->next;
        t2 = t2->next;
    }
    return -1;
    
}




int intersectPoint(Node* head1, Node* head2)
{

    int d;
    Node*t1=head1,*t2=head2;
    int c1=0,c2=0;
    while(t1!=NULL)
   { c1++;
   t1=t1->next;}
    
    while(t2)
    {c2++;t2=t2->next;}
  
    // If first is greater
    if (c1 > c2) {
        d = c1 - c2;
        return fun(d, head1, head2);
    }
    else {
        d = c2 - c1;
        return fun(d, head2, head1);
    }
}
