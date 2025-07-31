#include<bits/stdc++.h>
using namespace std;
class Node
{
  public:
  int value;
  Node* right;
  Node* left;

  Node(int val)
  {
    this->value=val;
    this->right=NULL;
    this->left=NULL;
  }

};
void preOrder(Node* root)
{
  if(root==NULL)
  {
    return;
  }
  cout<<root->value<<" "; // we need a base case to stop the function;;
  preOrder(root->left);
  preOrder(root->right);
}

int main()
{
   Node* root=new Node(10);
      Node* a=new Node(20);
   Node* b=new Node(30);
   Node* c=new Node(40);
   Node* d=new Node(50);
   Node* e=new Node(60);

   root->left=a;
   a->left=c;
   root->right=b;
   b->left=d;
   b->right=e;
  
   preOrder(root);
  
  return 0;
}