class Solution{
public:	
	
	int bsTop(int a[],int l,int h,int key)
    {int mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(a[mid]==key && a[mid-1]<key)
        return mid;

        if(a[mid]>=key)
        h=mid-1;
        else
        l=mid+1;
        
    }
    return -1;
}

	int bsBo(int a[],int l,int hi,int key)
    {int mid,h=hi;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(a[mid]==key && (a[mid+1]>key||mid+1==h))
        return mid;

        if(a[mid]<=key)
        l=mid+1;
        else
        h=mid-1;        
    }
    return -1;
}

	int count(int a[], int n, int x) {
	    
	    int low=bsTop(a,0,n,x);
	    int hi=bsBo(a,0,n,x);
	    if(hi!=-1)
	    return hi-low+1;
	    else return 0;
	    // code here
	}
};
