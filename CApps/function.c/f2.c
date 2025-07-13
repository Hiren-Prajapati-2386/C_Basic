//Add two number using function(with argument,no return)

#include<stdio.h>
//function prototype
void add(int,int);

int main()
{
    int a,b;
    printf("Enter two num :\n");
    scanf("%d %d",&a,&b);
    add(a,b);
}
//function definetion
void add(int x,int y)
{
    int sum;
    sum = x + y;
    printf("sum is %d",sum);
}