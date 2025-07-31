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
void insert_at_tail(Node*&head,Node*&tail,int val)
{
  Node*newnode=new Node(val);
  if(head==NULL)
  {
    head=newnode;
    tail=newnode;
  }
  tail->next=newnode;
  newnode->prev=tail;
  tail=tail->next;
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
void reverse_doubly(Node*head,Node*tail)
{
 for(Node*i=head,*j=tail;i!=j&&j!=i->prev;i=i->next,j=j->prev)
 {
  swap(i->value,j->value);
 }
}
int main()
{
   Node* Head=NULL;
   Node *tail=NULL;

   int val;
   while(1)
   {
    cin>>val;
    if(val==-1)
    {
      break;
    }
    insert_at_tail(Head,tail,val);
   }
   print_LL(Head);
   reverse_doubly(Head,tail);
   cout<<endl;
   print_LL(Head);
   
  return 0;
}