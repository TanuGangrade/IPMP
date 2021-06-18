struct subset {
    int parent;
    int rank;
};


int find(struct subset subsets[], int i)
{
    if (subsets[i].parent != i)
        subsets[i].parent
            = find(subsets, subsets[i].parent);
 
    return subsets[i].parent;
}
 
void Union(struct subset subsets[], int xroot, int yroot)
{
 
    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].parent = xroot;
 
    else {
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}
 
int isCycle(struct Graph* graph)
{
    int V = graph->V;
    int E = graph->E;
 
    struct subset* subsets
        = (struct subset*)malloc(V * sizeof(struct subset));
 
    for (int v = 0; v < V; ++v) {
        subsets[v].parent = v;
        subsets[v].rank = 0;
    }
 
    for (int e = 0; e < E; ++e) {
        int x = find(subsets, graph->edge[e].src);
        int y = find(subsets, graph->edge[e].dest);
 
        if (x == y)
            return 1;
 
        Union(subsets, x, y);
    }
    return 0;
}
