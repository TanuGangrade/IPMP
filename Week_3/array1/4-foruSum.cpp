vector<vector<int>> fourSum(vector<int>& nums, int target)
{
     vector<vector<int>> res;
sort(nums.begin(), nums.end());
int n = nums.size();
  
  for(int i = 0 ; i < n - 3; i++)
    {
        for(int j = i + 1; j < n - 2; j++)
          {
              int l = j + 1;
              int r = n - 1;
              while(l < r)
                {
                    vector<int> res1;
                    int sum = nums[i] + nums[j] + nums[l] + nums[r];
                    if(sum == target)
                     {
                         res1.push_back(nums[i]);
                         res1.push_back(nums[j]);
                         res1.push_back(nums[l]);
                         res1.push_back(nums[r]);
                         l++;
                         r--;
                         res.push_back(res1);
                     }     
                    else if(sum > target)
                     r--;
                    else l++; 
                }
          }
    }
sort(res.begin(),res.end()); //to remove duplicate elements
res.erase(unique(res.begin(),res.end()), res.end());  
  
return res;    
}
