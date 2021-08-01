class Graph
{
public:
map<int,bool>visited;
map<int, list<int>> adj;

void util(int v ,vector<int>&ans)
{
    visited[v] = true;
    ans.push_back(v);
 
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            util(*i);
}

  vector<int>DFS(map<int, list<int>> adj)
  {
    vector<int>ans;
    util(0,ans);
    return ans;
  }
