int lengthOfLongestSubstring(string s) {
        
        int maxlength=0;
        vector<int>v(256,-1);
        
       
        int l=0,h=0;
        while(h<s.length())
        {
            if(v[s[h]]==-1||v[s[h]]<l)
            {
                v[s[h]]=h;
                maxlength=max(h-l+1,maxlength);
                
            }
            else
            {
                l=v[s[h]]+1;
                v[s[h]]=h;
                
             }
            h++;
        }
        
        
        
        return maxlength;
        
        
    
    }


/////////////////////////////////

 int longestUniqueSubsttr(string s){
        //your code
        
        int maxlength=0;
        vector<int>v(256,-1);
        
        int l=0;
      
      for(int h=0;h<s.length();h++)
      {
          l=max(l,v[s[h]]+1);
          maxlength=max(h-l+1,maxlength);
          v[s[h]]=h;
      }
        
        
        return maxlength;
        
        
    }
