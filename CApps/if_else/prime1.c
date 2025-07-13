//print prime number to given range
#include<stdio.h>
int main()
{
    int i,num;
    printf("Enter rang of num to print prime number :");
    scanf("%d",&num);

    for(i=2;i<=num;i++)
    {
       if(i%2 == 0||i%3 == 0||i%5 == 0||i%7 == 0)
    {
        if(i==2||i==3||i==5||i==7)
        {
           printf("%d\n",i); 
        }
    }
    else
    {
        printf("%d\n",i);
    }
    }
    return 0;


    // int num;
    // printf("enter rang to print prime num 1 to ");
    // scanf("%d",&num);

    // for(int i=1; i<num; i++)
    // {
    //    int key=0;
    //    for(int j=1;j<num;j++)
    //    {
    //      if(i%j == 0)
    //       key++;
    //    }
    //    if(key==2)
    //    printf("%d \t",i);
    // }

    // return 0;
}
