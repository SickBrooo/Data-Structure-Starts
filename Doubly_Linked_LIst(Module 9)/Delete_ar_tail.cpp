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
void Delete_at_tail(Node*&tail,Node*&head)
{
  Node*deletenode=tail;
  tail=tail->priv;
  delete deletenode;
  if(tail==NULL)
  {
    head=NULL;
    return;
  }
  tail->next=NULL;
  
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
   Node*head=new Node(10);
   Node*a=new Node(20);
   Node* tail=new Node(30);

   head->next=a;
   a->priv=head;

   a->next=tail;
   tail->priv=a;

   Delete_at_tail(tail,head);
   Delete_at_tail(tail,head);
   Delete_at_tail(tail,head);
                               // still theres a problem like if we call delete function more than his index value it gives segmentation fault
   
   
   
   print_LL(head);

  return 0;
}