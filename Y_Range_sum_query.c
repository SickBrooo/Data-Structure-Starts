#include<stdio.h>
int main()
{
  int n,p;
  scanf("%d %d",&n,&p);
   long long int arr[n];
   long long int pre[n];
  for(int i=0;i<n;i++)
  {
    scanf("%lld",&arr[i]);
  }
  pre[0]=arr[0];
  for(int i=1;i<n;i++)
  {
    pre[i]=pre[i-1]+arr[i];
  }
  while(p--)
  {
    int l,r;
    long long  sum=0;
    scanf("%d %d",&l,&r);
    if(l-1==0)
    {
      sum=pre[r-1];
    }
    else
    {
      sum=pre[r-1]-pre[l-2];
    }
    printf("%lld\n",sum);
  }
  return 0;
}