#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int>v={0,1,0,3,0,5};
  //  replace(v.begin(),v.end(),0,777);

   auto it=find(v.begin(),v.end(),100);  
   for(int z:v)
   {
    cout<<z<<" ";
   }
   if(it==v.end())
   {
     cout<<"Not found";      
   }
   else
   {
    cout<<"found";
    cout<<*it;
   }
  //iterator;
  // for(auto it=v.begin();it<v.end();it++)
  // {
  //   cout<<*it<<" ";
  // }

  return 0;
}