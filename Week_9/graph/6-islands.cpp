int safe(int M[][COL], int row, int col, bool visited[][COL])
{
    return (row >= 0)&&(row < ROW)&&(col >= 0)&&(col < COL)&&(M[row][col]&&!visited[row][col]);
}
 
void DFS(int M[][COL], int row, int col,bool visited[][COL])
{
     int r[]={ -1, -1, -1, 0, 0, 1, 1, 1 };
     int c[]={ -1, 0, 1, -1, 1, -1, 0, 1 };
 
    visited[row][col]=true;
 
    for (int k=0; k < 8; ++k)
        if (safe(M, row+r[k], col+c[k], visited))
            DFS(M, row+r[k], col+c[k], visited);
}
 
int countIslands(int M[][COL])
{
    bool visited[ROW][COL];
    memset(visited, 0, sizeof(visited));
 
    int count=0;
    for (int i=0; i < ROW; ++i)
        for (int j=0; j < COL; ++j)
 
            if (M[i][j]&&!visited[i][j]) {
                DFS(M, i, j, visited);
 
                ++count;
            }
 
    return count;
}
