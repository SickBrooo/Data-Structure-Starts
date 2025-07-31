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
void print(Node*head)
{
  Node*temp=head;
  while(temp!=NULL)
  {
    cout<<temp->value<<" ";
    temp=temp->next;
  }

}
void delete_at(Node*&head,Node*&tail,int idx)
{
  Node*temp=head;
  for(int i=0;i<idx-1;i++)
  {
    temp=temp->next;
  }
  Node* deletenode=temp->next;
  temp->next=temp->next->next;
  delete deletenode;
  tail=temp;
}
void insert (Node*&head,Node*&tail,int val)
{
  Node*newnode=new Node(val);
  if(head==NULL)
  {
    head=newnode;
    tail=newnode;
  }
  tail->next=newnode;
  tail=tail->next;

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
   delete_at(head,tail,8);
   print(head);
   cout<<tail->value;
  return 0;
}