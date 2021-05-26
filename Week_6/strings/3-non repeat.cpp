 char nonrepeatingCharacter(string S)
    {
       //Your code here
       unordered_map<char,int>m;
       for(int i=0;i<S.size();i++)
       {
           m[S[i]]++;
       }
       
        for(int i=0;i<S.size();i++) 
        if(m[S[i]]==1)
        return S[i];
       
       return '$';
    }
