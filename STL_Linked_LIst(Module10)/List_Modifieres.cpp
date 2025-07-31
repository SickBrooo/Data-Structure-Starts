#include<bits/stdc++.h>
using namespace std;
int main()
{
   list<int>List1={0,1,2,3,4};
   list<int>List2;
  // List2 = List1; // best way

  List2.assign(List1.begin(),List1.end());

  List2.push_front(100);
  List2.push_back(50);
  List2.push_front(100);
  List2.push_back(50);
                        //push_back(),pop_back\\ \push_front(),pop_front();
  List2.pop_back();
  List2.pop_back();
  List2.pop_front();

   for(int val:List2)
   {
    cout<<val<<" ";
   }

  return 0;
}