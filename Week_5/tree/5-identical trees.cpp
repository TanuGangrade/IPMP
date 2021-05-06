 bool isIdentical(Node *r1, Node *r2)
    {
        if(!r2&&!r1)
        return true;
        //Your Code here
        if(r1&&!r2 || r2&&!r1)
        return false;
        
        
        
        
        return isIdentical(r1->right,r2->right)&&isIdentical(r1->left,r2->left) && (r2->data==r1->data);
    }