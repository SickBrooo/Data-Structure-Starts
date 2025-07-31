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
void print_forward(Node*head)
{
  Node*temp=head;
  while(temp!=NULL)
  {
    cout<<temp->value<<" ";
    temp=temp->next;
  }
}
void print_backward(Node*tail)
{
  Node*temp=tail;
  while(temp!=NULL)
  {
    cout<<temp->value<<" ";
    temp=temp->priv;
  }
}
int main()
{
  Node*head=new Node(10);
  Node*a=new Node(20);
  Node*tail=new Node(30);
  
  head->next=a;
  a->priv=head;

  a->next=tail;
  tail->priv=a;

  print_forward(head);
  cout<<"\n";
  print_backward(tail);
   

  return 0;
}