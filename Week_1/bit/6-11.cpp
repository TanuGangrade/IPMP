7)
      int main()
    {  //turn off rightmost set bit
         int a=12;
        int b=a&(a-1);
        cout<<b;


        return 0;
    }

8)
        
      int add(int a,int b)
      {
            while(b)
            {
                  int c=a&b;
                  a=a^b;
                  b=c<<1;

            }
            return a;

      }
  
9) unsigned int getFirstSetBitPos(int n)
{
    return log2(n & -n)+1;
}

10) unsigned int swapBits(unsigned int x) 
{ 
       unsigned int even=x& 0xAAAAAAAA; 
 
    unsigned int odd=x& 0x55555555; 
  
    even >>= 1; 
    odd <<= 1;
  
    return (even| odd);
} 

11) 
      
      int po2(int n)
{
    return n&&(!(n&(n-1)));
}
  
int findPosition(int n)
{
    if (!po2(n))
        return -1;
  
    int i=1, p=1;
  
    while (!(i&n)) {
        i =i<<1;
          ++p;
    }
  
    return p;
}


