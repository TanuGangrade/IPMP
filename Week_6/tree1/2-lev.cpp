  vector<int> levelOrder(Node* node)
    {
      //Your code here
      vector<int>v;
      queue<Node*>q;
      q.push(node);
      Node*t=NULL;
      while(!q.empty())
      {
          t=q.front();
          v.push_back(t->data);
          q.pop();
          if(t->left)
          q.push(t->left);
          if(t->right)
          q.push(t->right);
      }
      
      return v;
      
    }
