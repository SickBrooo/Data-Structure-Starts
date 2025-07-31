#include<bits/stdc++.h>
using namespace std;
int main()
{
   list<int>l={10,10,20,20,30,40,50,30,20,60,70};
    l.remove(10);
  //  l.sort(greater<int>());
  l.sort();
  l.unique(); // works only when sorted properly;
  l.reverse(); // reverse the Linked_list
   for(int val:l)
   {
    cout<<val<<" ";
   }

  return 0;
}