class myStack {
public:
    DLLNode* head;
    DLLNode* mid;
    int count;
};
 
myStack* createMyStack()
{
    myStack* ms = new myStack();
    ms->count = 0;
    return ms;
};
 
void push(myStack* ms, int new_data)
{
    DLLNode* new_DLLNode = new DLLNode();
    new_DLLNode->data = new_data;
 
    new_DLLNode->prev = NULL;
 
    new_DLLNode->next = ms->head;
    ms->count += 1;
 
    if (ms->count == 1) {
        ms->mid = new_DLLNode;
    }
    else {
        ms->head->prev = new_DLLNode;
 
        if (!(ms->count
            ms->mid = ms->mid->prev;
    }
 
    ms->head = new_DLLNode;
}
 
int pop(myStack* ms)
{
    if (ms->count == 0) {
        return -1;
    }
 
    DLLNode* head = ms->head;
    int item = head->data;
    ms->head = head->next;
 
    if (ms->head != NULL)
        ms->head->prev = NULL;
 
    ms->count -= 1;
 
    if ((ms->count) & 1)
        ms->mid = ms->mid->next;
 
    free(head);
 
    return item;
}
 
int findMiddle(myStack* ms)
{
    if (ms->count == 0) {
        return -1;
    }
 
    return ms->mid->data;
   
}
int  deletemiddle(myStack* ms)  
     {  
           int temp=ms->mid->data;
        ms->mid->prev->next=ms->mid->next;
        ms->mid->next->prev=ms->mid->prev->next;
         
        delete ms->mid;
          ms->mid = ms->mid->next; 
        return temp;
     }
 
