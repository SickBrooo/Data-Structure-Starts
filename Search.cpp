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
void Insert_(Node *&head, Node *&tail, int value)
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
int check_LL(Node *head, int value)
{
  Node *temp = head;
  int count = 0;
  int x = -1;
  while (temp != NULL)
  {
    if (temp->value == value)
    {
      x = count;
      return x;
    }
    temp = temp->next;
    count++;
  }
  return x;
}
int main()
{
  int testcase;
  cin >> testcase;
  for (int i = 0; i < testcase; i++)
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
      Insert_(head, tail, val);
    }
    int value;
    cin >> value;

    int idx = check_LL(head, value);
    cout << idx << endl;
  }

  return 0;
}