#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter charactar :-\n");
    scanf("%c",&ch);

    if(isalpha(ch))
    printf("ch is alphabet\n");
    else
    printf("ch is not alphbet\n");

    if(isdigit(ch))
    printf("ch is digit\n");
    else
    printf("ch is not digit\n");

    if(isalnum(ch))
    printf("ch is alphabet or an numerical value\n");
    else
    printf("ch is not alphbet nor digit\n");

    if(isspace(ch))
    printf("ch is speace\n");
    else
    printf("ch is not speace\n");

    printf("The ch in lower case = %c\n",tolower(ch));
    printf("The ch in upper case = %c\n",toupper(ch));
    return 0;
}