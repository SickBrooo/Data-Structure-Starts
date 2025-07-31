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
  }
  tail->next=newnode;
  tail=tail->next;
}
int max(Node*&head)
{
  int max=head->value;
  for(Node*i=head;i!=NULL;i=i->next)
  {
    if(i->value>max)
    {
      max=i->value;
    }
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
   int Maximum=max(head);
   cout<<Maximum<<endl;
  return 0;
}