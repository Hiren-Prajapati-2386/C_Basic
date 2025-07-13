//recursion work like loop,sum of n nutrural nub
#include<stdio.h>
int sum(int);

int main()
{
    int num;
    printf("Enter range of num to sum :\n");
    scanf("%d",&num);
    int s = sum(num);
    printf("sum is %d",s);
}

int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    int sumNm1 = sum(n-1);
    int sumN = sumNm1 + n;
    return(sumN);
}