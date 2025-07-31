#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
   string s;
   cin>>s;
   stack<char>st;
   for(char c:s)
   {
     if(c=='1')
     {
      if(st.empty()==true)
      {
        st.push(c);
      }
      else if(st.empty()==false)
      {
        if(st.top()=='0')
        {
          st.pop();
        }
        else
        {
          st.push(c);
        }
      }
     }
     else if(c=='0')
     {
        st.push(c);
     }
   }
   if(st.empty()==true)
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