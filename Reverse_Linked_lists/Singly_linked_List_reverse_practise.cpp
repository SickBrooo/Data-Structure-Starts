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
void print(Node*head)
{
  Node*temp=head;
  while(temp!=NULL)
  {
    cout<<temp->value<<" ";
    temp=temp->next;
  }
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
int main()
{
   Node* Head=NULL;
   Node* tail= NULL;

   int val;
   while(1)
   {
    cin>>val;
    if(val==-1)
    {
      break;
    }
    insert(Head,tail,val);
   }
   reverse(Head,tail,Head);
   print(Head);

  return 0;
}