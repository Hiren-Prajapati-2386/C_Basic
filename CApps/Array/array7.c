//program to remove given num from array elimant
#include<stdio.h>
int main()
{
    int a[10],n,index=10;
    printf("Enter value of array elimant :-\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter value of chrectar to remove frome arry :-\n");
    scanf("%d",&n);

    for(int i=0;i<index;i++)
    {
        if(a[i]==n)
        {
            for(int j=i;j<index;j++)
            {
                a[j]=a[j+1];
            }
            index--;

        }
    }

    printf("new array is \n");
    for(int i=0;i<index;i++)
    {
       printf("%d\n",a[i]);
    }
    return 0;
} 