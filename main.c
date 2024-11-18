//正三角
#include"stdio.h"
int main()
{
    int i,j;
    for(i-1;i<=9;i++)
      {
         for(j=1;j<=9;j++)
           {
             printf("%d*%d=%-2d",j,i,i*j);
           }
           printf("\n")
      }  
  return 0;
}
//倒三角
#include"stdio.h"
int main
{
   int i,j;
  for(i=9;i>=1;i--)
    {
       for(j=1;j<=i;j++)
         {
           printf("%d*%d=%-2d",j,i,i*j);
         }
      printf("\n")
    }
  return 0;
}
