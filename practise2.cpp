#include<bits/stdc++.h>
using namespace std;
int main()
{
   queue<string>pq;
   int q;
   cin>>q;
   while(q--)
   {
    string Ins; cin>>Ins;
    string Name;
    if(Ins=="ARRIVE")
    {
      cin>>Name;
      pq.push(Name);
    }
    else if(Ins=="SERVE")
    {
      if(pq.empty()==true) cout<<"No patients"<<endl;
      else pq.pop();
    }
    else if(Ins=="FIRST")
    {
      if(!pq.empty()) cout<<pq.front()<<endl;
      else cout<<"No patients"<<endl;
    }
    else if(Ins=="LAST")
    {
      if(!pq.empty()) cout<<pq.back()<<endl;
      else cout<<"No patients"<<endl;
    }
    else if(Ins=="COUNT")
    {
     cout<<pq.size()<<endl;
    }
    else if(Ins=="SHOW")
    {
     if(pq.empty()==true) cout<<"No patients"<<endl;
      else
      {
          queue<string>temp=pq;
            while(!temp.empty())
           {
             cout<<temp.front()<<" ";
             temp.pop();
           }
      }
    }
   }

  return 0;
}