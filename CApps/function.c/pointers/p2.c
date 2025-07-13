// swap two num using pointer (function) swap function two num so no return,pointer is used to return multipal value or function;
#include<stdio.h>
void swap(int *x,int *y);

int main()
{
    int a = 5,b = 8;
     swap(&a,&b);
    printf("a=%d  b=%d",a,b);
}

void swap(int *x,int *y)
{
    int c;
    c = *x;
    *x = *y;
    *y = c;
    printf("x=%d  y=%d",*x,*y);
}