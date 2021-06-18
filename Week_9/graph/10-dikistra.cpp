int minDistance(int dist[], bool done[])
{
    int min = INT_MAX, min_index;
  
    for (int v = 0; v < V; v++)
        if (done[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;
  
    return min_index;
}


void dijkstra(int graph[V][V], int src)
{
    int dist[V]; bool done[V]; 
    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX, done[i] = false;
  
    dist[src] = 0;
  
    for (int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, done);
  
        done[u] = true;
  
        for (int v = 0; v < V; v++)
  
            if (!done[v] && graph[u][v] && dist[u] != INT_MAX
                && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }
  
    printSolution(dist);
}
