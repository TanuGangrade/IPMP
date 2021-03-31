
    void merge(int arr[], int l, int m, int r)
    {
         int n1=m-l+1;
         int n2=r-m;
         int a[n1],b[n2];
         int i,j,k;
         
         for(i=0;i<n1;i++)
            a[i]=arr[l+i];
         
         for(i=0;i<n2;i++)
         b[i]=arr[i+m+1];
         
          i=0,j=0,k=l;
         while(i<n1&&j<n2)
         {
             if(a[i]>=b[j])
             {arr[k]=b[j];j++;}
             else
             {arr[k]=a[i];i++;}
             k++;
             
         }
         
         while(i<n1)
         {
             arr[k++]=a[i++];
         }
         while(j<n2)
         arr[k++]=b[j++];
         
         
    }
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l>=r)
        return;
        
        int m=l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
