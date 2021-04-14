vector<int> sortArrayByParity(vector<int>& a) {
        
        int i=-1;
	    for(int j=0;j<a.size();j++)
	    {
	        if(a[j]%2==0)//even;
	        {i++;
	        swap(a[j],a[i]);
	        }
	        
	    
        }
        return a;
    }
