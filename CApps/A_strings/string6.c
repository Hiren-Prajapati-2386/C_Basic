//program to copy string withoghut string function 
#include<stdio.h>
int main()
{
    char str1[50],str2[50];
    printf("Enter value of string 1 :-\n");
    gets(str1);

    int i;
    for(i=0;str1[i]!='\0';i++)
    {
        str2[i]=str1[i];
    }
    str2[i] ='\0';

    printf("copy string is %s",str2);

}