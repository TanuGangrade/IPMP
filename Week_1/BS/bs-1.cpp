#include<bits/stdc++.h>
using namespace std;

int bs(int a[],int l,int h,int key)
{int mid;
    while(l<=h)
    {
        mid=(l+h-1)/2;
        if(a[mid]==key)
        return mid;
        
        if(a[mid]>key)
       { h=mid-1;}
        else
        l=mid+1;
        
    }
    return -1;
}

int main()
{
   int a[]={10,20,30,40,50};
   cout<<sizeof(a)/sizeof(a[0]);
    cout<<" the index="<<bs(a,0,5,50);
    return 0;
}