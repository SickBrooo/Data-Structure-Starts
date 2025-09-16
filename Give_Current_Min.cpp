#include<bits/stdc++.h>
using namespace std;
int main()
{
   priority_queue<int,vector<int>,greater<int>>pq;
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
    int x;
    cin>>x;
    pq.push(x);
   }
    int queries;
    cin>>queries;
 while(queries--)
    {
    int x;
    cin>>x;
    if(x==0)
      {
       int val; cin>>val;
       pq.push(val);
       cout<<pq.top()<<endl;
      } 
    else if(x==1)
    {
      if(pq.empty()==true) cout<<"Empty"<<endl;
      else cout<<pq.top()<<endl;
    }  
    else if(x==2)
    {
      if(pq.empty()==false)
      {
        pq.pop();
      }
      if(pq.empty()==true) cout<<"Empty"<<endl;
      else cout<<pq.top()<<endl; 
    } 
    }
   return 0;
}