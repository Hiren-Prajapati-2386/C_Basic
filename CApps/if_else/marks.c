//
#include<stdio.h>
int main()
{
    int marks;
    printf("Enter marks(0-100)\n");
    scanf("%d",&marks);

   if(marks>=0 && marks<30)
    {
        printf("grade:c\n");
    }
    else if(marks>=30 && marks<70)
    {
        printf("grade:B\n"); 
    }
    else if(marks>=70 && marks<90)
    {
      printf("grade:A\n"); 
    }
    else if(marks>=90 && marks<=100)
    {
        printf("grade:A+\n");
        if(marks == 100)
        {
            printf("Wha bete bahot aage jaaega\n");
        }
    }
    else{
        printf("Enter valid marks");
    }
    

  
    return 0;
    
 }





