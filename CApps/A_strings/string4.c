//program to find chrecter in string eliment not case sencitive

#include<stdio.h>
#include<ctype.h>

int main()
{
   char str[50],ch;
   printf("Enter string value :-\n");
   gets(str);
   printf("Enter ch to find in string :-");
   scanf("%c",&ch);
    
    ch = tolower(ch);

   int flag=0,pos;
   for(int i=0;str[i]!='\0';i++)
   {
    if(str[i]==ch || str[i]==(ch-32))
    {
        flag++;
        pos = i + 1;
        break;
    }
   }

   if(flag==1)
   printf("ch is present at position %d\n",pos);
   else
   printf("ch is not present \n");
}



