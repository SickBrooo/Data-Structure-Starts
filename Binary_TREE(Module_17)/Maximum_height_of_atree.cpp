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
  Node*root; if(val==-1) root=NULL; else root=new Node(val);
  queue<Node*>q;
  if(root!=NULL) q.push(root);
  while(!q.empty())
  {
    Node*p=q.front();
    q.pop();
    int l,r;
    cin>>l>>r;
    Node*myleft,*myright;
    if(l==-1) myleft=NULL; else myleft=new Node(l);
    if(r==-1) myright=NULL; else myright=new Node(r);
    p->left=myleft; p->right=myright;
    if(p->left!=NULL) q.push(p->left);
    if(p->right!=NULL) q.push(p->right);
  }
  return root;
}
int count_height(Node*root)
{
  if(root==NULL)
  {
    return 0;
  }
  if(root->left==NULL&&root->right==NULL)
  {
    return 0;
  }
  int left=count_height(root->left);
  int right=count_height(root->right);
  return max(left,right)+1;
}
int main()
{
  Node* root=Input();
   
  int height=count_height(root);
  cout<<height;

  return 0;
}