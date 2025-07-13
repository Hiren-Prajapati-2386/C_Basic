//cheak given string is palindrome or not
#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[50];
    printf("Enter string value :-\n");
    fgets(a,50,stdin);
    
    int lenth = strlen(a)-1;
    printf("lenth is %d\n",lenth);

    int i;
    for(i=0;i<lenth;i++)
    {
        b[i] = a[lenth-i-1];
    }
      b[i]='\0';
    printf("string b is %s\n",b);
    printf("string a is %s\n",a);

}


