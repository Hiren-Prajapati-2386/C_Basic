//program to print left and right digonal of 3*3 metrix
#include<stdio.h>
int main()
{
    int a[3][3];
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

    printf("Left digonal of metrix is:-\n");
    for(int i=0;i<3;i++)
    {
        printf("%d\t",a[i][i]);
    }
    printf("\n");
    printf("Right digonal of metrix is:-\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i+j==2)         //for right digonal elimen position sum is 1 less then max num of raw like 3*3 metrix i+j==3-1
            {
              printf("%d\t",a[i][j]);
            }
        }
    }
    return 0;
}