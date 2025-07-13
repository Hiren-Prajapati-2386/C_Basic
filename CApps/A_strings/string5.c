//program to counte total num of vowels & consonants in string
#include<stdio.h>
#include<ctype.h>
int main()
{
  char a[100];
  printf("Enter value of string :\n");
  fgets(a,100,stdin);

  int vowel=0,conso=0;
  for(int i=0;a[i]!='\0';i++)
  {
    if(isalpha(a[i])) //isalph is cheack given cherectar is alph or not
    {
    if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
    vowel++;
    else
    conso++;
    }

  }
   printf("in given string num of vowel = %d and consonants = %d",vowel,conso);
   return 0;
}