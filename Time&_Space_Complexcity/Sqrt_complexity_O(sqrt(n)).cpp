#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   for(int i=1;i<=sqrt(n);i++)
   {
    cout<<i<<" ";           //better optimized with Sqrt(n);
    cout<<n/i<<" ";
   }
   

  return 0;
}