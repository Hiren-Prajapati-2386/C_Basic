//function to find squre & cube of given num
#include<stdio.h>
int squre(int);
int cube(int);
int main()
{
    int num;
    printf("Enter num to find squre & cube : ");
    scanf("%d",&num);
    printf("Given num squre is %d & cube is %d",squre(num),cube(num));
     
}

int squre(int n)
{
    int x =n*n;
    return(x);
}
int cube(int n)
{
    int y= n*n*n;
    return(y);
}