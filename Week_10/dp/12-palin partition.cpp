bool isPalindrome(string String, int i, int j)
{
    while(i < j)
    {
      if(String[i] != String[j])
        return false; 
      i++;
      j--;
    }
    return true;
}
int palinPart(string String, int i, int j)
{
    if( i >= j || isPalindrome(String, i, j) )
      return 0;
    int ans = INT_MAX, count;
    for(int k = i; k < j; k++)
    {
      count = palinPart(String, i, k) +
        palinPart(String, k + 1, j) + 1;
  
      ans = min(ans, count);
    }
    return ans;
}
