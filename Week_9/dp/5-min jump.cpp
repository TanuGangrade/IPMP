int jump(vector<int>& arr) {
        int n=arr.size();
         vector<int>jumps(n,INT_MAX);
        
        jumps[0]=0;
        for(int i=1;i<n;i++ )
        { 
       
            for(int j=0;j<i;j++)
            {
                if(j+arr[j]>=i&&arr[j]!=INT_MAX)
                {jumps[i]=min(jumps[i],jumps[j]+1);
                break;}
            }
        }
        
        if(jumps[n-1]<0||jumps[n-1]>10000)
        return -1;
        
        return jumps[n-1];
    }
