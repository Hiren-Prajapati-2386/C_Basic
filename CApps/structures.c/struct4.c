//use of pointer in structures
#include<stdio.h>
struct bankinfo{
   char name[50];
   int accuntnum;
   float amount;
};
int main()
{
   struct bankinfo c1 = {"hiren",123,27000};
   struct bankinfo *ptr = &c1;

   printf("name of consumar = %s\n",(*ptr).name);
   printf("name of consumar = %s\n",ptr->name); //use of -> minse it represent in ptr name filde
   printf("accunt num = %d\n",ptr->accuntnum);
   printf("amount = %f\n",ptr->amount);

   return 0;
   
}