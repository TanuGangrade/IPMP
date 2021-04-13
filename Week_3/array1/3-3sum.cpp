bool find3Numbers(int a[], int n, int X)
    {
        //Your Code Here
         unordered_map<int,int>m;
    int ans,z;
    for(int i=0;i<n;i++)
    m[a[i]]+=1;
    
    for(int i=0;i<n-1;i++)
    {
        int remaining=X-a[i];
        set<int>s;
        for(int j=i+1;j<n;j++)
        {
            if(s.find(remaining-a[j])!=s.end())
            return 1;
            s.insert(a[j]);
        }
        
    }
