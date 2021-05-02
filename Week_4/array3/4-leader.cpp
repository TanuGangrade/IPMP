vector<int> leaders(int a[], int n){
        // Code here
        int bigg=a[n-1];
        vector<int>v;
        v.push_back(a[n-1]);
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>=bigg)
           { v.push_back(a[i]);
           bigg=a[i];}
           
            
        }
        reverse(v.begin(),v.end());
        return v;
    }
