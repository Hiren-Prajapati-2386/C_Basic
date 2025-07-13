//input str and output str using loop
#include<stdio.h>

void printstring(char str[]);
int main()
{
    char firstname[50] = "Hiren";
    char lastname[50] = "Prajapati";

    printstring(firstname);
    printstring(lastname);


}

void printstring(char str[])
{
    for(int i=0;str[i]!='\0';i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
}