//calculate sum,product & average of two num and returan all three valu
#include<stdio.h>
void calculate(int a,int b,int *sum,int *avg,int*multi);

int main()
{
    int a,b,sum,avg,multi;
    printf("enter two num :");
    scanf("%d %d",&a,&b);
    calculate(a,b,&sum,&avg,&multi);
    printf("sum = %d\n avg = %d\n multi = %d",sum,avg,multi);

}

void calculate(int a,int b,int *sum, int *avg,int *multi)
{
    *sum = a+b;
    *avg = (a+b)/2;
    *multi = a*b;
}