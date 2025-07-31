#include<bits/stdc++.h>
using namespace std;
int main()
{
   stack<int>st;
   queue<int>q;
   int n,m;
   cin>>n;
   for(int i=0;i<n;i++)
   {
    int x;
    cin>>x;
    st.push(x);
   }
   cin>>m;
   for(int i=0;i<m;i++)
   {
    int y;
    cin>>y;
    q.push(y);
   }
   int count=0;
   int sz=q.size();
   if(st.size()!=q.size())
   {
    cout<<"NO";
   }
   else
   {
    while(!q.empty()&&!st.empty())
    {
      if(q.front()==st.top())
      {
        count++;
      }
      q.pop();
      st.pop();
    }
    if(count==sz)
    {
      cout<<"YES"<<endl;
    }
    else
    {
      cout<<"NO"<<endl;
    }
   }

  return 0;
}