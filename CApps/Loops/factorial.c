#include<stdio.h>
int main()
{
int n,i,fact=1;
printf("Enter the number which factorial find : ");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
    fact*=i;
}

printf("factorial of %d! is : %d",n,fact);


}