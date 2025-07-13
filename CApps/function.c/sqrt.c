//find sqrt by function
#include<stdio.h>
void squrroot(int);

int main()
{
    int num=81;
    squrroot(num);
    return 0;

}

void squrroot(int n)
{
    for(int i=1;i<=n;i++)
    {
        int x = n/i;
        int y = n%i;
        if(x==i & y==0)
        {
            printf("sqrt is %d",i);
        }
    }

}