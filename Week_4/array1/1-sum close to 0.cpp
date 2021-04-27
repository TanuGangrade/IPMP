 int closestToZero(int a[], int n)
        {
            // your code her
            sort(a,a+n);
            int l=0,r=n-1;
            int x=0,y=n-1;
            int min=a[r]+a[l];
            int sum;
            
                while(l<r)
                {
                    sum=a[r]+a[l];
                    if(abs(sum)<abs(min))
                   { min=sum;
                       x=l;
                       y=r;
                   }
                   if(sum>0)
                   r--;
                   else
                   l++;
                    
                }
                
            return a[x]+a[y];
            
            
        }
