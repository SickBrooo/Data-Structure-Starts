#include<bits/stdc++.h>
using namespace std;
void Insert(vector<int>&v,int val)
{
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
}
int main()
{
   vector<int>v;
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
    int x;
    cin>>x;
    Insert(v,x);
   }
   // see it again and practyise if you want deeper understanding in delete at heap.
   //Dsa Module 22;
  return 0;
}