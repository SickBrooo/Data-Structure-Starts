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
class myQueue
{
  public:
  Node*head=NULL;
  Node*tail=NULL; 
  int sz=0;

  void push(int val)
  {
    sz++;
    Node*newnode=new Node(val);
    if(head==NULL)
    {
      head=newnode;
      tail=newnode;
      return;
    }
    tail->next=newnode;
    tail=newnode;
  }
  void pop()
  {
    sz--;
    Node*deletenode=head;
    head=head->next;   
    delete deletenode;//if head becomes NULL after deleting;;;
    if(head==NULL)
    {
      tail=NULL;
    }
  }
   int front()
   {
     return head->value;
   }
   int back()
   {
     return tail->value;
   }
   int size()
   {
    return sz;
   }
   bool empty()
   {
    return head==NULL;
   }
};
int main()
{
  myQueue q;
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
    int x;
    cin>>x;
    q.push(x);
   }
   
   while(!q.empty())
   {
     cout<<q.front()<<" ";
     q.pop();
   }
   if(!q.empty())
   cout<<endl<<q.front();
   if(!q.empty())
   cout<<endl<<q.back();
  return 0;
}