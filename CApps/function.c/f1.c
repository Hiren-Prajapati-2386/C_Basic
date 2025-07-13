// Add two num using function (no argument ,no return)

#include<stdio.h>
//function prototype
void add();

int main()
{
    add();
   return 0;
}
//function definetion
void add()
{
    int a,b,sum;
    printf("Enter two number :\n");
    scanf("%d %d",&a,&b);

    sum = a+b;
printf("sum is %d\n",sum);
}
