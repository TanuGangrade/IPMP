int findElement(int arr[], int size)
{
  int right_sum=0,
      left_sum = 0;
   
  
  left_sum = 0;

  right_sum = 0;
  int i = -1, j = -1;
 
  for(i = 0, j = size - 1;
      i < j; i++, j--)
  {
    left_sum +=arr[i];
    right_sum +=arr[j];
    while(left_sum < right_sum &&
          i < j)
    {
      i++;
      left_sum += arr[i];
    }
    while(right_sum < left_sum &&
          i < j)
    {
      j--;
      right_sum += arr[j];
    }
  }
   
  if(left_sum == right_sum && i == j)
    return arr[i];
  else
    return -1;
}
