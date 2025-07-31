#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,q;
   cin>>n>>q;
   int ar[n];
   for(int i=0;i<n;i++)
   {
    cin>>ar[i];
   }
   for(int i=0;i<q;i++)
   {
      int flag=0;
      int x;
      cin>>x;
      for(int i=0;i<n;i++)         //this code time limit exceeded.......!!!!
      {
        if(ar[i]==x)
        {
          cout<<"found\n";
          flag=1;
        }
       
      }
      if(flag==0)
      {
        cout<<"not found\n";
      }
    } 
  
  return 0;
}