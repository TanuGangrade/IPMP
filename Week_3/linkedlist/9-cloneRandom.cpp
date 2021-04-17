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





//-------//

Node* clone(Node *start)
{
	Node* curr = start, *temp;

	// insert additional node after
	// every node of original list
	while (curr)
	{
		temp = curr->next;

		// Inserting node
		curr->next = new Node(curr->data);
		curr->next->next = temp;
		curr = temp;
	}

	curr = start;

	// adjust the random pointers of the
	// newly added nodes
	while (curr)
	{
		
			curr->next->random = curr->random ?
								curr->random->next : NULL;

		// move to the next newly added node by
		// skipping an original node
		curr = curr->next->next;
	}

	Node* original = start, *copy = start->next;

	// save the start of copied linked list
	temp = copy;

	// now separate the original list and copied list
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
