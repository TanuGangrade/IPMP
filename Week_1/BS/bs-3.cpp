#include<bits/stdc++.h>
using namespace std;

int bs(int a[],int l,int h,int key)
{int mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(a[mid]==key && a[mid-1]<key)
        return mid;

        if(a[mid]>=key)
        h=mid-1;
        else
        l=mid+1;
        
    }
    return -1;
}



int search(int a[],int x ,int size){

 int first=bs(a,0,size,x);

if(a[first+size/2]==x)
return 1;
else return 0;
}



int main()
{
    int a[]={1, 2, 3, 3, 3, 3, 10};
    int x=3;
    int size=sizeof(a)/sizeof(a[0]);
    cout<<search(a,x,size);
    return 0;
}