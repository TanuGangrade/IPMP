int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int j=0;
	    while(j<m)
	   { 
	    for(int i=0;i<n;i++)
	    {
	            if(arr[i][j]==1)
	            return i;
	        
	        
	    }
	       
	       j++;
	   }
	    
	    return -1;
	    
	}
