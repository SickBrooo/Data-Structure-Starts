#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int>v={0,1,2,3,4,5};
   vector<int>v2;
   v2=v;
  //  for(int i=0;i<v.size();i++)
  //  {
  //   cout<<v2[i]<<" ";
  //  }
  // Using shortcut forLoop
  for(int x:v)
  {
    cout<<v2[x]<<" ";
  }
  return 0;
}