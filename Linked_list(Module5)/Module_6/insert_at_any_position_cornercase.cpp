#include<bits/stdc++.h>
using namespace std;
class Node
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
void insert_at_any_pos(Node*head,int idx,int value)
{
  Node* newnode=new Node(value);
  Node* temp=head;
  for(int i=0;i<idx-1;i++)
  {
    temp=temp->next;
    if(temp==NULL)
    {
      return;  //when Index is greater than the actual index;;;;;
    }
  }
  newnode->next=temp->next;
  temp->next=newnode;
  
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
  Node* Head=new Node(10);
  Node* a=new Node(10);
  Node* b=new Node(10);
  Node* tail=new Node(10);

  Head->next=a;
  a->next=b;
  b->next=tail;

  insert_at_any_pos(Head,1,100);
  print_LL(Head);

  return 0;
}