 string removeChars(string s1, string s2) {
        // code here
        string ans;
        set<char>set;
        for(int i=0;i<s2.length();i++)
          set.insert(s2[i]);
          
       for(int i=0;i<s1.length();i++) {
           if(set.find(s1[i])==set.end())
           ans+=s1[i];
       }  
        
        return ans;

    }
