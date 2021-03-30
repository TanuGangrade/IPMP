#include <bits/stdc++.h>
using namespace std;

int findMaximum(int a[],int l,int h)
{
    int mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(a[mid-1]<a[mid] && a[mid+1]<a[mid])
        return a[mid];

        if(a[mid-1]<a[mid] && a[mid+1]>a[mid])
        l=mid+1;
        else
        h=mid-1;        
    }
    return -1;
}




int main() 
{ 
    int arr[] = {1, 30, 40, 50, 60, 70, 23, 20}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout << "The maximum element is " << findMaximum(arr, 0, n-1); 
    return 0; 
} 
