#include<bits/stdc++.h>
using namespace std;
int main()
{
   list<int>ll;
   int val;
   while(cin>>val&&val!=-1)
   {
    ll.push_back(val);
   }
   ll.sort();
  
   //ll.unique(); -> lets try without using Unique function.....
   
   for(auto it=ll.begin();it!=ll.end();it++)
   {
     if(next(it)!=ll.end() && *it==*next(it)) // this only works for a single val
     {
        ll.erase(next(it));
     }
   }


  for(int val:ll)
  {
    cout<<val<<" ";
  }

  return 0;
}