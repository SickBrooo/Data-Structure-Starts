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
void check_LL(Node*head)
{
  Node*temp=head;
  int arr[100]={0};
  int i=0;
  while(temp!=NULL)
  {
    arr[i]=temp->value;
    temp=temp->next;
    i++;
  }
  int freq[100]={0};
  for(int i=0;arr[i]!='\0';i++)
  {
    cout<<arr[i]<<" ";
    freq[arr[i]]++;
  }
  cout<<endl;
  int flag=0;
  for(int i=0;i<100;i++)
  {
    if(freq[i]>1)
    {
       flag=1;
       cout<<"YES";
       return;
    }
  }
  if(flag==0)
  {
    cout<<"NO"<<endl;
  }
  
  
}
int main()
{
   Node*head= new Node(2);
   Node*a=new Node(5);
   Node*b=new Node(6);
   Node*c=new Node(9);
   Node*tail=new Node(2);

   head->next=a;
   a->next=b;
   b->next=c;
   c->next=tail;

   check_LL(head);


  return 0;
}
