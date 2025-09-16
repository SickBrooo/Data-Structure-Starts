#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n;
   cin>>n;
   long long int sum=0;
   for(int i=1;i*i<=n;i++)
   {
      if(n%i==0)
      {
       sum+=i;
       if(n/i==i) continue;
       sum+=n/i;
      }
   }
   cout<<sum<<endl;

  return 0;
}