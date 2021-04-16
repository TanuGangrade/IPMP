node* pairWiseSwap(node* head)
{
    if (head == NULL || head->next == NULL)
        return head;
  
    node* prev = head;
    node* curr = head->next;
  
    head = curr; 
  
    while (true) {
        node* next = curr->next;
        curr->next = prev; 
        if (next == NULL || next->next == NULL) {
            prev->next = next;
            break;
        }
  
        
        prev->next = next->next;
  
        prev = next;
        curr = prev->next;
    }
    return head;
}