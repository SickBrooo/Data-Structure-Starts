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
 void reverse(Node*&head,Node*&tail,Node*temp)
 {
   if(temp->next==NULL)
   {
    head=temp;
    return;
   }
   reverse(head,tail,temp->next);
   temp->next->next=temp;
   temp->next=NULL;
   tail=temp;
 }
void print(Node*head)
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
    Node*newhead=NULL;
    Node*newtail=NULL;
    Node*temp=head;
    while(temp!=NULL)
    {
      insert_at_tail(newhead,newtail,temp->value);
      temp=temp->next;
    }
   reverse(head,tail,head);
   
   Node*cmp=newhead;
   Node*cmp2=head;
   int flag=1;
   while(cmp!=NULL)
   {
    if(cmp->value!=cmp2->value)
    {
      flag=0;
      break;
    }
    else
    {
      cmp=cmp->next;
      cmp2=cmp2->next;
    }
   }
   if(flag==1)
   {
    cout<<"YES"<<endl;
   }
   else
   {
    cout<<"NO"<<endl;
   }
  
  return 0;
}