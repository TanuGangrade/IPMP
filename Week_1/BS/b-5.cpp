class Solution{
public:	
	vector<int> printUnsorted(int a[], int n) {
	    int s=0,e=0;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i+1]<a[i])
	       {  s=i;break;}
	    }
	    
	    for(int j=n-1;j>=0;j--)
	    {
	        if(a[j-1]>a[j])
	        {
	            e=j;break;
	        }
	    }
	    
	   int max = a[s], min = a[s];
        for(int i = s + 1; i <= e; i++)
        {
            if(a[i] > max)
            max = a[i];
            if(a[i] < min)
            min = a[i];
        }
         
      
	    for(int i=0;i<s;i++)
	    {
	        if(a[i]>min)
	        {s=i;break;}
	    }
	    
	       for(int j=n-1;j>e;j--)
	    {
	        if(a[j]<max)
	        {e=j;break;}
	    }
	    
	    vector<int>v;
	    v.push_back(s);
	    v.push_back(e);
	    return v;
	    
	}
};