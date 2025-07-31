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
void User_input(Node*&head,Node*&tail,int val)
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
void Reverse_printing(Node*&temp)
{
  if(temp==NULL)
  {
    return;
  }
  Reverse_printing(temp->next);
  cout<<temp->value<<" ";
  
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
    User_input(head,tail,val);
  }
  Reverse_printing(head);
  

  return 0;
}