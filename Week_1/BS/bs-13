
#include<bits/stdc++.h>
using namespace std;


int main()
{
	int a[] = {0,0,0,0,    0,0,0,0,1    ,1,1,1,1,1,1,1};
	
    int s=0,e=1,mid=0;
    

    while(a[e]!=1)
    { 
        s=e;
        e=e<<1;
    }
    
    while(a[s+1]!=1)
    {
        mid=s+(e-s)/2;
        if(a[mid]==0)
        s=mid;
        else
        e=mid; 
    }
    

 cout<<"start at-"<<s;

    return 0;
}
