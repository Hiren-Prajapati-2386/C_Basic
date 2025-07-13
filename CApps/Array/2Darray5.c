//program to print row wise & column wise sum of matrix(2D array)
#include<stdio.h>
int main()
{
    int a[3][3];
    //input 
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          printf("Enter num :-");
          scanf("%d",&a[i][j]);  
        }
    }
    //output of array
    printf("Your given matrix is shown below :-\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          printf("%d\t",a[i][j]);  
        }
        printf("\n");
    }

    printf("Row wise sum of matrix is :-\n");
    for(int i=0;i<3;i++)
    {
        int sum = 0;
        for(int j=0;j<3;j++)
        {
          sum = sum + a[i][j];
        }
        printf("sum of row %d is = %d\n",i+1,sum);
    }
    printf("Column wise sum of matrix is :\n");
     for(int i=0;i<3;i++)
    {
        int sum = 0;
        for(int j=0;j<3;j++)
        {
          sum = sum + a[j][i];
        }
        printf("sum of column %d is = %d\n",i+1,sum);
    }
    return 0;

}