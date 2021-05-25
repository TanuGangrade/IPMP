void pop(node*p, node* &t)
{
    if(!p)
    return ;
    pop(p->left,t);
    if(t)
    t->next=p;
    t=p;
    pop(p->left,t);
}


void populateNext(struct node* p)
{
    node*t=NULL;
    pop(p,t);
    

}
