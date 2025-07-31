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
  tail=newnode;
}
void insert_at_head(Node*&head,Node*&tail,int value)
{
  Node*newnode=new Node(value);
  head->prev=newnode;
  newnode->next=head;
  head=newnode;
}
void insert_at_any_pos(Node*&head,Node*&tail,int idx,int value)
{
  Node*newnode=new Node(value);
   Node*sz=head;
    int size=0;
  while(sz!=NULL)
  {
    sz=sz->next;  // calculating size for inserting at tail....
    size++;
  }
 if(idx<0||idx>size)
  {
    return;
  }
  if(idx==0)
  {
    insert_at_head(head,tail,value); // inserting at 0 index/head index;
    return;
  }
 

  if(idx==size)
  {
    insert_at_tail(head,tail,value);
    return;
  }

  Node*temp=head;
  for(int i=1;i<idx;i++)
  {
    temp=temp->next;
  }
  newnode->next=temp->next;
  if(temp->next!=NULL)
  {
  temp->next->prev=newnode;
  }
  else
  {
    tail=temp; 
  }
  temp->next=newnode;
  newnode->prev=temp;

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
    insert_at_tail(head,tail,val);
  }
   int q;
   cin>>q;
   for(int i=0;i<q;i++)
   {
    int idx;
    cout<<"Enter IDX:";
    cin>>idx;
    cout<<"Enter Value:\n";
    cin>>val;
    insert_at_any_pos(head,tail,idx,val);
   }
   print_list_forward(head);
   cout<<endl;
   print_list_backward(tail);

  return 0;
}