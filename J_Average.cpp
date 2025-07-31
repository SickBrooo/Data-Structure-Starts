#include<bits/stdc++.h>
using namespace std;
 double average(double arr[],int n)
 {
    double value=0;
    double sum=0;
    for(int i=0;i<n;i++)
    {
      sum=sum+arr[i];
    }
    value=sum/n;
    return value;
 }
int main()
{
  int n;cin>>n;
   double arr[n];
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   double value=average(arr,n);
   cout<<fixed<<setprecision(7)<<value<<endl;
   


  return 0;
}