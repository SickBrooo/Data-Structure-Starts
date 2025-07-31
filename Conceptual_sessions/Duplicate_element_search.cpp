#include<bits\stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   vector<int>V(n);
   for(int i=0;i<n;i++)
   {
    cin>>V[i];
   }
   sort(V.begin(),V.end());
   int flag=0;
   for(int i=0;i<n;i++)
   {
    if(V[i]==V[i+1])
    {
      int flag=1;
    }

   }
   if(flag==1)
   {
    cout<<"Duplicate"<<endl;
   }
   else 
   {
    cout<<"No Duplicate"<<endl;
   }

  return 0;
}