int FindMaxSum(vector<int> arr, int n)
{
    int incl=arr[0];
    int excl = 0;
    int temp;
    int i;
 
    for (i = 1; i < n; i++)
    {
        temp =(incl > excl) ? incl : excl;
 
        incl = excl + arr[i];
        excl = temp;
    }
 
    return ((incl > excl) ? incl : excl);
}
