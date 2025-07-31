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
int main()
{
   Node* Head=new Node(10);
   Node* a=new Node(20);
   Node* b=new Node(30);
   Node* c=new Node(40);
   Node* d=new Node(40);
   Node* e=new Node(50);

   Head->next=a;
   a->next=b;
   b->next=c;
   c->next=d;
   d->next=e;
   e->next=e;
   
   Node*slow=Head;
   Node*fast=Head;
   bool flag=false;
   while(fast!=NULL&&fast->next!=NULL)
   {
    slow=slow->next;
    fast=fast->next->next;
    if(slow ==fast)
    {
      flag=true;
      break;
    }

   }
   if(flag==true)
   {
    cout<<"Cycle Detected"<<endl;
   }
   else
   {
    cout<<"Cycle Not detected"<<endl;
   }



  return 0;
}