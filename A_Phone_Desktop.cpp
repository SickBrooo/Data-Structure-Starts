#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
    int x,y;
    cin>>x>>y;
  
      if(y==0)
    {
      int xscreen=ceil(x/15.0);
      cout<<xscreen<<endl;
    }
    else
    {
        int screenY;
        int totalX;
        if(y%2==0)
    {
      screenY=(4*y)/8;
      totalX=screenY*7;
    }
    else{
       screenY=ceil((4*y)/8.0);
       totalX=(screenY-1)*7+11;
    }
      if(x>totalX)
      {
        int extra=x-totalX;
        int extrascreen=ceil(extra/15.0);
        cout<<screenY+extrascreen<<endl;
      }
      else
      {
        cout<<screenY<<endl;
      }
    }
   }
  return 0;
}