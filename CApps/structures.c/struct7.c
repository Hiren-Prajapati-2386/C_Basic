
#include<stdio.h>
union student{
    char name[50];
    int roll;
    int cgpa;

};

int main()
{
    union student a;
    a.roll = 54;
    printf("%d\n",a.roll);
    a.cgpa = 52;
    printf("%d\n",a.cgpa);
}