#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   for(int i=0;i<n;i++) //O(N)
   {
     for(int i=1;i<n;i*=2) //O(logN) ???//O(NlogN);
     {
      cout<<"Hello";
     }
   }

  return 0;
}