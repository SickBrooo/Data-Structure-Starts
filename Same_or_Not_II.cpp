#include<bits/stdc++.h>
using namespace std;
class Node
{
  public:
  int value;
  Node* next;
  Node* prev;

  Node(int val)
  {
    this->value=val;
    this->next=NULL;
    this->prev=NULL;
  }

};
class Mystack
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
    Node*deletenode=tail;
    tail=tail->prev;
    delete deletenode;
    if(tail==NULL) // delete korar por tail NULL e thakle 
    {
       head=NULL;
       return;
    }
    tail->next=NULL;
  }
  int top()
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
class Myqueue
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
      tail=NULL;
      return;
    }
    head->prev=NULL;
  }
  int front()
  {
    return head->value;
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
   int a,b;
   cin>>a>>b;
   Myqueue q;
   while(a--)
   {
    int x;
    cin>>x;
    q.push(x);
   }
   Mystack st;
   while(b--)
   {
    int x;
    cin>>x;
    st.push(x);
   }
   vector<int>v;
   vector<int>v2;
   if(a==b)
   {
     while(!q.empty())
     {
      v.push_back(q.front());
      q.pop();
     }
     while(!st.empty())
     {
      v2.push_back(st.top());
      st.pop();
     }
     if(v==v2)
     {
      cout<<"YES"<<endl;
     }
     else
     {
      cout<<"NO"<<endl;
     }
   }
   else
   {
    cout<<"NO"<<endl;
   }

  return 0;
}