vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int>v;
        
        for(int i=0;i<n;i++)
        {
            arr[arr[i]%n]+=n;
        }
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=n*2)
            v.push_back(i);
        }
        
        if(v.empty())
        v.push_back(-1);
        return v;
        
    }
