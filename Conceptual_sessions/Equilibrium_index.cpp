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
   for(int i=0;i<n;i++)
   {
    int right_sum=0;
    int left_sum=0;
    for(int r=0;r<i;r++)
    {
      right_sum=right_sum+v[r];   //O(n*n)==O(n^2);
    }
    for(int l=i+1;l<n;l++)
    {
      left_sum=left_sum+v[l];
    }
    if(right_sum==left_sum)
    {
      cout<<i<<endl;
      break;
    }
   }

  return 0;
}