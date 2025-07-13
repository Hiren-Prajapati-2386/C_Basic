//concatenate given two string using strcat function
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[50];
    printf("Enter value of str1 :-\n");
    gets(str1);
    printf("Enter value of str2 :-\n");
    gets(str2);

    strcat(str1,str2);
    printf("combain string of two string is : %s",str1);
    return 0;
}