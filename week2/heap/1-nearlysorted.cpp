int NearlySorted(int arr[], int n, int k)
{
    
    priority_queue<int, vector<int>, greater<int>>pq(arr,arr+k+1);
    
    int j=0;
    for(int i=k+1;i<n;i++)
    {
        arr[j++]=pq.top();
        pq.pop();
        pq.push(arr[i]);
    }
    
    while(!pq.empty())
    {
        arr[j++]=pq.top();
        pq.pop();
    }
    
    
}
