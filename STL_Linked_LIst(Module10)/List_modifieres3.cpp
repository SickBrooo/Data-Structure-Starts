#include<bits/stdc++.h>
using namespace std;
int main()
{
   list<int>LL={10, 20 ,20, 20, 50};
   int i=1;
   //LL.erase(next(LL.begin(),i)); 
   //  LL.erase(next(LL.begin(),i),next(LL.begin(),i+2));
   //replace(LL.begin(),LL.end(),20,100); // dosent need any dot
   
   auto it=find(LL.begin(),LL.end(),20);
   if(it==LL.end())
   {
    cout<<"Not Found"<<" ";
   }
   else
   {
    cout<<"Found"<<" ";
   }
   for(int val:LL)
   {
    cout<<val<<" ";
   }

  return 0;
}