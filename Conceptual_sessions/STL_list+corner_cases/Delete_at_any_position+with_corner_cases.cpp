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
void insert(Node*&head,Node*&tail,int value)
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
void delete_at_head(Node*&head,Node*&tail)
{
  if(head==NULL)
  {
    return; // when the list is totally Empty;
  }
  Node*deletenode=head;
  if(head==tail)
  {
    head=NULL;   // if theres only one Node
    tail=NULL;
    
  }
  else
  {
    head=head->next;
     head->prev=NULL;
  }
  delete deletenode;
}
void delete_at_tail(Node*&head,Node*&tail)
{
  if(head==NULL)
  {
    tail=NULL; //this is for emprty NOde;
    return;
  }
  Node*deletenode=tail;
  if(head==tail)
  {
    head=NULL; // if the Node is Empty after delelting its tail;
    tail=NULL;
  }
  else
  {
   tail=tail->prev;
   tail->next=NULL;
  }
  delete deletenode;
}
void delete_at_any_pos(Node*&head,Node*&tail,int idx)
{
  int count=0;
  Node*temp=head;
  while(temp!=NULL)
  {
    count++;
    temp=temp->next;
  }
  if(idx<0||idx>=count)
  {
    cout<<"invalid Index"<<endl;
  }
  else if(idx==0)
  {
    delete_at_head(head,tail);
    return;
  }
  else if(idx==count-1)
  {
    delete_at_tail(head,tail);
    return;
  }
  else
  {
    Node*size=head;
  for(int i=1;i<idx;i++)
  {
    size=size->next;
  }
  Node*deletenode=size->next;
  size->next=size->next->next;
  size->next->prev=size;
  delete deletenode;
  }
  
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
void print_LLback(Node*tail)
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
    insert(head,tail,val);
   }
   
   int idx;
   cin>>idx;
   delete_at_any_pos(head,tail,idx);
   print_LL(head);
   cout<<endl;
   print_LLback(tail);
  return 0;
}