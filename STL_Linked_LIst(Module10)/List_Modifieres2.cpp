#include<bits/stdc++.h>
using namespace std;
int main()
{
   list<int>LL={10,20,30,40,50};
    int i=2;
   //next(LL.begin(),i);
   //cout<<*next(LL.begin(),i); =30;

   //LL.insert(next(LL.begin(),i),100);
   vector<int>v={100,200,300};
   list<int>L2={50,550,5050};
   //LL.insert(next(LL.begin(),i),v.begin(),v.end());
   LL.insert(next(LL.begin(),i),L2.begin(),L2.end());
   for(int val:LL)
   {
    cout<<val<<" ";
   }

  return 0;
}