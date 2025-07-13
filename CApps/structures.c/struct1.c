//intialisation structures an output it
#include<stdio.h>
#include<string.h>
struct student{
    char name[50];
    int roll;
    float cgpa;
};

int main()
{
    // struct student s1 = {"Hiren",53,9.7};
    struct student s1;
    strcpy(s1.name,"hiren");
    s1.roll = 53;
    s1.cgpa = 9.7;

    printf("student informetion:-\n");
    printf("name = %s\n",s1.name);
    printf("roll number = %d\n",s1.roll);
    printf("cgpa = %f\n",s1.cgpa);
    

    struct student s2;
    strcpy(s2.name,"sahil");
    s2.roll = 23;

    printf("name = %s\n",s2.name);
    printf("rollno = %d\n",s2.roll);
    
}

