//to comper two string 
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[50];
    printf("Enter value of str1 :-\n");
    gets(str1);
    printf("Enter value of str2 :-\n");
    gets(str2);

    int x = strcmp(str1,str2);
    if(x==0)
    printf("given two string are equle :\n ");
    else if(x==1)
    printf("given string 1 are grether than string 2 :\n ");
    else
    printf("given string 1 are less than string 2 :\n ");
    return 0;
}