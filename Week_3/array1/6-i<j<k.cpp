 bool increasingTriplet(vector<int>& nums) {
        
        
         vector<int>s(nums.size(),-1);
         vector<int>l(nums.size(),-1);

        
        int min=INT_MAX;
        int max=INT_MIN;
        s.push_back(nums.front());
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<=min)
            {s[i]=INT_MAX;
             min=nums[i];}
            else
                s[i]=min;
            
                
        }
         for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]>=max)
            {l[i]=INT_MIN;
             max=nums[i];}
            else
                l[i]=max;
            
        
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(s[i]!=INT_MAX   &&   l[i]!=INT_MIN)
                return 1;
        }
            
        
        return 0;
    }
