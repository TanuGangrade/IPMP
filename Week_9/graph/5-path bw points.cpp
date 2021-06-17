 while (!queue.empty())
    {
        s = queue.front();
        queue.pop_front();
 
        for (i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if (*i == d)
                return true;
 
            if (!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
 }
return false;
   
