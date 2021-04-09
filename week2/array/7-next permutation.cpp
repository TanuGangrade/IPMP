  vector<int> nextPermutation(int N, vector<int> arr){
        // code here
        int n=arr.size();
        int *a=new int[n];
        for(int i=0;i<n;i++)
        a[i]=arr[i];
        
        next_permutation(a, a + n);
        
        vector<int>v(a,a+n);
        return v;
    }
