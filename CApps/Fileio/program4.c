//it is use to recourd our history of sum
#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("program4.txt","a");
    int a,b;
    printf("Enter two num to make sum\n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Sum of %d and %d is %d\n",a,b,a+b);

    fprintf(fptr,"%d + %d = %d\n",a,b,a+b);
    fclose(fptr);
    
    }