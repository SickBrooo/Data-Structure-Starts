#include<bits/stdc++.h>
using namespace std;
int main()
{
   list<int>l;
   int val;
   while(1)
   {
    cin>>val;
    if(val==-1)
    {
      break;
    }
    l.push_back(val);
   }
   l.reverse();
   for(auto val:l)
   {
    cout<<val<<" ";
   }


  return 0;
}