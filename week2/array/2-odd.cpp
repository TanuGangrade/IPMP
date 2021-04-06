int getOddOccurrence(int b[], int n) {
        
                map<int,int>map;

        
         for(int i=0;i<n;i++)
    {
        if(map.find(b[i])==map.end())
        		map.insert(pair<int, int>(b[i],1));
        		
        else
        map[b[i]]++;

    }
        
        int ans=0;
         for(auto i=map.begin();i!=map.end();i++)
	{	
	    if(i->second%2!=0)
        {ans=i->first;
            break;
        }
        
	}
	return ans;
        
        
        
    }
