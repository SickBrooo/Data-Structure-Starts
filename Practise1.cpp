#include<bits/stdc++.h>
using namespace std;
 vector<int>v;
class Node
{
    public:
    int val;
    Node*left;
    Node*right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }

};
Node* Input()
{
    int val;
    cin>>val;
    Node*root;
    if(val==-1) root=NULL;
    else root=new Node(val);
    queue<Node*>q;
    if(root!=NULL)
    q.push(root);
    while(!q.empty())
    {
      Node*parent=q.front();
      q.pop();
      Node*ll,*rr;
      int l,r; cin>>l>>r;
      if(l==-1) ll=NULL;
      else ll=new Node(l);
      if(r==-1) rr=NULL;
      else rr=new Node(r);
      parent->left=ll;
      parent->right=rr;
      if(parent->left!=NULL) q.push(ll);
      if(parent->right!=NULL) q.push(rr);
    }
    return root;
}
void PrintTree(Node*root)
{
  if(root==NULL)
  {
    return;
  }
  if(root->left==NULL&&root->right==NULL)
  {
    v.push_back(root->val);
  }
  PrintTree(root->left);
  PrintTree(root->right);
 
}
int main()
{
  Node* root= Input();
    PrintTree(root);
    map<int,int>mp;
    for(int x:v)
    {
     mp[x]++;
    }
  auto it=mp.begin();
  cout<<(*it).first<<endl;

  return 0;
}