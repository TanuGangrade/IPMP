 vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long>v(n,-1);
        
        stack<int>s;
        s.push(0);
        
        for(int i=1;i<n;i++)
        {
            if (s.empty()) {
            s.push(i);
            continue;
        }
            
            while(!s.empty()&&arr[i]>arr[s.top()])
           { v[s.top()]=arr[i];
               s.pop();
           }
            
            s.push(i);
            
            
            
            
        }
        
        
        
        
        return v;
    }
