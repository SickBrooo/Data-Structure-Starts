#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  int value;
  Node *next;

  Node(int val)
  {
    this->value = val;
    this->next = NULL;
  }
};
void insert_(Node *&head, Node *&tail, int value)
{
  Node *newnode = new Node(value);
  if (head == NULL)
  {
    head = newnode;
    tail = newnode;
    return;
  }
  tail->next = newnode;
  tail = tail->next;
}
void print_LL(Node *Head)
{
  Node *temp = Head;
  while (temp != NULL)
  {
    cout << temp->value << " ";
    temp = temp->next;
  }
}
void findDuplicate(Node *Head)
{
  for (Node *i = Head; i != NULL; i = i->next)
  {
    Node *prev = i;
    Node *j = i->next;
    while (j != NULL)
    {if (i->value == j->value)
      {prev->next = j->next;
        delete j;
        j = prev->next;
      }else
      {prev = j;
        j = j->next;
      }
    }
  }
}
int main()
{
  Node *head = NULL;
  Node *tail = NULL;

  int val;
  while (1)
  {
    cin >> val;
    if (val == -1)
    {
      break;
    }
    insert_(head, tail, val);
  }
  findDuplicate(head);
  print_LL(head);

  return 0;
}