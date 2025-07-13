// #include <stdio.h>
// int main()
// {
    // for(int i=1;i<=5;i++)
    // {
    //     for(int j=1;j<=i;j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // for(int i=1;i<=5;i++)
    // {
    //     for(int j=1;j<i;j++)
    //     {
    //         printf(" ");
    //     }
    //     for(int k=5;k>=i;k--)
    //     {
    //         printf(" *");
    //     }
    //     printf("\n");
    // }
    // return 0;

    // for(int i=1;i<=5;i++)
    // {
    //     for(int j=5;j>=i;j--)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    // for(int i=1;i<=5;i++)
    // {
    //     for(int j=1;j<i;j++)
    //     {
    //         printf(" ");
    //     }
    //     for(int k=1;k<=4;k++)
    //     {
    //         printf(" *");
    //     }
    //     printf("\n");
    // }

    // for(int i=1;i<=4;i++)
    // {
    //     for(int j=1;j<=i;j++)
    //     {
    //         printf(" ");
    //     }
    //     for(int k=4;k>=i;k--)
    //     {
    //         printf(" *");
    //     }
    //     printf("\n");
    // }
    // for(int i=1;i<=3;i++)
    // {
    //     for(int j=4;j>=i+1;j--)
    //     {
    //         printf(" ");
    //     }
    //     for(int k=1;k<=i+1;k++)
    //     {
    //         printf(" *");
    //     }
    //     printf("\n");
    // }

    // program for holo squre

    // for(int i=1;i<=6;i++)
    // {

    //     for(int j=1;j<=5;j++)
    //     {
    //         if(i==1||i==6||j==1||j==5)
    //         printf("* ");
    //         else
    //         printf("  ");

    //     }
    //     printf("\n");
    // }

    // for(int i=1;i<=5;i++)
    // {
    //     for(int j=5;j>i;j--)
    //     {
    //         printf(" ");
    //     }
    //     if(i==5)
    //     {

    //     }
    //     printf(" *");
    //     printf("\n");
    // }

    // int num,key=0;
    // printf("enter num to cheak prime num:-\n");
    // scanf("%d",&num);

    // for(int i=1 ;i<=num ;i++)
    // {
    //    if(num%i==0)
    //    key++;
    // }

    // if(key==2)
    // printf("%d is an prime num \n",num);
    // else
    // printf("%d is not prime num \n",num);

//     int a[2][2][2];

//     printf("Enter arrey eliment :-\n");
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             for (int k = 0; k < 2; k++)
//             {
//                 scanf("%d",&a[i][j][k]);
//             }
//         }
//     }

//     printf("3D arr eliments are :-\n");
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             for (int k = 0; k < 2; k++)
//             {
//                 printf("%d",a[i][j][k]);
//             }
//             printf("\n");
//         }
//         printf("\n");
//     }
// }


#include<stdio.h>


int main()
{
    float a,b,sum;
    printf("ENTER TWO NUMBERS\n");
    scanf("%f",&a);
    scanf("%f",&b);
    sum = a+b;
    printf("sum=%f",sum);
}