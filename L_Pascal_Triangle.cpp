#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
    stack<int>st;
    string x=pow(11,i);
        
        while(!st.empty())
        {
          cout<<st.top()<<" ";
          st.pop();
        }
        cout<<endl;
   }

  return 0;
}