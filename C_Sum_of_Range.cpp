#include<bits/stdc++.h>
using namespace std;
int main()
{
  int x,y;
  cin>>x>>y;
  int sum=0;
  int even=0;
  int odd=0;
  if(x>y)
  {
    int swap=x;
    x=y;
    y=swap;
  }
   for(int i=x;i<=y;i++)
   {
     sum+=i;
     if(i%2==0) even+=i;
     if(i%2==1) odd+=i;
   }
   cout<<sum<<endl<<even<<endl<<odd<<endl;
  return 0;
}