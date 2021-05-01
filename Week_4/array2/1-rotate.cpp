void rotate(vector<int>& a, int k) {
        int temp;
        for(int i=0;i<=k;i++)
        {
            temp=a[0];
            for(int i=0;i<a.size()-1;i++)
            {
                a[i]=a[i+1];
            }
            a[a.size()-1]=temp;
        }
        
        
        
        
    }
