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
 void insert(Node*&head,Node*&tail,int value)
 {
  Node* newnode=new Node(value);
  if(head==NULL)
  {
    head=newnode;
    tail=newnode;
  }
  tail->next=newnode;
  tail=tail->next;
 }
 int size(Node*head)
 {
  int count=0;
  Node*temp=head;
  while(temp!=NULL)
  {
   count++;
   temp=temp->next;
  }
  return count;
 }
 void Insert_tail(Node*&tail,Node*&head,int value)
 {
   Node*newnode=new Node(value);
   if(head==NULL)
  {
     head=newnode;
     tail=newnode;
     return;
  }
   tail->next=newnode;
   tail=tail->next;
 }
 void Insert_at_head(Node*&Head,Node*tail,int value)
 {
  Node*newnode=new Node(value);
   if(Head==NULL)
  {
     Head=newnode;
     tail=newnode;
     return;
  }
  newnode->next=Head;
  Head=newnode;
}
 void Insert_at_any_pos(Node*head,int idx,int value)
 {
  Node*newnode=new Node(value);
  Node*temp=head;
  for(int i=0;i<idx-1;i++)
  {
    temp=temp->next;
  }
  newnode->next=temp->next;
  temp->next=newnode;
 }
 void Print_LL(Node*head)
 {
  Node*temp=head;
  while(temp!=NULL)
  {
    cout<<temp->value<<" ";
    temp=temp->next;
  }
  cout<<endl;
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
    insert(head,tail,val);
  }
  int queries;
  cin>>queries;
  for(int i=0;i<queries;i++)
  {
    int idx,value;
    cin>>idx>>value;
    int sixe =size(head);
    if(idx>sixe)
    {
      cout<<"Invalid"<<endl;
      continue;
    }
    else if(idx==sixe)
    {
      Insert_tail(tail,head,value);
    }
    else if(idx==0)
    {
      Insert_at_head(head,tail,value);
    }
    else
    {
      Insert_at_any_pos(head,idx,value);
    }
    Print_LL(head);
  }
  
  return 0;
}