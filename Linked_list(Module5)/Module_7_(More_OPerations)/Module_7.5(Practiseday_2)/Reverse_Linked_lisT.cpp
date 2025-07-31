#include<bits/stdc++.h>
using namespace std;class Node
{
  public:
  int value;
  Node* next;

  Node(int val)
  {
    this->value=val;
    this->next=NULL;
  }

};
void Insert_(Node*&head,Node*&tail,int value)
{
  Node*newnode=new Node(value);
  if(head==NULL)
  {
    head=newnode;
    tail=newnode;
  }
  tail->next=newnode;
  tail=tail->next;
}
void Reverse(Node*temp)
{
  if(temp==NULL)
  {
    return;
  }
  Reverse(temp->next);
  cout<<temp->value<<" ";
}
int main()
{
   Node*head=NULL;
   Node*tail=NULL;

   int val;
   while(1)
   {
    cin>>val;
    if(val==-1)
    {
      break;
    }
    Insert_(head,tail,val);
   }

   Reverse(head);

  return 0;
}