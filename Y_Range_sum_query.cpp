#include<bits/stdc++.h>
using namespace std;
int main()
{
   int p,q;
   cin>>p>>q;
   vector<long long int>v(p+1);
   for(int i=1;i<=p;i++)
   {
    cin>>v[i];
   }
   vector<long long int >pre(p+1);
   pre[1]=v[1];
   for(int i=2;i<=p;i++)
   {
    pre[i]=pre[i-1]+v[i]; // prefix Sum
   }
   while(q--)
   {
    long long int sum=0;
    int l,r;
    cin>>l>>r;
    if(l==1)
    {
      sum=pre[r];
    }
    else
    {
      sum=pre[r]-pre[l-1];
    }
    cout<<sum<<endl;
   }

  return 0;
}