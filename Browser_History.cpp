#include<bits/stdc++.h>
using namespace std;
int main()
{
   list<string>ll;
   string platform;
   while(1)
   {
    cin>>platform;
    if(platform=="end")
    {
      break;
    }
    ll.push_back(platform);
   }
  int q;
  cin>>q;
  string cmd;
  string web;
  auto current=ll.begin();
  while(q--)
  { 
    cin>>cmd;
    if(cmd=="visit")
    { 
      cin>>web;
      auto it=find(ll.begin(),ll.end(),web);
      if(it!=ll.end())
      {
        current=it;
        cout<<web<<endl;
      }
      else
      {
        cout<<"Not Available"<<endl;
      }
    }
    else if(cmd=="next")
    {
      if(next(current)==ll.end())
      {
        cout<<"Not Available"<<endl;
      }
      else
      {
        current=next(current);
        cout<<*current<<endl;
      }
    }
    else if(cmd=="prev")
    {
      if(current==ll.begin())
      {
        cout<<"Not Available"<<endl;
      }
      else
      {
        current=prev(current);
        cout<<*current<<endl;
      }
    }
  }
  return 0;
}