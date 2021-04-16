Node* clone(Node *start)
{
    Node* curr = start, *temp;
  
    while (curr)
    {
        temp = curr->next;
  
        curr->next = new Node(curr->data);
        curr->next->next = temp;
        curr = temp;
    }
  
    curr = start;
  

    while (curr)
    {
        if(curr->next)
            curr->next->random = curr->random ? 
                                 curr->random->next : curr->random;
  
        curr = curr->next?curr->next->next:curr->next;
    }
  
    Node* original = start, *copy = start->next;
  
    temp = copy;
  
    while (original && copy)
    {
        original->next =
         original->next? original->next->next : original->next;
  
        copy->next = copy->next?copy->next->next:copy->next;
        original = original->next;
        copy = copy->next;
    }
  
    return temp;
}