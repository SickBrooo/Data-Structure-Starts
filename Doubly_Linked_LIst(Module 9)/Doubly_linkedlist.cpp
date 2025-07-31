#include<bits/stdc++.h>
using namespace std;
class Node
{
  public:
  int value;
  Node* next;
  Node* priv;

  Node(int val)
  {
    this->value=val;
    this->next=NULL;
    this->priv=NULL;
  }

};
int main()
{
   Node*head=new Node(10);
   Node*a=new Node(20);
   Node*tail=new Node(30);

   head->next=a;
   a->priv=head;

   a->next=tail;
   tail->priv=a;

   cout<<head->value<<" "<<head->next->value<<" "<<head->next->next->value<<" "<<tail->value<<" "<<tail->priv->value<<" "<<tail->priv->priv->value;
  return 0;
}