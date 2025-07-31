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
void Insert_at_any_pos(Node*&head,int idx,int value)
{
  Node* newnode=new Node(value);
  Node* temp=head;
  for(int i=0;i<idx-1;i++)
  {
    temp=temp->next;
  }
  newnode->next=temp->next;
  temp->next=newnode;

}
void Print_LL(Node*head)
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
   Node* Head=new Node(100);
   Node* a=new Node(200);
   Node* b=new Node(300);

   Head->next=a;
   a->next=b;

   Insert_at_any_pos(Head,2,700);
   Print_LL(Head);

  return 0;
}