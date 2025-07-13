// print sum of num 5 to 50 inciude 5&50
#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=5;i<=50;i++)
    {
        sum = sum + i;
    }
    printf("you sum is %d",sum);
return 0;
}