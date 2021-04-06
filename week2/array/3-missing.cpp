int MissingNumber(vector<int>& array, int n) {
    // Your code goes here
    
    int sum=(n+1)*(n)/2;
    int sumcheck=0;
    
    for(auto i=0;i<array.size();i++)
    {
        sumcheck+=array[i];
    }
    
    return sum-sumcheck;
    
}
