//calcluate percentage by function
#include<stdio.h>
float percentage(float,float,float);

int main()
{
  float sci,math,san;
  printf("Enter marks of science :\n");
  scanf("%f",&sci);
  printf("Enter marks of math :\n");
  scanf("%f",&math);
  printf("Enter marks of sanskrit :\n");
  scanf("%f",&san);
  float p = percentage(sci,math,san);
  printf("percantag is %f",p);
  return 0;
}

float percentage(float a,float b,float c)
{
  float per = (a+b+c)/3;
  return(per);
}



