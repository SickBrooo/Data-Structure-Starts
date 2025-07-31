#include<bits/stdc++.h>
using namespace std;
int main()
{
   //list<int>LL(10,5);
  //  for(auto it=LL.begin();it!=LL.end();it++)
  //  {
  //   cout<<*it<<endl; //using itrator.
  //  }
  list<int>l={0,1,2,3,4,5};
  int arr[5]={10 ,20, 30, 40, 50};
  vector<int>v={1,2,3,4,5};// size doesnt need in vector;
  list<int>LL(v.begin(),v.end());
 for(int val : LL)
 {
  cout<<val<<" "; //printing Using Ranged base for loop;
 }
  return 0;
}