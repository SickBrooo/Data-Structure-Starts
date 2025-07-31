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
    return;
  }
  tail->next=newnode;
  tail=tail->next;
}
int check(Node*Head1,Node*Head2)
{
  Node*temp1=Head1;
  Node*temp2=Head2;
  int count1=0;
  int count2=0;
  while (temp1!=NULL)
  {
    count1++;
    temp1=temp1->next;
  }
  while (temp2!=NULL)
  {
    count2++;
    temp2=temp2->next;
  }
  if(count1==count2)
  {
    return count1;
  }
  else
  {
    return 0;
  }
}
int checkdeep(Node*head,Node*head2,int length)
{
   Node*temp=head;
   Node*temp2=head2;
   int count=0;
   for(int i=0;i<length;i++)
   {
     if(temp->value==temp2->value)
     {
      count++;
     }
     temp=temp->next;
     temp2=temp2->next;
   }
   if(count==length)
   {
     return 1;
   }
   else
   {
    return 0;
   }
}

int main()
{
   Node*Head=NULL;
   Node*tail=NULL;

    Node*Head1=NULL;
    Node*tail1=NULL;

   int val;
   while(1)
   {
    cin>>val;
    if(val==-1)
    {
      break;
    }
    Insert_(Head,tail,val);
   }
   while(1)
   {
    cin>>val;
    if(val==-1)
    {
      break;
    }
    Insert_(Head1,tail1,val);
   }
   
   int sizevalue=check(Head,Head1);
   int size;

   if(sizevalue==0)
   {
      cout<<"NO"<<endl;
   }
   else
   {
    size=checkdeep(Head,Head1,sizevalue);
    if(size==1)
    {
    cout<<"YES"<<endl;
    }
   else if(size==0)
    {
    cout<<"NO"<<endl;
    }
   }
   
   return 0;
}