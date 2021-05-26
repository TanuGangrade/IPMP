vector<string> fun(string s,vector<string>&v,int l,int r)
		{
		    if(l==r)
		    v.push_back(s);
		    else
		    {
		        for(int i=l;i<=r;i++)
		        {
		            swap(s[l],s[i]);
		            fun(s,v,l+1,r);
		            swap(s[l],s[i]);
		        }
		    }
		    
		    return v;
		}
	
	
	
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string>v;
		    fun(S,v,0,S.size()-1);
		    return v;
		    
		}
