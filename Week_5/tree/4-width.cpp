int getMaxWidth(Node* root)
    {
        
       // Your code 
       
       queue <Node*>q;
       q.push(root);
       Node*t;
       int i;
       int maxS=1;
       
       while(!q.empty())
       {
           
          maxS=maxS>q.size()?maxS:q.size();
          int k=q.size();
          i=0;
          while(i<k)
          {t=q.front();
              q.pop();
              
              if(t->left)
              q.push(t->left);
              if(t->right)
              q.push(t->right);
              
              i++;
          }
          
           
       }
       
       return maxS;
       
       
    }