vector<int> diagnol(int n,int m, int mat[][m])
{ int i,j;vector<int>v;
	for(int k=0;k<=m;k++)
	{
		i=k;
		j=0;
		while(i>=0)
		{
			v.push_back(m[i][j]);
			i--;
			j++;
			
		}
	}

	for(int k=1;i<=n-1;k++)
	{
		i=m-1;
		j=k;
		while(j<=n-1)
		{
			v.push_back(m[i][j]);
			i--;
			j++;
		}
	}
	return v;
}
