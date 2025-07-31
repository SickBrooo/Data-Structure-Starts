#include<bits/stdc++.h>
using namespace std;
int main()
{
  //  pair<int,int>p;
  //  p={100,200};
   int n; cin>>n;
   vector<pair<int,int>>v(n);
   for(int i=0;i<n;i++)
   {
    cin>>v[i].first>>v[i].second;
   }
    for(int i=0;i<n;i++)
   {
    cout<<v[i].first<<" "<<v[i].second<<" ";
   }
 // cout<<p.first<<" "<<p.second;

  return 0;
}