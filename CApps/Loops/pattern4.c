#include<stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=4;j++)
        {
         if(i==2 && j==1 || i==2 && j==4||i==3 && j==1 || i==3 && j==4)
          {
            printf("  ");
            continue;
          }
          if(i==2 && j==2 || i==2 && j==3||i==3 && j==2 || i==3 && j==3)
          {
            printf("X ");
            continue;
          }
          if(i==5)
          {
            printf("   0");
            break;
          }
          printf("M ");
        }
        printf("\n");
    }


}