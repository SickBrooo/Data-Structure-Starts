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
   int flag=0;
   for(int i=0;i<n;i++)
   {
    if(v[i]<v[i+1]) // checking descending Order
    {
      flag=1;
      break;
    }
   }
   if(flag==1)
   {
    cout<<"Not Sorted"<<endl;
   }
   else
   {
    cout<<"Sorted"<<endl;
   }

  return 0;
}