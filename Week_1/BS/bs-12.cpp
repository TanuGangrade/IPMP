class Solution{
public:
    int fmin(int a[], int low, int high)
    {
         if (a[high] > a[low]) 
         return a[0];
       
        if(low==high)
        return a[low];
        
        int mid=low+(high-low)/2;
        
        if(a[mid+1]<a[mid]&&mid<high)
        return a[mid+1];
        
        if(a[mid-1]>a[mid]&&mid>low)
        return a[mid];
        
        if(a[mid]>a[high])
        return fmin(a,mid+1,high);
        return fmin(a,low,mid-1);
    }
    



    int findMin(int a[], int n){
    
    int low=0;int high=n-1;
        fmin(a,low,high);
   
        }
};
