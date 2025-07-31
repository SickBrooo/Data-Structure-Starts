#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   for(int i=0;i<t;i++)
   {
    int flag=0;
     int n;
     cin>>n;
     for(int i=2;i*i<=n;i++)
     {
       if(n%i==0)
       {
        flag=1;
        break;       // wrong answer on test case 2;
       }
     }
     if(flag==0)
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