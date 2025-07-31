#include<bits/stdc++.h>
using namespace std;
class Node
{
  public:
  int value;
  Node* next;
  Node*prev;

  Node(int val)
  {
    this->value=val;
    this->next=NULL;
    this->prev=NULL;
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
    newnode->prev=tail;
    tail=newnode;
  }
  void pop()
  {
    sz--;
    Node*deletenode=head;
    head=head->next;
    delete deletenode;
    if(head==NULL)
    {
      tail=NULL;  // corner case 
      return; //1 tai Node delete korar por jodi head NULL e thake so tail o NULL  
    }
    head->prev=NULL;
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

  //cout<<q.front()<<" "<<q.back()<<" "<<q.size();
  while(!q.empty())
  {
    cout<<q.front()<<" ";
    q.pop();
  }
  return 0;
}