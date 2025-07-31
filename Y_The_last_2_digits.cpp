#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int a,b,c,d;
   cin>>a>>b>>c>>d;
   long long mx=a*b*c*d;
   long long int digit=mx/10;
   long long int last=mx%10;
   long long int last2=digit%10;
   cout<<last2<<last;


  return 0;
}