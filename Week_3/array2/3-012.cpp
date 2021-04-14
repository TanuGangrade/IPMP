void sort012(int a[], int n)
    {
        // coode here 
        int low=0,high=n-1,mid=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==2)
            {swap(a[high],a[i]);
                high--;
                i--;
                n--;
            }
           else if(a[i]==0)
            {swap(a[low],a[i]);
                low++;mid++;
            }
             else if(a[i]==1)
            {
                swap(a[mid],a[i]);
                mid++;
            }
            
           
           
        }
    }
