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
   Node a(700),b(800),c(900);

   a.next=&b;
   b.next=&c;
   

   //cout<<a.value<<" "<<b.value<<" "<<c.value;
   //cout<<a.value<<" "<<(*a.next).value<<" "<<(*(*a.next).next).value;
   cout<<a.value<<" "<<a.next->value<<" "<<a.next->next->value;
  return 0;
}