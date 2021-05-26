vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int>v;
    stack<Node*>s;
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node*t=q.front();
        q.pop();
        s.push(t);
        if(t->right)
        q.push(t->right);
        if(t->left)
        q.push(t->left);
        
    }
    
    while(!s.empty())
    {
        v.push_back(s.top()->data);
        s.pop();
    }
    return v;
}
