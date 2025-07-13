//program is used to get holl string(pregraph) from file;
#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("program3.txt","r");
    char ch = fgetc(fptr);
    printf("%c",ch);
    while (ch!=EOF)   //fof means end of file fgetc retur this when file is end
    {
        ch = fgetc(fptr);
        printf("%c",ch);
    }
    fclose(fptr);
    return 0;
}