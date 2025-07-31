#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int>v={0,1,2,3,4,5};
   vector<int>v2={100,200,300};
    // v.pop_back();
    // v.push_back(700);
    //insert function
    //v.insert(pos,value);
    //v.insert(v.begin()+2,777)
    //v.insert(v.begin()+2,v2.begin(),v2.end());// --another way of inserting vector in another vector;
    //EraseFunction
    v.erase(v.begin()+1,v.end()-1);
   for(int z:v)
   {
    cout<<z<<" ";
   }

  return 0;
}