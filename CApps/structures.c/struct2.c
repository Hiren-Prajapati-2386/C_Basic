//enter 5 student detail like name, roll num, cgpa and ontput it
#include<stdio.h>
//structur declaretion:-
struct student{
    char name[50];
    int roll;
    float cgpa;
};
 int main()
 {
    struct student s[5];
    printf("input student informetion :-\n");
    //input section

    for(int i=0;i<5;i++)
    {
        printf("Enter student %d information name roll cgpa\n",i+1);
        fgets(s[i].name,50,stdin);
        scanf("%d",&s[i].roll);
        scanf("%f",&s[i].cgpa);

        getchar(); //this will consume the newwline character left by scanf
    }

    //output section
    printf("student information:-\n");

    for(int i=0;i<5;i++)
    {
        printf("student %d:\n",i+1)
        printf("name : %s \n",s[i].name);
        printf("roll number : %d\n",s[i].roll);
        printf("cgpa : %f\n",s[i].cgpa);
    }
    return 0;
 }