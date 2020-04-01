#include<stdio.h>

int main()
{
  int i,j,ctr;
  for(i=2;i<=50;i++)
  {
    ctr=0;
    for(j=2;j<i;j++)
    {
      if(i%j==0)
      {
        ctr++;
        break;
      }
      else
        continue;
    }
    if(ctr==0)
      printf("%d\t",i);
  }
  return 0;
}
