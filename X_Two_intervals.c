#include<stdio.h>
int main()
{
  long long int l1,r1,l2,r2;
  scanf("%lld %lld %lld %lld",&l1,&r1,&l2,&r2);
  if(l2<r1)
  {
     printf("%lld %lld",l2,r1);// wrong answer on test case 3
  }
  else
  {
    printf("-1");
  }

  return 0;
}