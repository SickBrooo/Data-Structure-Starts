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
void Insert_(Node*&head,Node*&tail,int value)
{
  Node*newnode=new Node(value);
  if(head==NULL)
  {
    head=newnode;
    tail=newnode;
    return;
  }
  tail->next=newnode;
  tail=tail->next;
}
// void print_LL(Node*Head)
// {
  
//   Node*temp=Head;
//   while(temp!=NULL)
//   {
//     cout<<temp->value<<" ";
//     temp=temp->next;
//   }
// }
int Min(Node*&Head)
{
  Node *temp=Head;
  int min=Head->value;
  while(temp!=NULL)
  {
   if(temp->value<min)
   {
     min=temp->value;
   }
   temp=temp->next;
  }
  return min;
}
int Max(Node*&Head)
{
  Node *temp=Head;
  int max=Head->value;
  while(temp!=NULL)
  {
   if(temp->value>max)
   {
     max=temp->value;
   }
   temp=temp->next;
  }
  return max;
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
   int min=Min(head);
   int max=Max(head);
   
   int value=max-min;
   cout<<value<<endl;

  return 0;
}