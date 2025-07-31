#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
  vector<int> v;

  void push(int x)
  {
    v.push_back(x);
  }
  void pop()
  {
    v.pop_back();
  }
  int top()
  {
    return v.back();
  }
  int size()
  {
    return v.size();
  }
  bool empty()
  {
    return v.empty();
  }
};
int main()
{
  myStack st;
  myStack st2;
  int n, m;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    st.push(x);
  }
  cin >> m;
  for (int i = 0; i < m; i++)
  {
    int y;
    cin >> y;
    st2.push(y);
  }
  int sz=st.size();
  int count = 0;

  if (st.size() != st2.size())
  {
    cout << "NO" << endl;
  }
  else if (st.size() == st2.size())
  {

    while (!st2.empty() && !st.empty())
    {
      if (st2.top() == st.top())
      {
        count++;
      }
      st2.pop(); // pop korar agei size count kore rakhte hoiseh!!!;
      st.pop();  // nahole stack empty thakbe;;
    }
    
    if (count == sz)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO";
    }
  }

  return 0;
}