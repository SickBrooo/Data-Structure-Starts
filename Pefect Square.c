#include<stdio.h>
#include<math.h>
int main()
{
  int n;
  scanf("%d",&n);
  float v=sqrt(n);
  if(floor(v)==v)
  {
    printf("this ia perfect square");
  }
  else
  {
    printf("this is Not a perfect square");
  }
  return 0;
}