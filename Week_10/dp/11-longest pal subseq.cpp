int lps(char *str)
{
   int n = strlen(str);
   int i, j, len;
   int L[n][n];  
  
   for (i = 0; i < n; i++)
      L[i][i] = 1;
 
    for (len=2; len<=n; len++)
    {
        for (i=0; i<n-len+1; i++)
        {
            j = i+len-1;
            if (str[i] == str[j] && len == 2)
               L[i][j] = 2;
            else if (str[i] == str[j])
               L[i][j] = L[i+1][j-1] + 2;
            else
               L[i][j] = max(L[i][j-1], L[i+1][j]);
        }
    }
 
    return L[0][n-1];
}
