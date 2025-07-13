#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("odd.txt" , "w");
    int num;

    printf("Max lenth of number to print\n");
    scanf("%d",&num);

    for(int i=1;i<=num;i++)
    {
        if(i%2 != 0)
        fprintf(fptr,"%d\n",i);
    }

    fclose(fptr);

    return 0;
}