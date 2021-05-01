int bitonic(vector<int> a, int n) {
	    // code here
	    int g[n],l[n];
	    g[0]=1;l[0]=0;
	    
	    for(int i=1;i<n;i++)
	{
	    if(a[i-1]<=a[i]) // for each array find - at that index what is the numebr of continously increasing
	    g[i]=g[i-1]+1;
	    else
	    g[i]=1;
	}
	
	l[n-1]=1;
	for(int i=n-2;i>=0;i--)   //at t hat index what is the number of cont decreasing after it
	{
	    if(a[i+1]<=a[i])
	    l[i]=l[i+1]+1;
	    else
	    l[i]=1;
	}
	
	int res=0;
	    for(int i=0;i<n;i++)
	    {
	        res=max(res,g[i]+l[i]-1);
	    }
	  return res;  
	    
	}
