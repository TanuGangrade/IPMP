	bool hasArrayTwoCandidates(int a[], int n, int x) {
	    // code 
	    
	    vector<int>v(a,a+n);
        vector<int>::iterator it;
        for(int i=0;i<n;i++)
        {

          it = find (v.begin(), v.end(),x-a[i] );
            if (it != v.end() && (it-v.begin())!=i) 
            return 1;
        }
        return 0;	    
	}
