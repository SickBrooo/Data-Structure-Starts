#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   getline(cin,s);
   stringstream q(s);
   string t;
   int count=0;
   while (q>>t)
   {
    if(t[0]>96&&t[0]<123||t[0]>64&&t[0]<91)
    {
     count++;
    }
    
   }
   cout<<count<<endl;
   

  return 0;
}