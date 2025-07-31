#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    long long int sum = 0;
    long long int x;
    long long int y;
    cin >> x >> y;
    for (int i = x; i <= y; i++)
    {
      sum = sum + i;
    }
    cout << sum << endl;
  }

  return 0;
}