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
  Node* newnode=new Node(value);
  if(head==NULL)
  {
    head=newnode;
    tail=newnode;
  }
  tail->next=newnode;
  tail=tail->next;
 }
 int print_LL(Node*head)
 {
  Node*temp=head;
  int count=0;
  while(temp!=NULL)
  {
    count++;
    temp=temp->next;
  }
  return count;
 }
int main()
{
  Node*head=NULL;
  Node*tail=NULL;
  Node*head1=NULL;
  Node*tail1=NULL;

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
  while(1)
  {
    cin>>val;
    if(val==-1)
    {
      break;
    }
    Insert_(head1,tail1,val);
  }
   
  int size=print_LL(head);
  int size2=print_LL(head1);
  if(size==size2)
  {
    cout<<"YES"<<endl;
  }
  else
  {
    cout<<"NO"<<endl;
  }
  return 0;
}