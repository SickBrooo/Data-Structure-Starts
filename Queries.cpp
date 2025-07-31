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
void insert_at_head(Node*&head,Node*&tail,int value)
{
  Node*newnode=new Node(value);
  if(head==NULL)
  {
    head=newnode;
    tail=newnode;
    return;
  }
  newnode->next=head;
  head=newnode;
}
void insert_at_tail(Node*&head,Node*&tail,int value)
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
void print_LL(Node*Head)
{
  
  Node*temp=Head;
  while(temp!=NULL)
  {
    cout<<temp->value<<" ";
    temp=temp->next;
  }
}
void delete_at_index(Node*&head,Node*&tail,int idx)
{
  if (head == NULL) 
  return;
                       //problem at understanding this function ;
  if (idx == 0)        // try to recape me whenever you find me Please :(
  {
    Node* temp = head;
    head = head->next;
    delete temp;
    if (head == NULL) 
    tail = NULL;
    return;
  }
  Node* temp = head;
  for (int i = 1; i < idx; i++)
  {
    temp = temp->next;
  }

  if (temp->next == NULL)
  {
    return;                    
  } 
  Node* deletee = temp->next;
  temp->next = deletee->next;

  if(deletee == tail)
  {
    tail = temp;
  }
 delete deletee;
}

int size(Node*Head)
{
  
  Node*temp=Head;
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
 int testcase;
 cin>>testcase;
 for(int i=0;i<testcase;i++)
 {
 
   int type;
  cin>>type;
  if(type==0)
  {
    int val;
    cin>>val;
    insert_at_head(head,tail,val);
  }
  else if(type==1)
  {
    int val;
    cin>>val;
    insert_at_tail(head,tail,val);
  }
  else if(type==2)
  {
    int idx;
    cin>>idx;
    int sz=size(head);
    if(idx<sz)
    {
      delete_at_index(head,tail,idx);
  } 
}
  print_LL(head);
  cout<<"\n";
}
 return 0;
}

