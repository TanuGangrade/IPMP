int majorityElement(int a[], int n)
    {
          
    map<int, int> m;
    
    for(int i=0;i<n;i++)
    {
        m[a[i]]+=1;
    }
   int max=0,j;
      
      for(int i=0;i<m.size();i++)
      {
          if(m[i]>max)
          { j=i;max=m[i];}
      }
      
      if(m[j]>n/2)
    return j;  
    else 
    return -1;
    
        // your code here
        
    }



//better:-

    int majorityElement(vector<int>& nums) {
      int ans,count=0;
      for(int i=0;i<nums.size();i++)
      {
          if(count==0)
          {
              ans=nums[i];count++;
          }
          else if(nums[i]==ans)count++;
          else count--;
      }
      return ans;
    }
