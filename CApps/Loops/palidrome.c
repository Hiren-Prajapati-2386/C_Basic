//cheak that given num is palidrom or not mine 232 = 232 right 123 =321 wrong
#include<stdio.h>
int main()
{
    int n,rev=0;
    printf("Enter num to cheak palidrom or not :-");
    scanf("%d",&n);

    for(int i=n;i>0;i=i/10)
    {
       rev = (rev*10) + (i%10);
    }

    if(n == rev)
    printf("Given num is palidrom \n");
    else
    printf("Given num is not palidrom \n");


}