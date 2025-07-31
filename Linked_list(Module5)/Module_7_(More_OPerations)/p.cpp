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
void insert_at_tail(Node*&head,Node*&tail,int value)
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
   Node* Head=new Node(10);
   Node* a=new Node(10);
   Node* tail=new Node(10);

   Head->next=a;
   a->next=tail;
  
   insert_at_tail(Head,tail,300);
   insert_at_tail(Head,tail,700);
    insert_at_tail(Head,tail,300);
   insert_at_tail(Head,tail,700);
    insert_at_tail(Head,tail,300);
   insert_at_tail(Head,tail,700);
    insert_at_tail(Head,tail,300);
   insert_at_tail(Head,tail,700);
    insert_at_tail(Head,tail,300);
   insert_at_tail(Head,tail,700);
    insert_at_tail(Head,tail,300);
   insert_at_tail(Head,tail,700);
    insert_at_tail(Head,tail,300);
   insert_at_tail(Head,tail,700);
     insert_at_tail(Head,tail,300);
    insert_at_tail(Head,tail,300);
   insert_at_tail(Head,tail,700); insert_at_tail(Head,tail,300);
   insert_at_tail(Head,tail,700);
   
   print_LL(Head);

  
}
