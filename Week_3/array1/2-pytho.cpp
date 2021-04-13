	bool checkTriplet(int a[], int n) {
	    // code here
	    unordered_map<int,int>m;
	    
	    for(int i=0;i<n;i++)
	    {
	        m[a[i]]+=1;
	    }
	    
	    for(auto i=0;i<n-1;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            int p=sqrt(a[i]*a[i]+a[j]*a[j]);
	            float q=sqrt(a[i]*a[i]+a[j]*a[j]);
	            
	            if(p==q && m[p]!=0)
	            return 1;
	        }
	    }
	    return 0;
	    
	}
