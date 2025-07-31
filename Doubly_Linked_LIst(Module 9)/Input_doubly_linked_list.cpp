#include<bits/stdc++.h>
using namespace std;
class Node
{
  public:
  int value;
  Node* next;
  Node* priv;

  Node(int val)
  {
    this->value=val;
    this->next=NULL;
    this->priv=NULL;
  }
};
void insert_at_tail(Node*&Head,Node*&tail,int value)
{
  Node*newnode=new Node(value);
  if(Head==NULL)
  {
    Head=newnode;  // corner case if thers no Node in the list;
    tail=newnode;
    return;
  }
  tail->next=newnode;
  newnode->priv=tail;
  tail=newnode; // have to move tail along with it >>>>>>
}
void print_LL(Node*head)
{
  Node*temp=head;
  while(temp!=NULL)
  {
    cout<<temp->value<<" ";
    temp=temp->next;
  }
}
int main()
{
  Node*head=NULL;
  Node*tail=NULL;

  int val;
  while(true)
  {
    cin>>val;
    if(val==-1)
    {
      break;
    }
    insert_at_tail(head,tail,val);
  }
   print_LL(head);

  return 0;
}