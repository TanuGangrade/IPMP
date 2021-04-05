     public:
    void removeLoop(struct Node* loop, struct Node* head)
{
    struct Node* fast = loop;
    struct Node* slow = loop;
 
    int k=1;

        while(slow!=fast->next)
        {
            
            fast=fast->next;
            k++;
        }
        
        
        slow=head;fast=head;
        int i=0;
        while( i<k)
        {
            fast=fast->next;
            i++;
        }
        
        while(slow!=fast)
        {
            slow=slow->next;
            fast=fast->next;
            
        }
        
        while(fast->next!=slow)
        {
            fast=fast->next;
        }
        
        fast->next=NULL;
}

    
    
    
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        
          Node*slow=head,*fast=head;
        
        while(slow&&fast&&fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            removeLoop(slow,head);
            
        }
    }
