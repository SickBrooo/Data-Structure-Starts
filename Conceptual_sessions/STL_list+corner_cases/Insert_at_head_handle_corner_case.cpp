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
void insert_at_head(Node*&head,Node*&tail,int value)
{
  Node*newnode=new Node(value);
  if(head==NULL)
  {
    head=newnode;
    tail=newnode; 
    return;
  }
  head->prev=newnode;
  newnode->next=head;
  head=newnode;
}
void print_list_forward(Node*head)
{
  Node*temp=head;
  while(temp!=NULL)
  {
    cout<<temp->value<<" ";
    temp=temp->next;

  }
}
void print_list_backward(Node*tail)
{
  Node*temp=tail;
  while(temp!=NULL)
  {
    cout<<temp->value<<" ";
    temp=temp->prev;

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
    insert_at_head(head,tail,val);
  }
   print_list_forward(head);
   cout<<endl;
   print_list_backward(tail);

  return 0;
}