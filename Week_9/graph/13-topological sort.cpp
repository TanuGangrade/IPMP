	
	void top( vector<int>&visited,int v,vector<int> adj[],stack<int>&s)
	{
	    
	    visited[v]=true;
	    
	    for(auto i:adj[v])
	    {
	        if(!visited[i])
	        top(visited,i,adj,s);
	    }
	    
	    s.push(v);
	    
	}
	
	
	
	
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    stack<int>s;
	    vector<int>visited(V);
	    
	    for(int i=0;i<V;i++)
	    {
	        if(!visited[i])
	        top(visited,i,adj,s);
	    }
	    
	    vector<int>ans;
	    while(!s.empty())
	    {
	        ans.push_back(s.top());
	        s.pop();
	    }
	    
	    return ans;
	    
	}
