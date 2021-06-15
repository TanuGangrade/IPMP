vector <int> printKMax(int arr[], int n, int k)
{
  vector <int>v;
    int j, max;
 
    for (int i = 0; i <= n - k; i++)
    {
        max = arr[i];
 
        for (j = 1; j < k; j++)
        {
            if (arr[i + j] > max)
                max = arr[i + j];
        }
        v.push_back(max);
    }
  return v;
}
