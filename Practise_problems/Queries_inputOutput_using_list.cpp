#include<bits/stdc++.h>
using namespace std;
void print_forward(list<int>&ll)
{
  for(auto val:ll)
  {
    cout<<val<<" ";
  }
  cout<<endl;
}
void print_backward(list<int>ll)
{
  ll.reverse();
  for(int val:ll)
  {
    cout<<val<<" ";
  }
  cout<<endl;
}
int main()
{
   list<int>ll;
   int q;
   cin>>q;
   int val,idx;
   while(q--)
   {
    
     cin>>idx>>val;
     int size=ll.size();
     if(idx<0||idx>size)
     {
      cout<<"Invalid"<<endl;
     }
     else if(idx==0)
     {
      ll.push_front(val);
      print_forward(ll);
      print_backward(ll);
     }
     
     else if(idx==size)
     {
      ll.push_back(val);
      print_forward(ll);
      print_backward(ll);
     }
     else
     {
       auto it=next(ll.begin(),idx);
       ll.insert(it,val);
       print_forward(ll);
       print_backward(ll);
    }
    
   }

  return 0;
}