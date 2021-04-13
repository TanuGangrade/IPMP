pair<int,int> twoRepeated (int arr[], int N)
    {
        // Your code here

    map<int,int>m;
    vector<int>v;
    
    for(int i=0;i<N+2;i++)
    m[arr[i]]+=1;
    
  for(int i=0;i<N+2;i++)
   if(m[arr[i]]==2 && find(v.begin(),v.end(),arr[i])==v.end()   )
   v.push_back(arr[i]);
    
    pair<int,int>p;
    p.first=v.front();
    p.second=v.back();
    
    return p;
    
    
    }
