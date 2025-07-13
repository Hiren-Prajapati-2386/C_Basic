//program to search array eliment in 3*3 metrix
#include<stdio.h>
int main()
{
    int a[3][3],key;
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
    printf("Enter num to search in array eliment:-");
    scanf("%d",&key); 

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i][j] == key)
            {
                printf("Given number is found at position a[%d]]%d in metrix\n",i,j);
                return 0;   //if num is found so print above stetment & program terminet by return 0;
            }
        }
    }
    printf("Given num is not found\n");
    return 0;

}