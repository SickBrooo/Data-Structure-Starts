#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<string,int>l,pair<string,int>r)
{
    if(l.first<r.first) return true;
    else if(l.first>r.first) return false;
    else return l.second>r.second;
}
int main()
{
  vector<pair<string,int>>v;
   int n;
   cin>>n;
   int t=n;
   while(n--)
   {
     string name;
     int i;
     cin>>name>>i;
     v.push_back({name,i});
   }
   sort(v.begin(),v.end(),cmp);
   for(int i=0;i<t;i++)
   {
    cout<<v[i].first<<" "<<v[i].second<<endl; 
   }
  return 0;
}