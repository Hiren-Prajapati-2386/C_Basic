//copy string using strcpy 
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];
    printf("Enter value of string 1 :-\n");
    fgets(str1,50,stdin);

    strcpy(str2,str1);
    printf("copyed string is %s",str2);
}