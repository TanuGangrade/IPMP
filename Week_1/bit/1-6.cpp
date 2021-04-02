1)      class Solution{
                  public:
                  // Function to check if given number n is a power of two.
                  bool isPowerofTwo(long long n){

                     return n&&(!(n&(n-1)));


                  }
              };

2)
     long long reversedBits(long long x) {
        // code here
        int numOfBits=sizeof(x)*8;
        unsigned int reverse;
        
        for(int i=0;i<numOfBits;i++)
        {
            int temp=x&(1<<i);
           
            if(temp)
            {
                reverse|=1<<(numOfBits-1-i);
            }
        }
        return reverse;
    }
    
    
3)
        int setBits(int N) {
        int count=0;
        unsigned int numofbits=sizeof(N)*8;
        for(int i=0;i<numofbits;i++)
        {
            int temp=N&(1<<i);
            if(temp)
            count++;
        }
        return count;
    }
    
    
  4)  int countBitsFlip(int a, int b){
        
        unsigned int n1=sizeof(a)*8;
        unsigned int n2=sizeof(b)*8;
        int count=0;
        for(int i;i<(n1>n2?n1:n2);i++)
        {
            int temp1=a&(1<<i);
            int temp2=b&(1<<i);
            if(temp1!=temp2)
            count++;
        }
        return count;

        
    }
   
   
5)
  
vector <int> rotate (int n, unsigned int d)
        {
            vector<int> ans(2);
            int x=16-d;
            ans[0]= n<<d|n>>x;
            ans[1]= n>>d|(n<<x);
            return ans;
        }


6)int main()
{   int a=-4;
    int size=sizeof(a)*8;//32
    int mark=a>>(size-1);//we have sign bit;
    a=a^mark;//toggle if mark is 1
    a=a-mark;//2s compliment, minus 1
    cout<<a;
    
    return 0;
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
