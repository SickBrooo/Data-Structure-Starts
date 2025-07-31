#include<bits/stdc++.h>
using namespace std;
int prime_check(int x,int n=2)
{
   if(x<=1)
   {
    return 0;
   }
   else if(x==2)
   {
    return 1;
   }
   else if(x%n==0)
   {
    return 0;
   }
   else if(n>sqrt(x))
   {
     return 1;
   }
   return prime_check(x,n+1);
}
int main()
{
  int t;cin>>t;            // this code gets runtime error on codeforces
  for(int i=0;i<t;i++)
  {
       int a;
   int b;
   cin>>a>>b;
   string Num;
   for(int i=0;i<b;i++)
   {
    Num=Num+to_string(a);
   }
   long long int x= stoi(Num);
   int val=prime_check(x);
   if(val==0)
   {
    cout<<"NO"<<endl;
   }
   else
   {
    cout<<"YES"<<endl;
   }
  }
   
  return 0;
}