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
  Node*temp=head;
  temp->prev=newnode;
  newnode->next=temp;
  head=newnode;

}
void insert_at_tail(Node*&head,Node*&tail,int value)
{
  Node*newnode=new Node(value);
  if(head==NULL)
  {
    head=newnode;
    tail=newnode;
    return;
  }
  Node*temp=tail;
  temp->next=newnode;
  newnode->prev=temp;
  tail=newnode;
}
void insert_at_any_pos(Node*&head,Node*&tail,int idx,int value)
{
  Node*newnode=new Node(value);
  Node*temp=head;
  for(int i=1;i<idx;i++)
  {
    temp=temp->next;
  }
  newnode->next=temp->next;
  newnode->next->prev=newnode;
  temp->next=newnode;
  newnode->prev=temp;
}
int count_size(Node*head)
{
  Node*temp=head;
  int count=0;
  while(temp!=NULL)
  {
    count++;
    temp=temp->next;
  }
  return count;
}
void print_forward(Node*head)
{
  Node*temp=head;
  cout<<"L -> ";
  while(temp!=NULL)
  {
    cout<<temp->value<<" ";
    temp=temp->next;
  }
  cout<<endl;
}
void print_backward(Node*tail)
{
  Node*temp=tail;
  cout<<"R -> ";
  while(temp!=NULL)
  {
    cout<<temp->value<<" ";
    temp=temp->prev;
  }
  cout<<endl;
}
int main()
{
   Node*head=NULL;
   Node*tail=NULL;

   int q;
   cin>>q;
   int val,idx;
   while(q--)
   {
     int size=count_size(head);
     cin>>idx>>val;
     if(idx<0||idx>size)
     {
      cout<<"Invalid"<<endl;
     }
     else if(idx==0)
     {
      insert_at_head(head,tail,val);
      print_forward(head);
      print_backward(tail);
     }
    else if(idx==size)
     {
      insert_at_tail(head,tail,val);
      print_forward(head);
      print_backward(tail);
     }
     else
     {
      insert_at_any_pos(head,tail,idx,val);
      print_forward(head);
      print_backward(tail);
     }
   }

  return 0;
}