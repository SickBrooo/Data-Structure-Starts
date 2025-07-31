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
void Insert_at_tail_DLL(Node*&head,Node*&tail,int value)
{
  Node*newnode=new Node(value);
  if(head==NULL)
  {
    head=newnode;
    tail=newnode;
    return;
  }
  tail->next=newnode;
  newnode->priv=tail;
  tail=newnode;
}
void print_DLL(Node*head)
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
  // Node*a=new Node(20);
  Node*tail=NULL;

  // head->next=a;
  // a->priv=head;

  // a->next=tail;
  // tail->priv=a;

   Insert_at_tail_DLL(head,tail,100);
   Insert_at_tail_DLL(head,tail,200);
   Insert_at_tail_DLL(head,tail,300);

   print_DLL(head);
   

  return 0;
}