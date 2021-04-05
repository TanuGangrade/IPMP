int getMiddle(Node *head)
{
   Node* fast=head,*slow=head;
   while(fast&&fast->next)
   {
       slow=slow->next;
       fast=fast->next->next;
   }
   
   return slow->data;
}
