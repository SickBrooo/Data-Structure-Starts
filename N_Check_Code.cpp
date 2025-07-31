#include<bits/stdc++.h>
using namespace std;
int main()
{
   int x,y;
   cin>>x>>y;
   string s;
   cin>>s;
   int cnt=0;
   int flag=0;
  for(int i=0;i<s.size();i++)
  {
    if(s[x]=='-')
    {
      flag=7;
    }
     if(s[i]>=48&&s[i]<=57)
    {
      cnt++;
    }
  }
  if(cnt==s.size()-1&&flag==7)
  {
    cout<<"Yes"<<endl;
  }
  else
  {
    cout<<"No"<<endl;
  }
  return 0;
}