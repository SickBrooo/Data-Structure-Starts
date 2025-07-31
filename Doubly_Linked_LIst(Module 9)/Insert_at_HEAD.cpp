#include<bits/stdc++.h>
using namespace std;
class Node
{
  public:
  int value;
  Node* next;
  Node* priv;

  Node(int val)
  {
    this->value=val;
    this->next=NULL;
    this->priv=NULL;
  }

};
void Insert_at_Head(Node*&head,Node*&tail,int value)
{
  Node*temp=new Node(value);
  if(head==NULL)
  {              //corner case if head and tail both are pointing to a NULL;
    head=temp;
    tail=temp;
    return;
  }
  temp->next=head;
  head->priv=temp;
  head=temp;

}
void print_DLL(Node*head)
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
  // Node*Head=new Node(10);
  // Node*a=new Node(20);
  // Node* tail=new Node(30);

  // Head->next=a;
  // a->priv=Head;

  // a->next=tail;
  // tail->priv=a;
  Node*Head=NULL; 
  Node*tail=NULL;

  Insert_at_Head(Head,tail,100);
  Insert_at_Head(Head,tail,200);
  Insert_at_Head(Head,tail,300);
  Insert_at_Head(Head,tail,100);
  Insert_at_Head(Head,tail,100);

  print_DLL(Head);

   

  return 0;
}