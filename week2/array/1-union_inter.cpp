class Solution{
    public:
    int doUnion(int a[], int n, int b[], int m)  {
        
        map<int,int>map;
        for(int i=0;i<n;i++)
	{
		map.insert(pair<int, int>(a[i],1));

	}


    for(int i=0;i<m;i++)
    {
        if(map.find(b[i])==map.end())
        		map.insert(pair<int, int>(b[i],1));
        		
        else
        map[b[i]]++;

    }
    
    int uni=0,inter=0;
    for(auto i=map.begin();i!=map.end();i++)
	{	uni++;
	    if(i->second==2)
	    inter++;
	    
	}
	
cout<<uni<<" "<<inter;

    }
};
