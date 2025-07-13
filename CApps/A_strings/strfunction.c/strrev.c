//to reverse string using strrev fun
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[100];
//     printf("Enter value of string :-\n");
//     gets(str);

//     printf("Reverse string is %s",strrev(str));
// }

#include<stdio.h>
int main()
{
    char a[50],b[50];
    printf("enter str :-\n");
    gets(a);

    int key=0,j;

    for(int i=0;a[i]!='\0';i++)
    {
        key++;
    }
     printf("%d\n",key);
    for(j=0;j<key;j++)
    {
        b[j] = a[key-j-1];
    }
    b[j] = '\0';
    printf("reverse string is %s",b);
    return 0;
}