#include<bits/stdc++.h>
using namespace std;
int main()
{
   int x,y;
   cin>>x>>y;
   int arr[x];
   for(int i=0;i<x;i++)
   {
    cin>>arr[i];
   }
   int sum=0;
   for(int i=0;i<y;i++)
   {
     sum=sum+arr[i];
   }
   cout<<sum<<endl;
  return 0;
}