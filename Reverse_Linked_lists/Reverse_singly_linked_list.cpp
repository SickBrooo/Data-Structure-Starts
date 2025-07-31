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
 void insert_(Node*&head,Node*&tail,int val)
 {
  Node* newnode=new Node(val);
  if(head==NULL)
  {
    head=newnode;
    tail=newnode;
    return;
  }
  tail->next=newnode;
  tail=tail->next;
 }
 void reverse_linked_list(Node*&head,Node*&tail,Node*temp)
 {
   if(temp->next==NULL)
   {
    head=temp;
    return;
   }
   reverse_linked_list(head,tail,temp->next);
   temp->next->next=temp;
   temp->next=NULL;
   tail=temp;

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
   Node* head=NULL;
   Node* tail=NULL;

   int val;
   while(1)
   {
    cin>>val;
    if(val==-1)
    {
      break;
    }
    insert_(head,tail,val);
   }
    reverse_linked_list(head,tail,head);
  print_LL(head);
  return 0;
}