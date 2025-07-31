#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    int num;
    cin >> num;
    vector<int> v;
    int digit;
    while (num != 0)
    {
      digit = num % 10;
      v.push_back(digit);
      num = num / 10;
    }
    sort(v.begin(), v.end());
    cout << *v.begin() << endl;
  }

  return 0;
}