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
Node* Input()
{
  int val;
  cin>>val;
  Node* root;
  if(val==-1) root=NULL;
  else root=new Node(val);
  queue<Node*>q;
  if(root!=NULL) q.push(root);
  while(!q.empty())
  {
    Node*parent=q.front();
    q.pop();
    int l,r;
    cin>>l>>r;
    Node*ll,*rr;
    if(l==-1) ll=NULL;
    else ll=new Node(l);
    if(r==-1) rr=NULL;
    else rr=new Node(r);
    parent->left=ll;
    parent->right=rr;
    if(parent->left!=NULL) q.push(parent->left);
    if(parent->right!=NULL) q.push(parent->right);
  }
  return root;
}
void print(Node*root)
{
  queue<Node*>q;
  if(root!=NULL) q.push(root);
  while(!q.empty())
  {
    Node*parent=q.front();
    q.pop();
    cout<<parent->value<<" ";
    if(parent->left!=NULL) q.push(parent->left);
    if(parent->right!=NULL) q.push(parent->right);
  }
}
void Insert(Node*root,int val)
{
  if(root==NULL)
  {
    root=new Node(val);
  }
  if(root->value<val)
  {
    if(root->right==NULL)
    {
      root->right=new Node(val);
    }
    else Insert(root->right,val);
  }
  if(root->value>val)
  {
    if(root->left==NULL)
    {
      root->left=new Node(val);
    }
    else
    {
      Insert(root->left,val);
    }
  }
}
int main()
{
   Node*root=Input();
   int value;
   cin>>value;
   Insert(root,value);
   Insert(root,11);
   print(root);
  return 0;
}