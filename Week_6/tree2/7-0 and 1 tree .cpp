int main()
{
  

  string c="0";

  cout<<"enter the num of levels-";
  int h;
  cin>>h;
  int k;
  cout<<"enter k=";
  cin>>k;

  for(int i=0;i<h;i++)
  { string s="";
    for(int i=0;i<c.length();i++)
    {
      if(c[i]=='0')
      {s+='0';
       s+='1';
       }

       if(c[i]=='1')
      {s+='1';
       s+='0';
       }
  }

  c=s;

  }

cout<<"ans="<<c[k];


  return 0;
}
