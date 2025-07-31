#include<bits/stdc++.h>
using namespace std;
void print_forward(list<int>&ll)
{
  for(int val:ll)
  {
    cout<<val<<" ";
  }
}
void print_backward(list<int>ll)
{
  ll.reverse();
  for(int value:ll)
  {
    cout<<value<<" ";
  }
}
int main()
{
   list<int>ll;

   int q;
   cin>>q;
   int idx,val;
   while(q--)
   {
    int sz=ll.size();
    cin>>idx>>val;
    if(idx<0||idx>sz)
    {
      cout<<"Invalid"<<endl;

    }
    else if(idx==0)
    {
      ll.push_front(val);
     print_forward(ll);
     cout<<endl;
     print_backward(ll);
     cout<<endl;

    }
    else if(idx==sz)
    {
      ll.push_back(val);
     print_forward(ll);
     cout<<endl;
     print_backward(ll);
     cout<<endl;

    }
    else 
    {
     auto it= next(ll.begin(),idx);
     ll.insert(it,val);
     print_forward(ll);
     cout<<endl;
     print_backward(ll);
     cout<<endl;
    }
   }

  return 0;
}