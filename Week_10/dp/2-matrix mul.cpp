int matrixChainMemoised(vector<vector<int>>&dp,vector<int> p, int i, int j)
{
    if (i == j)
    {
        return 0;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    dp[i][j] = INT_MAX;
    for (int k = i; k < j; k++)
    {
        dp[i][j] = min(
            dp[i][j], matrixChainMemoised(p, i, k)
                     + matrixChainMemoised(p, k + 1, j)
                       + p[i - 1] * p[k] * p[j]);
    }
    return dp[i][j];
}
int MatrixChainOrder(vector<int> p, int n)
{
    int i = 1, j = n - 1;
     vector<vector<int>> dp( 100 , vector<int> (100, 0));
    return matrixChainMemoised(dp,p, i, j);
}
