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
void insert(Node*&Head,Node*&tail,int val)
{
  Node* newnode=new Node(val);
  if(Head==NULL)
  {
    Head=newnode;
    tail=newnode;
  }
  tail->next=newnode;
  tail=tail->next;
}
void delete_at_any_pos(Node*&Head,int idx)
{
  Node* temp=Head;
  for(int i=0;i<idx-1;i++)
  {
    temp=temp->next;
  }
  Node* deletenode=temp->next;
  temp->next=temp->next->next;
  
  delete deletenode;
}
void print(Node*head)
{
 Node* temp=head;
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

   int n;
   while(1)
   {
    cin>>n;
    if(n==-1)
    {
      break;
    }
    insert(head,tail,n);
   }
   delete_at_any_pos(head,6);
   
    // delete_at_any_pos(head,);
   print(head);

  return 0;
}