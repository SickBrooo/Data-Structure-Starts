#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   int search;
   cin>>search;
   int l,r;
   l=0,r=n-1;
   int flag=0;
   while(l<=r)
   { 
    int mid=(l+r)/2; // index of array arr!!!!!;
   
    if(arr[mid]==search)
    {
     flag=1;
     break;
    }
    else if(arr[mid]>search)
    {
      r=mid-1;
    }
    else
    {
      l=mid+1;
    }
   }
   if(flag==0)
   {
    cout<<"Not found"<<endl;
   }
   else
   {
    cout<<"found"<<endl;
   }


  return 0;
}