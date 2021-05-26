string reverseWords(string S) {
         // code here 
        string a,s="";
        vector<string>v;
        
        istringstream ss(S);

        while(ss>>a)
        {
            v.push_back(a);
        }
        
         for (int i = v.size()-1; i > 0; i--)
           {s+=v[i];
            s+=" ";}
           
        s+=v[0];
        
        return s;
        
    }
