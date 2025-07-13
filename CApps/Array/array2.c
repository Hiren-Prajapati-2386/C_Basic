// program to find sum of arry eliment
#include<stdio.h>
int main()
{
    int num[10],sum=0;
    printf("Enter 10 num to sum\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
    }

    for(int i=0;i<10;i++)
    {
        sum = sum+num[i];
    }

    printf("sum of num is = %d",sum);

}