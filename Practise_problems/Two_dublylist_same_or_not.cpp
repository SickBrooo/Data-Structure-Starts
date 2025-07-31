#include<bits/stdc++.h>
using namespace std;
int main()
{

   list<int>ll1;
   list<int>ll2;
   int val;
   while(1)
   {
    cin>>val;
    if(val==-1)
    {
      break;
    }
    ll1.push_back(val);
   }
   while(1)
   {
    cin>>val;
    if(val==-1)
    {
      break;
    }
    ll2.push_back(val);
   }
   if(ll1==ll2)
   {
    cout<<"YES";
   }
   else
   {
    cout<<"NO";
   }

  //  for(auto val:ll1)
  //  {
  //   cout<<val<<" ";
  //  }
  //  cout<<endl;
  //  for(auto val:ll2)
  //  {
  //   cout<<val<<" ";
  //  }

  return 0;
}