 vector<int> subarraySum(int arr[], int n, int s)
    {
        // Your code here
        int start=0,end=1;vector<int>v;
        int sum=arr[0];
       for(int end=1;end<=n;end++)
        {   
                while(sum>s &&start<end){
                sum=sum-arr[start];
                start++;}
            
            if(sum==s)
            { 
        v.push_back(start+1);
        v.push_back(end);
        return v;}
            
            if(end<n)
            sum=sum+arr[end];
            
        }
       v.push_back(-1);
       return v;
    }
