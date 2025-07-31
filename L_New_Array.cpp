#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++)
   {
    cin>>v[i];
   }
   vector<int>v2(n);
   for(int i=0;i<n;i++)
   {
    cin>>v2[i];
   }
   vector<int>c;
   for(int i=0;i<n;i++)
   {
      int x=v2[i];
      c.push_back(x);
   }
   for(int i=0;i<n;i++)
   {
      int x=v[i];
      c.push_back(x);
   }
  for(int i=0;i<c.size();i++)
  {
    cout<<c[i]<<" ";
  }

  return 0;
}