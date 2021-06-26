int maxSumIS(int arr[], int n)
{
    int i, j, max = 0;
    int a[n];
 
    for ( i = 0; i < n; i++ )
        a[i] = arr[i];
 
    for ( i = 1; i < n; i++ )
        for ( j = 0; j < i; j++ )
            if (arr[i] > arr[j] &&a[i] < a[j] + arr[i])
                a[i] = a[j] + arr[i];
 
    for ( i = 0; i < n; i++ )
        if ( max < a[i] )
            max = a[i];
 
    return max;
}
