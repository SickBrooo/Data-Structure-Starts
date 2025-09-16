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
  int val;cin>>val;
  Node*root;
  if(val==-1)
  {
    root=NULL;
  }
  else root=new Node(val);
  queue<Node*>q;
  if(root!=NULL)
  {
    q.push(root);
  }
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
int count(Node*root)
{
  if(root==NULL) return 0;
  int lft=count(root->left);
  int rit=count(root->right);
  return lft+rit+1;
}
int depth(Node*root)
{
  if(root==NULL)
  {
    return 0;
  }
  if(root->left==NULL&&root->right==NULL)
  {
    return 0;
  }
  int lft=depth(root->left);
  int rit=depth(root->right);
  return max(lft,rit)+1;
}
int main()
{
   Node*root=Input();
   int cnt=count(root);
   int d=depth(root);
   int Number_of_Nodes=(pow(2,d+1))-1;
   if(Number_of_Nodes==cnt)
   {
    cout<<"YES"<<endl;
   }
   else cout<<"NO"<<endl;
  return 0;
}