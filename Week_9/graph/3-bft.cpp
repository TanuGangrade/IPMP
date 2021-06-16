       vector<int>BFS(int s)
{
      
      map<int,bool>visited(adj.size(),false);

       list<int>::iterator i;

       queue<int>q;

       q.push(s);
       visited[s]=true;
       vector<int>v;


       while(!q.empty())
       {
           int s=q.front();
           v.push_back(s);
           q.pop();

           for(i=adj[s].begin();i!=adj[s].end();i++)
           {
               if(visited[*i]==false)
               {
                   visited[*i]=true;
                   q.push[*i];
               }
           }


       }
      return v;
    }
