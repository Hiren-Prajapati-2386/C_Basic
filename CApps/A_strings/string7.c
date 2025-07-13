#include<stdio.h>
#include<string.h>
void slice(char a[],int,int);

int main()
{
    char str[50];
    printf("Enter string value :-\n");
    fgets(str,50,stdin);

   int a=2,b=5;
   slice(str,a,b);
}