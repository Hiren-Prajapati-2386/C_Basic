//program to sort array eliment in aciending order
#include<stdio.h>
int main()
{
    int a[10];
    printf("Enter 10 num :-");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);    
    }
     for(int i=0;i<9;i++)
     {
        for(int j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                //swap num
                int x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
        }
     }

     printf("array eliment after sorting in ascending oder\n");
     for(int i=0;i<10;i++)
     {
        printf("%d\n",a[i]);
     }
     return 0;
}    