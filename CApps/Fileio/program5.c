//program to input student info from a user &enter into file
#include<stdio.h>
struct student{
    char name[50];
    int roll;
    float cgpa;
};
int main()
{
    FILE *fptr;
    fptr = fopen("program5.txt","a");

    int n;
    printf("how many student detail you enter :");
    scanf("%d",&n);
    struct student s[n];
    printf("Enter student detaile :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d name = ",i+1);
        getchar();                //consume new line charecter for fgets
        fgets(s[i].name,50,stdin);
        printf("roll num = ");
        scanf("%d",&s[i].roll);
        printf("cgpa = ");
        scanf("%f",&s[i].cgpa);
        getchar();
    }

    fprintf(fptr,"student detail are :-\n");
    for(int i=0;i<n;i++)
    {
        fprintf(fptr,"%d.name = %s",i+1,s[i].name);
        fprintf(fptr,"roll num = %d\n",s[i].roll);
        fprintf(fptr,"cgpa = %f\n",s[i].cgpa);
        
    }
    fclose(fptr);
    return 0;


}