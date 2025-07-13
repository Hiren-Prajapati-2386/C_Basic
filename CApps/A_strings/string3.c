//program to concatenate two string
#include<stdio.h>
int main()
{
    char str1[100],str2[50];
    printf("enter valu of first str\n");
    gets(str1);
    printf("enter valu of second str\n");
    gets(str2);

    //program to find lenth of str1

    int key = 0;
    for(int i=0;str1[i]!='\0';i++)
    key++;
    printf("%d\n",key);
    str1[key]=' ';

   // program to concatenate

   for(int i=0;str2[i]!='\0';i++)
   {
    str1[i+key+1]=str2[i];
   }

   printf("full str is %s\n",str1);
   return 0;

// char a[50],b[50],c[50];
// printf("Enter value of string 1\n");
// gets(a);
// printf("Enter valu of string 2\n");
// gets(b);

// int i;
// for (i = 0;a[i]!='\0';i++) //hiren hiren
//     c[i] = a[i];
    
// for(int j=0;b[j]!='\0';j++,i++) //prajapati
//     c[i] = b[j];

//     c[i]='\0';

//     printf("Full string is :- %s",c);

}