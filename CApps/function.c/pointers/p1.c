//write program to find maximam number between two num using pointer
#include<stdio.h>
int findmax(int *x,int *y);

int main()
{
    int a,b;
    printf("enter two num :");
    scanf("%d %d",&a,&b);
    int max = findmax(&a,&b);
    printf("max = %d",max);
    return 0;
}

int findmax(int *x,int *y)
{
    if (*x > *y)
    {
        return(*x);
    }
    else
    {
        return(*y);
    }
    


}