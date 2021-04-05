bool detectLoop(Node* head)
{
    Node *first=head,*second=head; int i;
    while(first!=NULL && second&&second->next!=NULL)
{
    
    first=first->next;
    second=second->next->next;
    if(first==second)
    return 1;
}
    return 0;
}
