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
   int val;
   cin>>val;
   v.push_back(val);
   int curr_idx=v.size()-1;
   while(curr_idx!=0)
   {
      int parent_idx=(curr_idx-1)/2;
      if(v[curr_idx]>v[parent_idx])
      {
        swap(v[curr_idx],v[parent_idx]);
      }
      else break;
      curr_idx=parent_idx;
   }
   for(int val:v)
   {
    cout<<val<<" ";
   }
  return 0;
}