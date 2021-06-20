void topologicalSortUtil(int v, bool visited[], stack<int> &Stack)
{
    visited[v] = true;
  
    list<AdjListNode>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
    {
        AdjListNode node = *i;
        if (!visited[node.getV()])
            topologicalSortUtil(node.getV(), visited, Stack);
    }
  
    Stack.push(v);
}
  
void shortestPath(int s)
{
    stack<int> Stack;
    int dist[V];
  
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;
  
    for (int i = 0; i < V; i++)
        if (visited[i] == false)
            topologicalSortUtil(i, visited, Stack);
  
    for (int i = 0; i < V; i++)
        dist[i] = INF;
    dist[s] = 0;
  
    while (Stack.empty() == false)
    {
        int u = Stack.top();
        Stack.pop();
  
        list<AdjListNode>::iterator i;
        if (dist[u] != INF)
        {
          for (i = adj[u].begin(); i != adj[u].end(); ++i)
             if (dist[i->getV()] > dist[u] + i->getWeight())
                dist[i->getV()] = dist[u] + i->getWeight();
        }
    }
  
}
