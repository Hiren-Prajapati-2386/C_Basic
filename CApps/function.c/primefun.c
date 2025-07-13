//use function to check prime or not(wa,nr)
#include<stdio.h>
//function prototype
void prime(int);

int main()
{
    int num;
    printf("enter num to cheake prime or not :\n");
    scanf("%d",&num);
    //function call
    prime(num);
    return 0;
}

//function definetion
void prime(int a)
{
    int cont=0;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        cont++;
    }
    if (cont==2)
    {
        printf(" prime\n");
    }
    else
    {
        printf("not prime\n");
    }
    
}
