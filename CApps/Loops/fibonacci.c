//find fibonacci series to given num
#include<stdio.h>
int main()
{
    int n,x,y,z;
    printf("Enter maximam no of fibonachi series :-");
    scanf("%d",&n);

    x=0,y=1,z=0;

    while (z<=n)
    {
        printf("%d\n",z);
        x=y;
        y=z;
        z=x+y;

    }
    return 0;
}