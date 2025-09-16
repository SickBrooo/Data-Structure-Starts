#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
     int a,b,c;
     cin>>a>>b>>c;

     a=a-1;
     if(b>c)
     {
      b=(b-c)+(c-1);
     }
     else{
      b=(c-b)+(c-1);
     }
     if(a<b)cout<<"1"<<endl;
     else if(b<a) cout<<"2"<<endl;
     else if(a==b)
     {
      cout<<"3"<<endl;
     }
   }

  return 0;
}