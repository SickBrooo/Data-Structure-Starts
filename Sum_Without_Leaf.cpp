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
  if(val==-1) root==NULL;
  else root=new Node(val);
  queue<Node*>q;
  if(root!=NULL) q.push(root);
  while(!q.empty())
  {
    Node*parent=q.front();
    q.pop();
    int l,r;
    cin>>l>>r;
    Node*myleft,*myright;
    if(l==-1) myleft=NULL;
    else myleft=new Node(l);
    if(r==-1) myright=NULL;
    else myright=new Node(r);
    if(myleft!=NULL) parent->left=myleft;
    if(myright!=NULL) parent->right=myright;
    if(parent->left!=NULL) q.push(parent->left);
    if(parent->right!=NULL) q.push(parent->right);
  }
  return root;
}
int Output(Node*root)
{
  int sum=0;
  queue<Node*>q;
  if(root==NULL)
  {
    return 0;
  }
  q.push(root);
  while(!q.empty())
  {
    Node*parent=q.front();
    q.pop();
    if(parent->left==NULL&&parent->right==NULL)
    {
      continue;
    }
    else sum=sum+parent->value;
    if(parent->left!=NULL)
    {
      q.push(parent->left);
    }
    if(parent->right!=NULL)
    {
      q.push(parent->right);
    }
  }
  return sum;

}
int main()
{
   Node*root=Input();
   int x=Output(root);
   cout<<x<<" ";
  return 0;
}