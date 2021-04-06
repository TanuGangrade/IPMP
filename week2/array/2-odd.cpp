 int getOddOccurrence(int arr[], int n) {
        // code herei
        int s=0;
        
        for(int i=0;i<n;i++)
    {
        s^=arr[i];
    }
        
        return s;
    }
