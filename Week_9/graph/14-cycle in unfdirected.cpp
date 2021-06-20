bool iscy(int v, vector<int>adj[],vector<bool>&visited,int parent)
    {
        visited[v]=true;
        
        for(auto i:adj[v])
        {
            if(!visited[i])
            {
                if( iscy(i,adj,visited,v))
                 return true;
                
            }
            else if(parent!=i)
            return true;
        }
        
        return false;
        
        
    }
    
    
    
    
	bool isCycle(int V, vector<int>adj[])
	{
	    // Code here
	    
	    vector<bool>visited(V,false);
	    
	    for(int i=0;i<V;i++)
	    {
	        if(!visited[i])
	        if(iscy(i,adj,visited,-1))
	        return true;
	    }
	    return false;
	}
