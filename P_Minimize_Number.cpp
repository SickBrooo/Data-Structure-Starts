#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] % 2 == 0)
    {
      count++;
    }
  }
  int res=0;
  if(n==count)
  {
    for(int i=0;i<n;i++)
    {
       if(arr[i]%2==1)
       {
        break;
       }
       else if(arr[i]%2==0)
       {
        arr[i]=arr[i]/2;
        res++;
       }
    }

  }
  cout<<res;
  cout<<res<<endl; 
  return 0;
}