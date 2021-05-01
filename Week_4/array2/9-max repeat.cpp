
int most_frequent_element(std::vector<int>& v, int k) {
  
          int sz = v.size();
  
          for(int i = 0; i < v.size(); ++i) {
             v[v[i]%sz] += sz;
          }

          int mf = INT_MIN;
          int max = INT_MIN;
          for(int i = 0; i < v.size(); ++i) {
                  int freq = (v[i] - v[i]%sz)/sz;

                if(mf < freq) {
                  mf = freq;
                  max = i;
                  } 

                else if(mf == freq && i < max) {
                  max = i;
                  }
          }
          return max;
}
