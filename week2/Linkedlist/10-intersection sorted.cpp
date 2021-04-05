struct Node* sortedIntersect(struct Node* a,struct Node* b)
{
    struct Node* result = NULL;
    struct Node** last = &result;
 
    while (a != NULL && b != NULL) {
        if (a->data == b->data) {
            push(last, a->data);
            last = &((*last)->next);
            a = a->next;
            b = b->next;
        }
        else if (a->data < b->data)
            a = a->next; 
        else
            b = b->next;
    }
    return (result);
}
