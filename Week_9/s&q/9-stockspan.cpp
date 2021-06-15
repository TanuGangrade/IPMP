vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       stack<int>s;
       vector<int>v;
       
       s.push(0);v.push_back(1);
       for(int i=1;i<n;i++){
           
       while(!s.empty()&&price[i]>price[s.top()])
       s.pop();
       
       int t=s.empty()?i+1:i-s.top();
       v.push_back(t);
       
       s.push(i);
       
       }
    
    return v;}
