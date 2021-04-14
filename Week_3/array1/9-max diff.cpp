int maxDiff(int arr[], int arr_size)
{
     int max = arr[1] - arr[0];
      
     int small = arr[0];
     for(int i = 1; i < arr_size; i++)
     {    
       if (arr[i] - small > max)                            
       max = arr[i] - small;
        
       if (arr[i] < small)
       small = arr[i];                    
     }
      
     return max;
}
