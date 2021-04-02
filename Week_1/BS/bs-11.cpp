int ls(vector<int> &nums) {
        vector<int> lis(nums.size(), 1);
        int max_len = 1;
        
        for(int i = 0; i < nums.size(); i++) {
           
            for(int j = 0; j < i; j++) {
                if(nums[j] < nums[i] && lis[j] + 1 > lis[i])
                    lis[i] = lis[j] + 1;
                max_len = max(max_len, lis[i]);
            }
        }
        return max_len;
    }
