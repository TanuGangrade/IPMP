vector<int> leftView(Node *root)
{
queue<Node*> q;
    q.push(root);
 
    while (!q.empty())
        int n = q.size();
        for(int i=0; i<n; i++)
        {
            Node* temp = q.front();
            q.pop();
            if (i==0)
               v.push_back(root->data);
             
            if (temp->left != NULL)
                q.push(temp->left);
 
            if (temp->right != NULL)
                q.push(temp->right);
        }
    }
return v;
}
