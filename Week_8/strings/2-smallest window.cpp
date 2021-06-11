string findSubString(string str, string pat)
{
    int l1=str.length();
    int l2=pat.length();
 
    if (l1<l2) {
       return "-1";
    }
 
    int hashP[256]={ 0 };
    int hashS[256]={ 0 };
 
    for (int i=0; i<l2; i++)
        hashP[pat[i]]++;
 
    int start=0, finalstart=-1, min=INT_MAX;
 
    int count=0;
    for (int j=0; j < l1; j++) {
       
        hashS[str[j]]++;
      
        if (hashS[str[j]]<= hashP[str[j]])
            count++;
 
            while (hashS[str[start]] > hashP[str[start]]  || hashP[str[start]] == 0) {
 
                if (hashS[str[start]] > hashP[str[start]])
                    hashS[str[start]]--;
                start++;
            }
 
            int l=j - start + 1;

            if (min > l) {
                min=l;
                finalstart=start;
            }
        }
    }
 
    if (finalstart == -1) {
        return "-1";
    }
 
    return str.substr(finalstart, min_len);
}
