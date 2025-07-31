#include<bits/stdc++.h>
using namespace std;
int main()
{
   queue<string>q;
   int t;
   cin>>t;
   while(t--)
   {
    int command;
    cin>>command;
    if(command==0)
    {
      string s;
      cin>>s;
      q.push(s);
    }
    else if(command==1)
    {
      if(q.empty()==true)
      {
        cout<<"Invalid"<<endl;
      }
      else
      {
        cout<<q.front()<<endl;
        q.pop();
      }
    }
   }

  return 0;
}