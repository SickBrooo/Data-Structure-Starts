#include<bits/stdc++.h>
using namespace std;
int main()
{
   list<int>l={0,1,2,3,4,5};
   cout<<l.back()<<" ";
   cout<<l.front()<<" ";
   cout<<*next(l.begin(),3);

  // iterators;

  l.begin();
  l.end();

  return 0;
}