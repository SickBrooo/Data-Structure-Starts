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
  else
  {
    root=new Node(val);
  }
  queue<Node*>q;
  if(root!=NULL)
  q.push(root);
  while(!q.empty())
  {
    Node*parent=q.front();
    q.pop();

    int l,r;cin>>l>>r;
    Node*myleft,*myright;
    if(l==-1)
    myleft=NULL;
    else
    myleft=new Node(l);
    if(r==-1){ myright=NULL; }
    else myright=new Node(r);
    parent->left=myleft;
    parent->right=myright;
    
    if(parent->left!=NULL)
    {
      q.push(myleft);
    }
    if(parent->right!=NULL)
    {
      q.push(myright);
    }
  }
  return root;
}
void PrintTree(Node*root)
{
  if(root==NULL)
  {
    return;
  }
   cout<<root->value<<" ";
  PrintTree(root->left);
  PrintTree(root->right);
 
}
int main()
{
   Node* root=Input();

   PrintTree(root);

  return 0;
}