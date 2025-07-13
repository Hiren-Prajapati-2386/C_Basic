//program to sum even num & prodact of odd num
#include<stdio.h>
int main()
{
    int num[10],sum=0,multi=1;
    printf("Enter 10 num :-\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
    }

    for(int i=0;i<10;i++)
    {
        if(num[i]%2==0)
        sum = sum + num[i];
        else
        multi = multi*num[i];
    }
    printf("sum of even num is %d\n",sum);
    printf("product of odd num is %d\n",multi);
    return 0;
}