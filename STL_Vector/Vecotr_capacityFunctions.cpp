#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int>v;
   v.push_back(-1);
   v.resize(4);
   v.clear();
   v.empty();
   cout<<v.capacity()<<endl;

  return 0;
}