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
void Insert_at_tail(Node*&head,Node*&tail,int val)
{
  Node* newnode=new Node(val);
  if(head==NULL)
  {
    head=newnode;
    tail=newnode;
  }
  tail->next=newnode;
  tail=tail->next;
}
void Deletation_Head(Node*&Head)
{
  Node* deletenode=Head;
  Head=Head->next;
  delete deletenode;
}
void print_LL(Node*Head)
{
  Node*temp=Head;
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
    Insert_at_tail(head,tail,val);
  }
  Deletation_Head(head);

  print_LL(head);
  return 0;
}