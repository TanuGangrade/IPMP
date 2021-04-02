int bs(int a[], int low, int high)
{
    if(high >= low)
    {
        int mid = (low + high)/2; 
        if(mid == a[mid])
            return mid;
        if(mid > a[mid])
            return bs(a, (mid + 1), high);
        else
            return bs(a, low, (mid -1));
    }
 
    return -1;
}
 
