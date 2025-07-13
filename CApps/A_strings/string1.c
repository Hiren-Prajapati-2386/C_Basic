//accpet a string and count total lenth(number or character)
#include<stdio.h>
int main()
{
    char a[50];
    printf("Enter your name :-\n");
    fgets(a,50,stdin);
     int i=0;
    while (a[i]!='\0')
    {
      i++;
    }
    
   
    printf("lenth of string are %d",i-1);
    
}