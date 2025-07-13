//program to print alternativ num
#include<stdio.h>
int main()
{
   int num[10];
   printf("Enter 10 num :- \n");
   for(int i=0;i<10;i++)
   {
    scanf("%d",&num[i]);
   }

   printf("alternativ num is:-\n");

   for(int i=0;i<10;i=i+2)
   {
    printf("%d\n",num[i]);
   }
   return 0;
}   