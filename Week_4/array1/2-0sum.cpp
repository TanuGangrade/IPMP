 bool subArrayExists(int arr[], int n)
    {
        //Your code here
        
        unordered_map<int,int>m;
        int sum=0;
        m[0]=1;
        for(int i=0;i<n;i++)
        {   sum+=arr[i];
            if(m[sum]!=0)
            return true;
            else
            m[sum]+=1;
            
            
        }
        
        return false;
        
        
    }
