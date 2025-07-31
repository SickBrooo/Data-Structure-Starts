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
void Delete_at_head(Node*&head,Node*&tail)
{
  Node*deleteNode=head;
  head=head->next;
  delete deleteNode;
  if(head==NULL)
  {
    tail=NULL;
    return;
  }
  head->priv=NULL; // when it comes to the last Node.Coenercase;
  
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
  Node*Head=new Node(10);
  Node*a=new Node(20);
  Node* tail=new Node(30);

  Head->next=a;
  a->priv=Head;

  a->next=tail;
  tail->priv=a;

 Delete_at_head(Head,tail);
 Delete_at_head(Head,tail);
Delete_at_head(Head,tail);

  print_DLL(Head);

   

  return 0;
}