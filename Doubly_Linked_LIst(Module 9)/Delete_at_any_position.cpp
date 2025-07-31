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
void delete_at(Node*&head,Node*&tail,int idx)
{
  Node*temp=head;
  for(int i=1;i<idx;i++)
  {
    temp=temp->next;
  }
  Node*deletenode=temp->next;
  temp->next=temp->next->next;
  temp->next->priv=temp;
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
    Node*head=new Node(10);
    Node*a=new Node(20);
    Node*b=new Node(100);
    Node*tail=new Node(30);
   
    head->next=a;
    a->priv=head;
    a->next=b;
    b->priv=a;
    b->next=tail;
    tail->priv=b;
   
    delete_at(head,tail,2);
    delete_at(head,tail,1);
    print_LL(head);


  return 0;
}