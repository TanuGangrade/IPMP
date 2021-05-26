 int getLevelDiff(Node *root)
    {
       //Your code hereint 
       int odd=0,even=0;
       queue<Node*>q;
       q.push(root);
       int lev=0;
       Node*t=NULL;
       while(!q.empty())
       {
           int s=q.size();
           lev+=1;
           
           for(int i=0;i<s;i++)
           {t=q.front();
           q.pop();
               if(lev%2==0)
               even+=t->data;
               else
               odd+=t->data;
               
               if(t->left)
               q.push(t->left);
               if(t->right)
               q.push(t->right);
           }
           
       }
       
       return odd-even;
    }
