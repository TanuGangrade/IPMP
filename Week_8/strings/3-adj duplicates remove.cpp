string removeDuplicates(string s) {
       int i=1; int count=s.length();
        
      while(i<count)
      {
          if(s[i]==s[i-1])
             { s=s.substr(0,i-1)+s.substr(i+1,s.length()-i-1);
             count=s.length();
              if(i==1)
              i=0;
             else
              i-=2;}
          i++;
      }
          
        return s;
        
        
    }
