#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int sum=0;
  //  for(int i=1;i<=n;i++)
  //  {
  //    sum=sum+i;  //using Loop
  //  }
  sum=(n*(n+1))/2;
  cout<<sum;       // without using loop saves time.
                   //this is time complexcity
  return 0;
}