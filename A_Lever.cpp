#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
        vector<int>v;
        vector<int>v2;
        int n; cin>>n;
        for(int i=0;i<n;i++)
        {
          int x; cin>>x;
          v.push_back(x);
        }
        for(int i=0;i<n;i++)
        {
          int x;cin>>x;
          v2.push_back(x);
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
          
          count=max(abs(v[i]-v2[i]),count);
        }
        if(count==0) count+=1;
        cout<<count<<endl;
  
   }
  return 0;
}