//program ot find transpose of matrix
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3];
    //input array
    printf("Enter valu of matrix eliment :-\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter num :-");
            scanf("%d",&a[i][j]);
        }
    }
    //output array eliment
    printf("Orignal matrix is :-\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]); 
        }
        printf("\n");
    }

    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        b[i][j]=a[j][i];
       
    printf("Transpose of matrix is:-\n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]); 
        }
        printf("\n");
    }
    return 0;
}