//writet function to find reverse of a given number(wa,nr)
#include<stdio.h>
void reverse(int);

int main()
{
    int a;
    printf("Enter num to find reverse :");
    scanf("%d",&a);
    reverse(a);
    return 0;
}

void reverse(int a)
{
    int rev=0;
    for(int i=a;i>0;i=i/10)
    {
        rev = (rev*10)+(i%10);
    }
    printf("reverse is %d",rev);
}