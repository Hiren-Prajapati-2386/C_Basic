//program to counte odd & even num in 3*3 array(metrix)
#include<stdio.h>
int main()
{
    //input 2d array
    int a[3][3],even=0,odd=0;
    for(int i=0;i<3;i++)       //input 2D array we can use nested loop which can all to accses all array eliment
    {
        for(int j=0;j<3;j++)
        {
             printf("Enter number:-");
            scanf("%d",&a[i][j]);
        }
    }
    printf("your 2d array is shown bellow\n");
    //output 2D array 
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    //prosece to count odd even
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i][j]%2==0)
            even++;
            else
            odd++;
        }

    }
    printf("Total even eliment in array=%d\nTotal odd eliment in array=%d\n",even,odd);
}