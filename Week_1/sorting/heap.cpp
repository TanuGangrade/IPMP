class Solution
{
    public:             //  size    root
    void heapify(int a[], int n, int i)  {
      // Your Code Here
      int largest=i;
      int left=i*2+1;
      int right=i*2+2;
      
      if(left<n&&a[largest]<a[left])
      largest=left;
      if(right<n&&a[largest]<a[right])
      largest=right;
      if(largest!=i)
      {
          swap(a[largest],a[i]);
          heapify(a,n,largest);
      }
      
      
      
}



    
    public:
    void heapSort(int a[], int n)
    {
        for(int i=n/2-1;i>=0;i--)
        heapify(a,n,i);
        
        for(int i=n-1;i>0;i--)
        {
            swap(a[0],a[i]);
            heapify(a,i,0);
            
        }
    
    
        }
};
