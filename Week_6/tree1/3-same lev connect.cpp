Node* get(Node* p){
  Node* temp=p;
  while(temp){
    if(temp->left) return temp->left;
    if(temp->right) return temp->right;
    temp=temp->nextRight;
  }
  return temp;
}


void connect1(Node* p){
  if(p==NULL) return;
  //if(p->nextRight!=NULL) connect1(p->nextRight);
  if(p->left)
  {
    if(p->right){
    p->left->nextRight=p->right;
    }
    else{
    p->left->nextRight=get(p->nextRight);
    }

   connect1(p->left);
  }

  if(p->right){
  p->right->nextRight=get(p->nextRight);
  connect1(p->right);
  }
}

void connect(Node *p)
{
if(p==NULL) return;
p->nextRight=NULL;
connect1(p);
}
