#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
  
   vector<int>arr(n);
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
    sort(arr.begin(),arr.end());
     int q;
     cin>>q;
    
    for(int i=0;i<q;i++)
    {
      int search;cin>>search;
      int l=0,r=n;
      int flag =0;
      while(l<=r)
      {
       int mid=(l+r)/2;
       if(arr[mid]==search)
       {
        flag==1;
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
        cout<<"YES"<<endl;
      }
      else
      {
        cout<<"NO"<<endl;
      }
      
    }


  return 0;
}