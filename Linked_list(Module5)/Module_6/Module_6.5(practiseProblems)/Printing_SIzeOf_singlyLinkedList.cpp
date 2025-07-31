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
void Count_LL(Node*Head)
{
  Node*temp=Head;
  int count=0;
  while(temp!=NULL)
  {
    count+=1;
    temp=temp->next;
  }
  cout<<count<<endl;
}
int main()
{
   Node*Head=new Node(2);
   Node*a=new Node(1);
   Node*b=new Node(5);
   Node*c=new Node(3);
   Node*d=new Node(4);
   Node*e=new Node(8);
   Node*tail=new Node(9);

   Head->next=a;
   a->next=b;
   b->next=c;
   c->next=d;
   d->next=e;
   e->next=tail;

   Count_LL(Head);

  return 0;
}