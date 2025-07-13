#include<stdio.h>

int main()
{
  int bd,bm,by,pd,pm,py;
  printf("Enter your date of birth DD/MM/YYYY");
  scanf("%d %d %d",&bd,&bm,&by);
  printf("enter present date DD/MM/YYYY");
  scanf("%d %d %d",&pd,&pm,&py);

  //year calculate:-

  int year;
  year = py - by -1;

  //month calculate:-

  int month;
  month = (12-bm) + pm;
  if(month>12)
  {
    year++;
    month = month - 12;
  }

  //date calculate:-
   int day;
   if(bm == 1||bm == 3||bm == 5||bm == 7||bm == 8||bm == 10||bm == 12)
  {  
    day = (31 - bd) + pd;
    if(day > 30)
    {
      month++;
      day = day - 30;
    }
  }
   else if (bm == 4||bm == 6||bm == 9||bm == 11)
    {
     day = (30 - bd) + pd;
     if(day > 30)
      {
        month++;
        day = day - 30;
      } 
    }
    else if (bm == 2)
    {
     if(by%4==0)
     {
       day = (29 - bd) + pd;
       if(day > 30)
       {
         month++;
         day = day - 30;
       } 
     }

     if(by%4!=0)
     {
        day = (28 - bd) + pd;
       if(day > 30)
       {
         month++;
         day = day - 30;
       } 
     }
    }

    printf("your age is %d year,%d month, %d day",year,month-1,day);
}   
    
