bool isCompleteBT(Node* root){
        //code here
        
        queue<Node*>q;
        q.push(root);
        int flag=0;
        
        while(!q.empty())
        {
            Node*t=q.front();
            
            q.pop();
            
            if(t->left)
            {
               if(flag==1)
               return 0;
             
               else q.push(t->left);
            }
            else
            flag=1;
            
            if(t->right)
            {
               if(flag==1)
               return 0;
             
               else q.push(t->right);
            }
            else
            flag=1;
            
        }
        
        return 1;
        
    }
