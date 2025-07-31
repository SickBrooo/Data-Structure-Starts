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
void Insert_(Node*&head,Node*&tail,int val)
{
  Node*temp=new Node(val);
  if(head==NULL)
  {
    head=temp;
    tail=temp;
  }
  tail->next=temp;
  tail=tail->next;
}
void Sort_descending(Node*head)
{
  for(Node*i=head;i->next!=NULL;i=i->next)
  {
    for(Node*j=i->next;j!=NULL;j=j->next)
    {
      if(i->value<j->value)
      {
        swap(i->value,j->value);
      }
    }
  }
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
    Insert_(head,tail,val);
  }
   Sort_descending(head);
   print_LL(head);

  return 0;
}