int reverse(struct Node** head_ref) 
{ 
    struct Node* prev = NULL; 
    struct Node* current = *head_ref; 
    struct Node* next; 
    int len = 0; 
    while (current != NULL) { 
        len++; 
        next = current->next; 
        current->next = prev; 
        prev = current; 
        current = next; 
    } 
    *head_ref = prev; 
    return len; 
} 
  
// Function to make an empty linked list of 
// given size 
struct Node* make_empty_list(int size) 
{ 
    struct Node* head = NULL; 
    while (size--) 
        push(&head, 0); 
    return head; 
} 
  
// Multiply contents of two linked lists => store 
// in another list and return its head 
struct Node* multiplyTwoLists(struct Node* first, 
                        struct Node* second) 
{ 
    // reverse the lists to muliply from end 
    // m and n lengths of linked lists to make 
    // and empty list 
    int m = reverse(&first), n = reverse(&second); 
  
    // make a list that will contain the result 
    // of multiplication. 
    // m+n+1 can be max size of the list 
    struct Node* result = make_empty_list(m + n + 1); 
  
    // pointers for traverse linked lists and also 
    // to reverse them after 
    struct Node *second_ptr = second, 
        *result_ptr1 = result, *result_ptr2, *first_ptr; 
  
    // multiply each Node of second list with first 
    while (second_ptr) { 
  
        int carry = 0; 
  
        // each time we start from the next of Node 
        // from which we started last time 
        result_ptr2 = result_ptr1; 
  
        first_ptr = first; 
  
        while (first_ptr) { 
  
            // multiply a first list's digit with a 
            // current second list's digit 
            int mul = first_ptr->data * second_ptr->data 
                    + carry; 
  
            // Assigne the product to corresponding Node 
            // of result 
            result_ptr2->data += mul % 10; 
  
            // now resultant Node itself can have more 
            // than 1 digit 
            carry = mul / 10 + result_ptr2->data / 10; 
            result_ptr2->data = result_ptr2->data % 10; 
  
            first_ptr = first_ptr->next; 
            result_ptr2 = result_ptr2->next; 
        } 
  
        // if carry is remaining from last multiplication 
        if (carry > 0) { 
            result_ptr2->data += carry; 
        } 
  
        result_ptr1 = result_ptr1->next; 
        second_ptr = second_ptr->next; 
    } 
  
    // reverse the result_list as it was populated 
    // from last Node 
    reverse(&result); 
    reverse(&first); 
    reverse(&second); 
  
    // remove if there are zeros at starting 
    while (result->data == 0) { 
        struct Node* temp = result; 
        result = result->next; 
        free(temp); 
    } 
  
    // Return head of multiplication list 
    return result; 
} 