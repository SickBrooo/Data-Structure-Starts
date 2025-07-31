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
void Middle_ele(Node*head)
{
  Node*temp=head;
  int count=0;
  int arr[100];
  int i=0;
  while(temp!=NULL)
  {
    arr[i]=temp->value;
    count++;
    i++;
    temp=temp->next;
  }
  if(count%2==1)
  {
    int x=count/2;
    cout<<arr[x];
  }
  else if (count%2==0)
  {
    int x=count/2;
    cout<<arr[x]<<" "<<arr[x+1];
  }
}
int main()
{
  Node* Head=new Node(1);
  Node*a=new Node(2);
  Node*b=new Node(3);
  Node*c=new Node(4);
  Node*d=new Node(5);
  Node*e=new Node(6);
  Node*tail=new Node(7);

  Head->next=a;
  a->next=b;
  b->next=c;
  c->next=d;
  d->next=e;
  e->next=tail;

  Middle_ele(Head);

   

  return 0;
}