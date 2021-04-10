  vector<int> nextPermutation(int N, vector<int> arr){
        // code here
        int n=arr.size();
        int *a=new int[n];
        for(int i=0;i<n;i++)
        a[i]=arr[i];
        
        bool t= next_permutation(a, a + n);// rearranges a, returns true if the original was not already the largest number
        if(t)
        {vector<int>v(a,a+n);
            return v;}
        else return -1;
    }
