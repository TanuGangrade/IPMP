  vector<int> singleNumber(vector<int> v) 
    {
        int x=0; vector<int>ans;
        for(int i=0;i<v.size();i++)
        {
            x^=v[i];
        }
        
        int setbit=log2(x&-x)+1;
        int v1=0,v2=0;
        
        for(int i=0;i<v.size();i++)
        {
            if(v[i]&setbit)
            v1^=v[i];
            else
            v2^=v[i];
            
        }
        
        ans.push_back(v1);
        ans.push_back(v2);

        return ans;
        

    }
