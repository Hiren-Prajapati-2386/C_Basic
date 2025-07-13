//find lenth of string using strlen function
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter value of string :-\n");
    gets(str);

    int lenth = strlen(str);
    printf("Lenth of string is %d",strlen(str));
}