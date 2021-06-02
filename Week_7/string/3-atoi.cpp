 int atoi(string str)
    { int sign=1;
        //Your code here
        int a,l=str.length();
        for(int i=0;i<l;i++)
{       
    if(i==0&&str[i]=='-')
    {sign=-1;i++;}
    
        if(isalpha(str[i]))
        return -1;
        a+=pow(10,(l-i-1))*(str[i]-'0');
}        
       
        
        return sign*a;
    }
