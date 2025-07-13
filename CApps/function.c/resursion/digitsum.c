#include<stdio.h>
int digitsum(int);

int main()
{
    int num=1234;
    int sum = digitsum(num);
    printf("sum is %d",sum);
    return 0;

}

int digitsum(int n)
{
   if(n==0)
   {
    return 0;
   }
   return(n%10) + digitsum(n/10);

}