void printMedians(double arr[], int n)
{
    priority_queue<double> s;//lower half
  
    priority_queue<double,vector<double>,greater<double> > g;
  
    double med = arr[0];
    s.push(arr[0]);
  
    cout << med << endl;

    for (int i=1; i < n; i++)
    {
        double x = arr[i];
  
        if (s.size() > g.size())
        {
            if (x < med)
            {
                g.push(s.top());
                s.pop();
                s.push(x);
            }
            else
                g.push(x);
  
            med = (s.top() + g.top())/2.0;
        }
  
        else if (s.size()==g.size())
        {
            if (x < med)
            {
                s.push(x);
                med = (double)s.top();
            }
            else
            {
                g.push(x);
                med = (double)g.top();
            }
        }
  
        else
        {
            if (x > med)
            {
                s.push(g.top());
                g.pop();
                g.push(x);
            }
            else
                s.push(x);
  
            med = (s.top() + g.top())/2.0;
        }
  
        cout << med << endl;
    }
}
