#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   for(int i=1;i<n;i*=2) // this is now not depending on n/ O(n);
   {                     //this has less operation than n itself;
    cout<<i<<endl;
   }
   for(int i=1;i<n;i/=2) // this is now depends on K;
   {                     //So, the complexity will be O(logN);
    cout<<i<<endl;
   }


  return 0;
}