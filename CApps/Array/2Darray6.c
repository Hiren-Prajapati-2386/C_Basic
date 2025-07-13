//Addition of two matrix
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3];
    //input two matrix
    printf("Enter value for first matrix :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter num :-");
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter value for second matrix :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter num :-");
            scanf("%d",&b[i][j]);
        }
    }
    //print two matrix
    printf("Given first matrix is :-\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Given second matrix is :-\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
     //prossesing of addition
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
     //print output
    printf("additon of two matrix is :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}