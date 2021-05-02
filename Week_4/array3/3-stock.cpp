//its just max diff bw 2 elements 
int maxProfit(vector<int>& arr) {
         int max = 0;
      
     int small = arr[0];
     for(int i = 1; i < arr.size(); i++)
     {    
       if (arr[i] - small > max)                            
       max = arr[i] - small;
        
       if (arr[i] < small)
       small = arr[i];                    
     }
      
        
        
     return max;
    }
