//read the chrectar and write chrectar
#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("program2.txt","r");
    
    char ch;
    fscanf(fptr,"%c",&ch);
    printf("%c",ch);
    fscanf(fptr,"%c",&ch);
    printf("%c",ch);
    fscanf(fptr,"%c",&ch);
    printf("%c",ch);
    fscanf(fptr,"%c",&ch);
    printf("%c",ch);
    fscanf(fptr,"%c",&ch);
    printf("%c",ch);
    
    fclose(fptr);
    
    fptr = fopen("program2.txt","w");

    fprintf(fptr,"%c",'d');
    fprintf(fptr,"%c",'e');
    fprintf(fptr,"%c",'v');
    fprintf(fptr,"%c",'y');
    fprintf(fptr,"%c",'a');
    fprintf(fptr,"%c",'n');
    fprintf(fptr,"%c",'i');
    
}

