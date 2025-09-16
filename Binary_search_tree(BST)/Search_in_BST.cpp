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
Node*Input()
{
  int val; cin>>val;
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
bool search(Node*root,int value)
{
  if(root==NULL) return false;

  if(root->value==value)
   return true;
  
   if(root->value<value)
    return search(root->right,value);
   else
    return search(root->left,value);

}
int main()
{
  Node* root=Input(); 
  int val; cin>>val;
   if(search(root,val))
   {
     cout<<"Found"<<endl;
   }
   else 
   {
    cout<<"Not Found"<<endl;
   }
  return 0;
}