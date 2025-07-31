#include<stdio.h>
#include<math.h>
int main()
{
  float x;
  scanf("%f",&x);
  int val =floor(x);
  if(val==x)
  {
    printf("int %d",val);
  }
  else
  {
    float z=x-val;
    printf("float %d %.3f",val,z);
  }

  return 0;
}