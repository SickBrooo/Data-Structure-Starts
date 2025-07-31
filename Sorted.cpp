#include <bits/stdc++.h>
using namespace std;
int main()
{
  int tc;
  cin >> tc;
  for (int i = 0; i < tc; i++)
  {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }
    vector<int> v2(v);
    sort(v2.begin(), v2.end());
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
      if (v[i] == v2[i])
      {
        flag++;
      }
    }
    if (flag == n)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }

  return 0;
}