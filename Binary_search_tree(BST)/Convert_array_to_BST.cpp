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
Node* Convert(int arr[],int n,int l,int r)
{
  if(l>r) return NULL;
   int mid=(l+r)/2;
   Node*root=new Node(arr[mid]);
   Node*leftroot=Convert(arr,n,l,mid-1);
   Node*rightroot=Convert(arr,n,mid+1,r);
   root->left=leftroot;
   root->right=rightroot;
   return root;
}
void Print(Node*root)
{
  queue<Node*>q;
  if (root!=NULL) q.push(root);
  while(!q.empty())
  {
    Node*parent=q.front();
    q.pop();
    cout<<parent->value<<" ";
    if(parent->left!=NULL) q.push(parent->left);
    if(parent->right!=NULL) q.push(parent->right);
  }
}
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   Node*root=Convert(arr,n,0,n-1);
   Print(root);
  return 0;
}