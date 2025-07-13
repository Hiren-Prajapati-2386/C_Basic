#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the number of tabel :");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        printf("%d * %d =%d \n",n,i,i*n);
    }
    return 0;
}