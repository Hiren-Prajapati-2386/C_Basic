//check if given number is armstrong or not

#include<stdio.h>

int main()
{
    int n,sum=0,cont=0,mul=1;
     printf("Enter num to check if Armstrong num or not :");//153
     scanf("%d",&n);
     int x=n;
     while (n!=0)
     {
        cont++;
        n = n/10;
     }
     printf("%d",cont);
     n=x;
     
    while (n!=0)
    {
      int rem = n%10;
     while (cont!=0)
     {
      mul = mul*(n%10);
      cont--;
     }
     sum = sum + mul;
     n=n/10;
     
    }
    
     if (sum==x)
     {
        printf("given num is armstrong num ");
     }
     else
     {
        printf("given num is not armstrong num ");
     }
     
     
       return 0;
}
