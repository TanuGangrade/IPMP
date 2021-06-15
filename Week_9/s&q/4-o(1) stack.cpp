public class MinStack {
	
	private Node _head;
	
    //input at front
    public void push(int value) {    	
    	Node node = new Node();
    	node->value = value;
    	
    	if (_head == null) {
    		node->minValue = node->value;
    		_head = node;
    	}
    	else {
    		node->minValue = 
    				node->value < _head->minValue ? node->value : _head->minValue; 
    		node->next = _head;
    		_head = node;
    	}    	
    }
    
    public int pop() {    	
    	if (_head == null)
    		return -1;
    	
    	Node node = _head;
    	_head = node->next;
    	return node->value;    		
    }
    
    public int min() {
    	if (_head == null)
    		return -1;
    	
    	return _head->minValue;
    }
	
	private class Node {
		int value;
		int minValue;
		Node next;
	}
}
