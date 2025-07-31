#include<bits/stdc++.h>
using namespace std;
int main()
{  int t;cin>>t;
   for(int i=0;i<t;i++)
   {
   string s;
   cin>>s;
   int pos=s.size();
   pos=pos-2;
   s.replace(pos,2,"i");
   cout<<s<<endl;
   }
   
   return 0;
}