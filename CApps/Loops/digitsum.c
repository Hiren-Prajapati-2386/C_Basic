// programm to find sum of  digits of given number Like 1234 => 1+2+3+4=10
#include<stdio.h>
int main()
{
   int i,sum=0;
   printf("enter number :\n");
   scanf("%d",&i);

 /* while (i>0)
  {
    sum = sum + (i%10);
    i=i/10;
  }*/

  for(i ;i>0 ;i=i/10)
  {
    sum = sum + (i%10);
  }
  
   printf("sum is %d",sum);
    return 0;
}