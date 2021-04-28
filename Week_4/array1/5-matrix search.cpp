int matSearch (int N, int M, int m[][M], int x)
{
    
    if(x<m[0][0]||x>m[N-1][M-1])
    return 0;
    
    int i=0,j=M-1;
    
    while(i<N&&j>=0)
    {
        if(m[i][j]==x)
        return 1;
        
        if(m[i][j]>x)
        j--;
        else
        i++;
    }
    return 0;
    
    
    
}
