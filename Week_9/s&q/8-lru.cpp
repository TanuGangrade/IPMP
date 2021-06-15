


void LRU(int x)
{
  list<int> q;
  
    unordered_map<int, list<int>::iterator> m;
    if (ma.find(x) == ma.end()) {

      if (dq.size() == csize) {
            int last = q.back();
  
            q.pop_back();
  
            m.erase(last);
        }
    }
  
    else
        dq.erase(m[x]);
  
    q.push_front(x);
    m[x] = q.begin();
}
