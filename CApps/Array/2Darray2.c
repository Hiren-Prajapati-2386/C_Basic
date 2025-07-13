//program to find sum of even num & product of odd num
#include<stdio.h>
int main()
{
    int a[3][3],sum=0,prod=1;
    //input array 
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter num :-");
            scanf("%d",&a[i][j]);
        }
    }
    //output array eliment
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]); 
        }
        printf("\n");
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           if(a[i][j]%2==0)
            sum = sum + a[i][j];
           else
           prod = prod*a[i][j];

        }
    }
      printf("Total sum of even num=%d\nTotal product of odd num=%d\n",sum,prod);

}