int majorityElement(int a[], int n)
    {
          
    map<int, int> m;
    
    for(int i=0;i<n;i++)
    {
        m[a[i]]+=1;
    }
   int max=0,j;
      
      for(int i=0;i<m.size();i++)
      {
          if(m[i]>max)
          { j=i;max=m[i];}
      }
      
      if(m[j]>n/2)
    return j;  
    else 
    return -1;
    
        // your code here
        
    }
