//check that num is prime or not

#include<stdio.h>
int main()
{
    int num,key=0;
    printf("enter num to cheak prime num:-\n");
    scanf("%d",&num);

    for(int i=1 ;i<=num ;i++)
    {
       if(num%i==0)
       key++;
    }

    if(key==2)
    printf("%d is an prime num \n",num);
    else
    printf("%d is not prime num \n",num);

}

//   #include<stdio.h>
//   int main(){
//     int num;
//     printf("Enter num to check prime or not :");
//     scanf("%d",&num);

//     if(num%2 == 0||num%3 == 0||num%5 == 0||num%7 == 0)
//     {
//         if(num==2||num==3||num==5||num==7)
//         {
//            printf("given num is prime"); 
//         }
//         else
//         {
//         printf("given num is not prime");
//         }
//     }
//     else
//     {
//         if (num == 1)
//         {
//          printf("given num is not prime");   
//         }
//         else
//         {
//         printf("given num is prime");
//         }
//     }
//     return 0;
//   }