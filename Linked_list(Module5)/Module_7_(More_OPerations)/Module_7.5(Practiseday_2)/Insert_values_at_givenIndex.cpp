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
    insert(head,tail,val);
  }
   print(head);

  return 0;
}