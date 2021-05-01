 int maxProduct(vector<int>& nums) {
        int overall_max = nums[0];
        int max_prod_so_far = nums[0];
        int min_prod_so_far = nums[0];
        
        for(int i=1; i<nums.size(); i++) {
            if(nums[i] == 0) {
                overall_max = max (overall_max, 0);
                max_prod_so_far = 1;
                min_prod_so_far = 1;
            }
            else {
                int temp = max_prod_so_far;
                max_prod_so_far = max(max_prod_so_far * nums[i], max (min_prod_so_far * nums[i], nums[i]));
                min_prod_so_far = min(min_prod_so_far * nums[i], min (temp * nums[i], nums[i]));
                
                overall_max = max (overall_max, max_prod_so_far);
            }
        }
        
        return overall_max;
    }
