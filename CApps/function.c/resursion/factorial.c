//factorial by resursion(wa,wr)
#include<stdio.h>
int fact(int);

int main()
{
    int num;
    printf("Enter num to find factorial :\n");
    scanf("%d",&num);
    int f = fact(num);
    printf("factorial is %d",f);
}

int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    int factN = fact(n-1)*n;
    return(factN);
}