class Solution {
public:
    
   int bs(vector<int>a,int l,int h,int key)
   {int mid;
    while(l<=h)
    {
        mid=(l+h-1)/2;
        if(a[mid]==key)
        return mid;
        if(a[mid]>key)
        h=mid-1;
        else
        l=mid+1;
        
    }
    return -1;
}
    
    
    
   int search(vector<int>& nums, int target) {
        int point=-1,flag=0;
        
        for(int i=0;i<nums.size()-1;i++){
            
            if(nums[i+1]<nums[i])
            {
                flag=1;
                point=i;
                break;
            }
            
        }
            if(flag==0)
                return bs(nums,0,nums.size(),target);
            
            int lower=bs(nums,0,point,target);
            if(lower!=-1)
                return lower;
                
            int higher=bs(nums,point,nums.size(),target);
            if(higher!=-1)
                return higher;
            return -1;
                       
        
        
        
    }
};
