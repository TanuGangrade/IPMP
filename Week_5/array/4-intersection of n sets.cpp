vector <int> getIntersection(vector < vector <int> > &sets)
{
    vector <int> result;  
    int Sindex = 0;  
    int minSize = sets[0].size();

    for (int i = 1 ; i < sets.size() ; i++)
    {
        sort(sets[i].begin(), sets[i].end());
  
        if (minSize > sets[i].size())
        {
            minSize = sets[i].size();
            Sindex = i;
        }
    }
  
    map<int,int> m;
  
   
    for (int i = 0; i < sets[Sindex].size(); i++)
    {
        if (m.find( sets[Sindex][i] ) == m.end())
            m[ sets[Sindex][i] ] = 1;
        else
            m[ sets[Sindex][i] ]++;
    }
  
    
    map<int,int>::iterator it;
    for (it = m.begin(); it != m.end(); ++it)
    {
        int elem = it->first;
        int freq = it->second;
  
        bool flag = true;
  
        for (int j = 0 ; j < sets.size() ; j++)
        {
            if (j != Sindex)
            {
                if (binary_search( sets[j].begin(), sets[j].end(), elem ))
                {
                   int low = lower_bound(sets[j].begin(), sets[j].end(), elem)
                                                            - sets[j].begin();
                   int high = upper_bound(sets[j].begin(), sets[j].end(), elem)
                                                            - sets[j].begin();
                   if ((high - low) < freq)
                       freq = high - low;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
        }
  
        if (flag)
        {
            for (int k = 0; k < freq; k++)
                result.push_back(elem);
        }
    }
    return result;
}
