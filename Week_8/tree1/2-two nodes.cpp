void ino(node* root, vector<int>& v)
    if (!root)
        return;
  
    ino(root->left, v);
    v.push_back(root->data);
    ino(root->right, v);
}
  
void util(node* root, int t1, int t2)
{
    if (!root) {
        return;
    }
    util(root->left, t1, t2);
    if (root->data == t1) {
        root->data = t2;
    }
    else if (root->data == t2) {
        root->data = t1;
    }
    util(root->right, t1, t2);
}
  
void correctBST(struct node* root)
{
    vector<int> v;
  
    ino(root, v);
  
    vector<int> v1 = v;
    sort(v, v.size());
  
    for (int i= 0; i<v.size(); i++) {
 
        if (v[i] != v1[i]) {
            util(root, v1[i], v[i]);
            break;
        }
    }
  
}
