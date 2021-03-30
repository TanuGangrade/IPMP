
#include <bits/stdc++.h>
using namespace std;

int cel(int a[],int l,int h,int key)
{int mid;
  if(key <= a[l])
        return mid;

    if(key> a[h])
        return -1;

    while(l<=h)
    {
        mid=(l+h)/2;
        if(a[mid]==key || a[mid]>key && a[mid-1]<key)
        return mid;
        
        if(a[mid]>key)
       { h=mid-1;}
        else
        l=mid+1;
        
    }
    return -1;
}

int floor(int a[],int l,int h,int key)
{int mid;
  if(key >= a[h])
        return mid;

    if(key< a[l])
        return -1;

    while(l<=h)
    {
        mid=(l+h)/2;
        if(a[mid]==key || a[mid]<key && a[mid+1]>key)
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
    int arr[] = {1, 2, 8, 10, 10, 12, 19};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 3;
    int index = cel(arr, 0, n-1, x);
    if(index == -1)
        cout << "Ceiling of " << x << " doesn't exist in array ";
    else
        cout << "ceiling of " << x << " is " << arr[index];
     
     
 index = floor(arr, 0, n-1, x);
    if(index == -1)
        cout << " floor of " << x << " doesn't exist in array ";
    else
        cout << "floor of " << x << " is " << arr[index];
     
   
    return 0;
}