#include<bits/stdc++.h>
using namespace std;
int main()
{
   int p,q;
   cin>>p>>q;
  vector<int>arr(p);
   for(int i=0;i<p;i++)
   {
    cin>>arr[i];
   }
   sort(arr.begin(),arr.end());
   while(q--)
   {
    int search;
    cin>>search;
    int flag=0;
    int l=0;
    int r=p;
    while(l<=r)
    {
      int mid=(l+r)/2;
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
    if(flag==1)
    {
      cout<<"found"<<endl;
    }
    else
    {
      cout<<"not found"<<endl;
    }
   }
   
   return 0;
}