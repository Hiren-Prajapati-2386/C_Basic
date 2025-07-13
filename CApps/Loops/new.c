//keep taking numbers as input from user until enter multiple of 7
#include<stdio.h>
int main()
{
    int num;
    
  do
  {
    printf("Enter num :");
    scanf("%d",&num);
    printf("%d\n",num);

    if(num % 7==0)
    {
        break;
    }

  } while (1);
  printf("you enter num which ic multipal of 7");
  
  
}