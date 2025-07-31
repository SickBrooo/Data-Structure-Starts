#include <bits/stdc++.h>
using namespace std;
int main()
{
  list<int> ll;
  int q;
  cin >> q;
  int x, value;
  while (q--)
  {
    cin >> x >> value;
    if (x == 0)
    {
      ll.push_front(value);
      cout << "L -> ";
      for (auto it : ll)
      {
        cout << it << " ";
      }
      cout << endl;
      cout << "R -> ";
      for (auto it = ll.end(); it != ll.begin();)
      {
        --it;
        cout << *it << " ";
      }
      cout << endl;
    }
    else if (x == 1)
    {
      ll.push_back(value);
      cout << "L -> ";
      for (auto it : ll)
      {
        cout << it << " ";
      }
      cout << endl;
      cout << "R -> ";
      for (auto it = ll.end(); it != ll.begin();)
      {
        --it;
        cout << *it << " ";
      }
      cout << endl;
    }
    else if (x == 2)
    {
      int sz = ll.size();
      if (value > sz-1)
      {
        cout << "L -> ";
        for (auto it : ll)
        {
          cout << it << " ";
        }
        cout << endl;
        cout << "R -> ";
        for (auto it = ll.end(); it != ll.begin();)
        {
          --it;
          cout << *it << " ";
        }
        cout << endl;
      }
      else
      {
        ll.erase(next(ll.begin(), value));
        cout << "L -> ";
        for (auto it : ll)
        {
          cout << it << " ";
        }
        cout << endl;
        cout << "R -> ";
        for (auto it = ll.end(); it != ll.begin();)
        {
          --it;
          cout << *it << " ";
        }
        cout << endl;
      }
    }
  }

  return 0;
}