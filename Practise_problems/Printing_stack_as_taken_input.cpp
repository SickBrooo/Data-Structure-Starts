#include<bits/stdc++.h>
using namespace std;
int main()
{
   stack<int>st;
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
    int x;
    cin>>x;
    st.push(x);
   }
   stack<int>st2;
   for(int i=0;i<n;i++)
   {
    while(!st.empty())
   {
     int top=st.top();
     st.pop();
     if(st.empty()==true)
     {
      cout<<top<<" ";
      break;
     }
     st2.push(top);
   }
   while(!st2.empty())
   {
     int val=st2.top();
     st.push(val);
     st2.pop();
   }
   }
   
  return 0;
}