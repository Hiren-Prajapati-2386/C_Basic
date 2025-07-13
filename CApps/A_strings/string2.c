//accpet a string and count total total wold in string
#include<stdio.h>
int main()
{
    char a[50];
    printf("Enter your name :-\n");
    fgets(a,50,stdin);
    int key = 1;
    for(int i=0;a[i]!='\0';i++)
    {
      if(a[i]==' ')
      {
        key++; 
      }
      
    }
    printf("no of word in string are %d",key);
    
}