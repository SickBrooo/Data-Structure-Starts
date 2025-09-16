#include<bits/stdc++.h>
using namespace std;
int main()
{
   map<string,int>mp;
   mp["Adel"]=50;   // logN
   mp["Arup"]=49;
   mp["Sayadi"]=51;
  // map er nam then[] then "Value" = value;
   for(auto it=mp.begin();it!=mp.end();it++) // O(NlogN);
   {        
    cout<<it->first<<" "<<(*it).second<<endl; // O(logN)
    // first -> KEY // second-> Value;;    
   }
   // count functions return true or false; if key present returns true;; else returns false;;
   if(mp.count("Adel"))
   {
    cout<<"Present"<<endl;
   }
   else cout<<"Not Present"<<endl;
  return 0;
}