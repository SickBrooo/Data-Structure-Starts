#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++)
   {
    cin>>v[i];
   }
   vector<int>suffix(n);
   vector<int>prefix(n);
   prefix[0]=v[0];
   for(int i=1;i<n;i++)
   {
    prefix[i]=prefix[i-1]+v[i];
   }
   suffix[n-1]=v[n-1];
   for(int i=n-2;i>=0;i--)
   {
    suffix[i]=suffix[i+1]+v[i];
   }
  //  for(int i=0;i<n;i++)
  //  {
  //   cout<<suffix[i]<<" ";
  //  }
  //  cout<<endl;              // O(N) complexity
  //  for(int i=0;i<n;i++)
  //  {
  //   cout<<prefix[i]<<" ";
  //  }
  for(int i=0;i<n;i++)
  {
    if(suffix[i]==prefix[i])
    {
      cout<<i<<" ";
    }
  }

  return 0;
}