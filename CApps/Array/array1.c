//program to count total enen odd numbar ia an arry
#include<stdio.h>
int main()
{
   int num[10],even=0,odd=0;
   printf("Enter 10 num to count even odd \n");
   for(int i=0;i<10;i++)
   {
    scanf("%d",&num[i]);
   }
   for(int i=0;i<10;i++)
   {
    if(num[i]%2==0)
    {
        even++;
    }
    else{
        odd++;
    }

   }
   printf("even num =%d\n",even);
   printf("odd num =%d\n",odd);
  
}

