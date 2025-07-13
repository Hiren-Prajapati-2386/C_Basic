//add two num using function (with argument,with return)
#include<stdio.h>
//function prototype
int add(int,int);
int main()
{
    int a,b;
    printf("enter two num :\n");
    scanf("%d %d",&a,&b);
    printf("sum is %d",add(a,b));


}
int add(int a,int b)
{
    int sum;
    sum = a+b;
    return(sum);

}