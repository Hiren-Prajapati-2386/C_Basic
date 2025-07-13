#include<stdio.h>
int main()
{
    int n,i=1,fact=1;
    printf("Enter num to find factorial : ");//4
    scanf("%d",&n);

    factfind:
    fact *= i;
    i++;

    if (i<=n)
    {
       goto factfind;
    }
    printf("factorial of %d! = %d ",n,fact);
    
    return 0;
}