
bool isPresent(struct Node* head, int data)
{
    struct Node* t = head;
    while (t != NULL) {
        if (t->data == data)
            return 1;
        t = t->next;
    }
    return 0;
}



struct Node* getUnion(
    struct Node* head1,
    struct Node* head2)
{
    struct Node* result = NULL;
    struct Node *t1 = head1, *t2 = head2;
 
    while (t1 != NULL) {
        push(&result, t1->data);
      
        t1 = t1->next;
    }

    while (t2 != NULL) {
        if (!isPresent(result, t2->data))
        {  push(&result, t2->data);
        }
        t2 = t2->next;
    }
    return result;
}
