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
void Insert_at_tail(Node*&head,int value)
{
  Node* newnode=new Node(value);
  if(head==NULL)
  {
     head=newnode;
     return; // attaching newnode on head beacuse no other Node exists;
  }
  Node*temp=head;
  while(temp->next!=NULL)
  {
    temp=temp->next;
  }
  temp->next=newnode; // Attaching head on the tail
}
void Print_LL(Node* head)
{
  Node* temp=head;
  while(temp!=NULL)
  {
    cout<<temp->value<<endl;
    temp=temp->next;
  }
}
int main()
{
 Node* Head=NULL;
 //Node* Head=new Node(30);

 Insert_at_tail(Head,700);
 Insert_at_tail(Head,701);
 Insert_at_tail(Head,702);
 Print_LL(Head);
   

  return 0;
}