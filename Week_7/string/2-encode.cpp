char *encode(char *s)
{     
  //Your code here 
  
  int count=0; char a;
  char *res=new char[1000];
  int j=0;
  int i=0;
  while(s[i]!='\0')
  { a=s[i];count=0;
      while(s[i]==a && s[i]!='\0')
     { count++;i++;}
    
    res[j]=a;j++;res[j]='0'+count;j++;  
      
      
      
  }
  return res;
}   
