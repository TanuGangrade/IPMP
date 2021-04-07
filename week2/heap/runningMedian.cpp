void printMedians(double arr[], int n)
{
    priority_queue<double> s;//lower half, max heap, so we store smaller elements here
  
    priority_queue<double,vector<double>,greater<double> > g;// min heap
    // we need to store smaller half nums in max heap so we can take the largest of them , and larger half nums in min heap so we get the smallest among them
  
    double med = arr[0];
    s.push(arr[0]);
  
    cout << med << endl;

    for (int i=1; i < n; i++)
    {
        double x = arr[i];
  
        if (s.size() > g.size()) //max heap has more elements
        {
            if (x < med) // so x would do to max heap, but then there woule be more then 1 difference in the heaps, 
                //so we transfer the top(largest) of max heap(smaller half elements) to min heap
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
