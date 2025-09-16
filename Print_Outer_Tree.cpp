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
   q.push(root);
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
vector<int>v2;
void traverse_left(Node*root)
{
  if(root!=NULL)
  {
    v2.push_back(root->value);
  }
  while(root!=NULL)
  {
    if(root->left!=NULL)
    {
      root=root->left;
    }
    else root=root->right;
    if(root==NULL) break;
    v2.push_back(root->value);
  }
}
vector<int>v;
void traverse_right(Node*root)
{
   if(root!=NULL)
   {
    v.push_back(root->value);
   }
   while(root!=NULL)
   {
    if(root->right)
    {
      root=root->right;
    }
    else root=root->left;
    if(root==NULL) break;
    v.push_back(root->value);
   }
}
int main()
{
   Node* root=Input();
   traverse_right(root->right);
   traverse_left(root->left);
   for(auto it=v2.rbegin();it!=v2.rend();++it)
   {
    cout<<*it<<" ";
   }
   if(root!=NULL)
   {
    cout<<root->value<<" ";
   }
   for(int x:v)
   {
    cout<<x<<" ";
   }
  return 0;
}