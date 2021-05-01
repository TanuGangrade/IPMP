int maxLen(int arr[], int n)
    {
        // Your code here
         int sum = 0; // Initialize sum of elements
     int maxl = 0; // Initialize result
    int end = -1;
 unordered_map<int,int>m;
        for (int i = 0; i < n; i++)
        arr[i] = (arr[i] == 0) ? -1 : 1;
        
      for(int i=0;i<n;i++)  
        {
            sum+=arr[i];
            
            if(sum==0)
            {
                maxl=i+1;
            }
            
            if(m.find(sum)  != m.end())
            {
                int l=i-m[sum];
                if(l>maxl)
                maxl=l;

            }
            else
            m[sum]=i;
            
            
            
            
        }
        return maxl;
    }
