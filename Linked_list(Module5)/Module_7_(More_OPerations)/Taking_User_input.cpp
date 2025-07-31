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
void insert_at_tail(Node*&head,Node*&tail,int val)
{
  Node* newnode=new Node(val);
   if(head==NULL)
  {
    head=newnode;
    tail=newnode;
  }
  tail->next=newnode;
  tail=tail->next;
}
void Print_LL(Node*Head)
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
  Node*Head=NULL;
  Node*Tail=NULL;

   int val;
   while(1)
   {
    cin>>val;
    if(val==-1)
    {
      break;
    }
     insert_at_tail(Head,Tail,val); 
   }
    Print_LL(Head);
  
   return 0;
}