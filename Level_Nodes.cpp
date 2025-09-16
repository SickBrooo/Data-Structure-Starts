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
vector<int>v;
int level;
int max_height(Node*root)
{
   if(root==NULL)
   {
    return 0;
   }
   if(root->left==NULL&&root->right==NULL)
   {
    return 0;
   }
   int left=max_height(root->left);
   int right=max_height(root->right);
   return max(left,right)+1;
} 
void output(Node*root,int x)
{
  int level;
  queue<pair<Node*,int>>q;
  if(root!=NULL) q.push({root,0});
  while(!q.empty())
  {
     pair<Node*,int>p=q.front();
     q.pop();
     Node*parent=p.first;
     level=p.second;
     if(level==x)
     {
      v.push_back(parent->value);
     }
     if(parent->left!=NULL)
     {
      q.push({parent->left,level+1});
     }
     if(parent->right!=NULL)
     {
       q.push({parent->right,level+1});
     }
  }
}
int main()
{
   Node*root=Input();
   cin>>level;
   int x=max_height(root);
   if(level>x)
   {
     cout<<"Invalid"<<endl;
   }
   output(root,level);
   for(int val:v)
   {
    cout<<val<<" ";
   }
  return 0;
}