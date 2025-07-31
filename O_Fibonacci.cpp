#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
    long long int arr[n];
    long long int x=0;
   long long int y=1;
   long long int z=1;
   for(int i=0;i<n;i++)
   {
    if(i==0)
    {
      arr[i]=x;
    }
     else
     {
       arr[i]=z;
         z=x+y;
         x=y;
         y=z;
     }
   
    }
   cout<<arr[n-1];
    

  return 0;
}