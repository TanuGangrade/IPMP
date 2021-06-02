bool isAnagram(char a[], char b[]){
    
    // Your code here
int count[265]={0},i;
for( i=0;a[i]!='\0'&& b[i]!='\0';i++)
{    count[a[i]]++;
   count[b[i]]--;}
   
   if(a[i]||b[i])
   return 0;
    
    for(int i=0;i<265;i++)
    if(count[i]!=0)
    return 0;
    return 1;
}
