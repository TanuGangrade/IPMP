 void vsum(Node *root, int hd,
                     map<int, int> &m)
{
    if (root == NULL) return;
    vsum(root->left, hd-1, m);
    m[hd] += root->data;
  
    vsum(root->right, hd+1, m);
}
  
vector<int> verticalSum(Node *root)
    map< int, int> m;
    map< int, int> :: iterator it;
  vector<int>v;

vsum(root, 0, m);

for (it = m.begin(); it != m.end(); ++it)
     v.push_back(it->second);
    
    return v;
}
};
