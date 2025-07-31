#include<bits/stdc++.h>
using namespace std;
class Node
{
  public:
  int value;
  Node* next;
  Node* prev;

  Node(int val)
  {
    this->value=val;
    this->next=NULL;
    this->prev=NULL;
  }
};
void insert_at_tail(Node*&head,Node*&tail,int value)
{
  Node*newnode=new Node(value);
  if(head==NULL)
  {
    head=newnode;
    tail=newnode;
    return;
  }
  tail->next=newnode;
  newnode->prev=tail;
  tail=tail->next;
}
void delete_at_tail(Node*&head,Node*&tail)
{
  if(tail==NULL)
  {
    return;  // this is for empty Node;
  }
  Node*deletenode=tail;
  if(head==tail)
  {
    head=NULL;
    tail=NULL; // this is for if theres only oNe node;
  }
  else
  {
    tail=tail->prev;
    tail->next=NULL; // putting NULL after tail
  }
  delete deletenode;
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
   while(1)
   {
    cin>>val;
    if(val==-1)
    {
      break;
    }
    insert_at_tail(head,tail,val);
   }
   delete_at_tail(head,tail);
   print_LL(head);

  return 0;
}