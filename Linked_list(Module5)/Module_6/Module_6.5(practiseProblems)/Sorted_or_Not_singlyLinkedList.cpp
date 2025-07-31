#include<bits\stdc++.h>
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
void Sorted_or_Not(Node*head)
{
  Node*temp=head;
  int arr[100];
  int i=0;
  while(temp!=NULL)
  {
    arr[i]=temp->value;
    temp=temp->next;
    i++;
  }
  int count=0;
 for(int j=0;j<i-1;j++)
 {
  if(arr[j]<arr[j+1])
  {
    count++;
  }
 }
 if(count==i-1)
 {
  cout<<"YES"<<endl;
 }
 else
 {
  cout<<"NO"<<endl;
 }

}
int main()
{
  Node*head= new Node(2);
  Node*a= new Node(4);
  Node*b= new Node(6);
  Node*c= new Node(8);
  Node*d= new Node(10);
  Node*e= new Node(12);
  Node*tail= new Node(14);

  head->next=a;
  a->next=b;
  b->next=c;
  c->next=d;
  d->next=e;
  e->next=tail;

  Sorted_or_Not(head);


  return 0;
}
