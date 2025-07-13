//program to find reverse of given num
#include<stdio.h>
int main()
{
    int n,rev=0;
    printf("Enter num to find rever of it :-");
    scanf("%d",&n);

    for(int i=n;i>0;i=i/10)
    {
        rev = (rev*10) + (i%10);
    }

    printf("reverse num of give num is %d",rev);
}