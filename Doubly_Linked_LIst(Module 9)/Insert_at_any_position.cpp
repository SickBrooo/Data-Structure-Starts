#include<bits/stdc++.h>
using namespace std;
class Node
{
  public:
  int value;
  Node* next;
  Node*priv;

  Node(int val)
  {
    this->value=val;
    this->next=NULL;
    this->priv=NULL;
  }

};
void insert_at_any_pos(Node*head,int idx,int value)
{
  Node*newnode=new Node(value);
  Node*temp=head;
  for(int i=0;i<idx;i++)
  {
    temp=temp->next;
  }
  cout<<temp->value<<" ";
  newnode->next=temp->next; // must maintain the first serial..
  temp->next->priv=newnode; // connect with the next node first..
  temp->next=newnode;        // visualized correctly now practise yourself....
  newnode->priv=temp;
 
}
void print_forward(Node*&head)
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
  Node*head=new Node(10);
  Node*a=new Node(20);
  Node*tail=new Node(30);

  head->next=a;
  a->priv=head;
  a->next= tail;
  tail->priv=a;

  insert_at_any_pos(head,1,100);
  insert_at_any_pos(head,1,200);
  print_forward(head);

  return 0;
}