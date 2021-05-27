
void evenatend(string s){
  
vector<char>v;
 for(int i=0;i<s.length();i+=2)
  {
  	v.push_back(s[i]);
  }
  
  for(int i=1;i<s.length();i+=2)
  {
  	v.push_back(s[i]);
  }

  s="";
  for(int i=0;i<v.size();i++)
  {
  	s+=v[i];
  }
  cout<<s;

}
