//menu base +,-,*,/
#include<stdio.h>
//function prototype
void addition();
void subtraction();
void multiplication();
void division();

int main()
{
    int n;
    printf("Menu :-\n");
    printf("1.Addition\n");
    printf("2.subtraction\n");
    printf("3.multiplication\n");
    printf("4.division\n");

    printf("Enter your choise :-");
    scanf("%d",&n);

    switch (n)
    {
    case 1 : addition();
        break;
    case 2 : subtraction();
        break;    
    case 3 :  multiplication();
        break;
    case 4 : division();
        break;
    default: printf("Enter valid choise\n");
        break;
    }
    return 0;

}

void addition()
{
    int a,b;
    printf("Enter num to find addition \n");
    scanf("%d",&a);
    scanf("%d",&b);

    printf("Sum of two num is %d",a+b);
}

void subtraction()
{
    int a,b;
    printf("Enter num to find subtraction \n");
    scanf("%d",&a);
    scanf("%d",&b);

    printf("subtraction  of two num is %d",a-b);
}

void multiplication()
{
    int a,b;
    printf("Enter num to find multiplication \n");
    scanf("%d",&a);
    scanf("%d",&b);

    printf("multiplcation of two num is %d",a*b);
}

void division()
{
    int a,b;
    printf("Enter num to find division \n");
    scanf("%d",&a);
    scanf("%d",&b);

    printf("divistion of two num is %d",a/b);
}