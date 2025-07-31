#include<bits/stdc++.h>
using namespace std;
int main()
{

   //vector<int>v; -- type 1;
   int n;
   cin>>n;
   //vector<int>v(n);  -- type2
   //vector<int>v(10,-1);// --type3
   //vector<int>v2(v); --type4
   //int ar[5]={1,2,3,4,5};
   //vector<int>v2(ar,ar+5); --type5
   vector<int>v2={1,2,3,4,5};// --type6=direct intializing.
   cout<<v2.size()<<endl;
   for(int i=0;i<v2.size();i++)
   {
    cout<<v2[i]<<" ";
   }
  

  return 0;
}