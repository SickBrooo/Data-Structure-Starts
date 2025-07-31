#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,m;
   cin>>n>>m;
   int arr[n];
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   int freq[100000+1]={0};

   for(int j=0;j<n;j++)
    {
      freq[arr[j]]++;
    }
  
   for(int i=1;i<=m;i++)
   {
     cout<<freq[i]<<endl;
   }
  

  return 0;
}