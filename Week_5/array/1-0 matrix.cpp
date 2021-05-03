void booleanMatrix(int R, int C, int m[][C])
{
    
    int toprow=0,topcol=0;
    
    for (int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            if(i==0&&m[i][j]==1)
            toprow=1;
            
            if(j==0&&m[i][j]==1)
            topcol=1;
            
            if(m[i][j]==1)
            {m[0][j]=1;m[i][0]=1;}
        }
    }
    
    for (int i=1;i<R;i++)
    {
        for(int j=1;j<C;j++)
        {
            if(m[0][j]==1||m[i][0]==1)
            m[i][j]=1;
        }
    }
    
     if (toprow == 1) {
        for (int i = 0; i < C; i++) {
            m[0][i] = 1;
        }
    }
 
    if (topcol == 1) {
        for (int i = 0; i < R; i++) {
            m[i][0] = 1;
        }
    }
    
    
}
