#include<bits/stdc++.h>
using namespace std;
void fun(int *&p)
{
 
  p=NULL;
  cout<<"in fun: "<<&p<<endl;
}
int main()
{                              
  // this way value dosent changes on main ;;;
  //now it does using *&p;;;;

   int x=10;
   int *p=&x;
   fun(p);
   cout<<"in main: "<<p<<endl;

  return 0;
}