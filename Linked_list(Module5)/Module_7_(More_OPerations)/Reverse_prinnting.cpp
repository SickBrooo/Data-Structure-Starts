#include<bits/stdc++.h>
using namespace std;
void rec(int n,int i)
{
  if(i>n)
  {
    return ;
  }
  
  rec(n,i+1);
  cout<<i<<" ";

}
int main()
{
   int n=5;
   int i=1;
   rec(n,i);
  return 0;
}