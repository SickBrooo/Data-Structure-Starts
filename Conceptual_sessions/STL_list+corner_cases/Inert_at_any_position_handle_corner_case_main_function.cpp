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
void insert_at_any_pos(Node*&head,Node*&tail,int idx,int value)
{
 Node*newnode=new Node(value);
 Node*temp=head;
for(int i=1;i<idx;i++)
{
  temp=temp->next;
}
newnode->next=temp->next;
temp->next->prev=newnode;
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

  int q;
  cin>>q;
  int idx,val;
  while(q--)
  {
    int sz=0;
    Node*temp=head;
    while(temp!=NULL)
    {
      temp=temp->next;
      sz++;
    }
    cin>>idx>>val;
    if(idx<0||idx>sz)
    {
      cout<<"Invalid"<<endl;
    }
    else if(idx==0)
    {
      insert_at_head(head,tail,val);
      print_list_forward(head);
      cout<<endl;
      print_list_backward(tail);
      cout<<endl;
    }
    else if(idx==sz)
    {
      insert_at_tail(head,tail,val);
       print_list_forward(head);
       cout<<endl;
       print_list_backward(tail);
       cout<<endl;
    }
     else
    {
      insert_at_any_pos(head,tail,idx,val);
       print_list_forward(head);
       cout<<endl;
       print_list_backward(tail);
       cout<<endl;
    }
  }
  return 0;
}