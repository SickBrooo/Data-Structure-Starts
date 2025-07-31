#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b;
   cin>>a>>b;
   stack<int>st;
   while(a--)
   {
    int x;
    cin>>x;
    st.push(x);
   }
   queue<int>q;
   while(b--)
   {
    int x;
    cin>>x;
    q.push(x);
   }
   vector<int>v;
   vector<int>v2;
   if(a==b)
   {
     while(!st.empty())
     {
      v.push_back(st.top());
      st.pop();
     }
     while(!q.empty())
     {
      v2.push_back(q.front());
      q.pop();
     }
     if(v==v2)
     cout<<"YES"<<endl;
     else cout<<"NO"<<endl;;
   }
   else
   {
    cout<<"NO"<<endl;
   }

  return 0;
}